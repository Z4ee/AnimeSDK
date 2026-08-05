#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_DELETECHILDREN_OFFSET UNITYSDK_OFFSET(0x1EA540A0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_DESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1EA541A0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_UNDOABLESETPARENT_OFFSET UNITYSDK_OFFSET(0x1EA54080)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int TransformExt_TypeDefinitionIndex = 29000;

	class TransformExt : public ::System::Object
	{
	public:
		static ::System::Void UndoableSetParent(::UnityEngine::Transform* child, ::UnityEngine::Transform* newParent, ::System::Boolean worldPositionStays, ::System::String* undoOperationName)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_UNDOABLESETPARENT_OFFSET))(child, newParent, worldPositionStays, undoOperationName);
		}

		static ::System::Void DeleteChildren(::UnityEngine::Transform* transform, ::System::Boolean isUndoable, ::System::Boolean doPrefabCheck)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_DELETECHILDREN_OFFSET))(transform, isUndoable, doPrefabCheck);
		}

		static ::System::Void DestroyObjects(::System::Boolean isUndoable, ::System::Boolean doPrefabCheck, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* destructionTargets)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TRANSFORMEXT_DESTROYOBJECTS_OFFSET))(isUndoable, doPrefabCheck, destructionTargets);
		}
	};
}
