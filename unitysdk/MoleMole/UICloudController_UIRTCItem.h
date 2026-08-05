#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_19F59E00BF26DFA9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICLOUDCONTROLLER_UIRTCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35C00)

namespace MoleMole
{
	inline static constexpr unsigned int UICloudController_UIRTCItem_TypeDefinitionIndex = 59555;

	class UICloudController_UIRTCItem : public ::System::Object
	{
	public:
		::Enum_3_19F59E00BF26DFA9 UITypeID; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* BindUIRects; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* ControlCanvasGroups; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICLOUDCONTROLLER_UIRTCITEM__CTOR_OFFSET))(this);
		}
	};
}
