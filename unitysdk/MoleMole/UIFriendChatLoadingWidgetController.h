#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_9EDE5D0623B668B8;
class Class_2_6BC87267F41C82C6_5;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_DOINIT_OFFSET UNITYSDK_OFFSET(0x17F8CC60)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F8CA40)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17F8CB50)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F8CAD0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F8C9E0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8CDD0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F8CDE0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17F8CE70)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F8CF10)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F8CFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatLoadingWidgetController_TypeDefinitionIndex = 49243;

	class UIFriendChatLoadingWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_6BC87267F41C82C6_5* _view; // 0x2F0
		::System::Boolean _isDetector; // 0x2F8
		::UnityEngine::RectTransform* _detectorTrans; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void DoInit(::Class_1_9EDE5D0623B668B8* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_DOINIT_OFFSET))(this, item);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
