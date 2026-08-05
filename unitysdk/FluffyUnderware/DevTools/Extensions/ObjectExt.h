#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x1EA51400)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EA53910)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_TODUMPSTRING_OFFSET UNITYSDK_OFFSET(0x1EA53930)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int ObjectExt_TypeDefinitionIndex = 29002;

	class ObjectExt : public ::System::Object
	{
	public:
		static ::System::Boolean Destroy(::UnityEngine::Object* object)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_DESTROY_OFFSET))(object);
		}

		static ::System::Boolean Destroy_1(::UnityEngine::Object* object, ::System::Boolean isUndoable, ::System::Boolean doPrefabCheck)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_DESTROY_1_OFFSET))(object, isUndoable, doPrefabCheck);
		}

		static ::System::String* ToDumpString(::System::Object* o)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_OBJECTEXT_TODUMPSTRING_OFFSET))(o);
		}
	};
}
