#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogDropDownBoxRowContext_TypeDefinitionIndex = 71143;

	class UIVHSStoreDialogDropDownBoxRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* filterTagLv; // 0x28
		::UnityEngine::RectTransform* localTrans; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* filterTag; // 0x38
		::System::Action* onCloseCallback; // 0x40
		::System::Int32 typeSelectWidth; // 0x48
		::System::Int32 typeSelectOffsetX; // 0x4C
		::System::Int32 typeSelectOffsetY; // 0x50
		::System::Int32 typeSelectHeight; // 0x54

		::System::Void _ctor(::UnityEngine::RectTransform* localTrans, ::System::Int32 typeSelectWidth, ::System::Int32 typeSelectHeight, ::System::Int32 typeSelectOffsetX, ::System::Int32 typeSelectOffsetY, ::System::Collections::Generic::HashSet_1<::System::Int32>* filterTag, ::System::Collections::Generic::HashSet_1<::System::Int32>* filterTagLv, ::System::Action* onCloseCallback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGDROPDOWNBOXROWCONTEXT__CTOR_OFFSET))(this, localTrans, typeSelectWidth, typeSelectHeight, typeSelectOffsetX, typeSelectOffsetY, filterTag, filterTagLv, onCloseCallback);
		}
	};
}
