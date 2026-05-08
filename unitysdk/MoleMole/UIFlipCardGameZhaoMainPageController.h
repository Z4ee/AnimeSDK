#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_79AE422BA06F6D26_232;
class Class_2_8265DBA59E61D93F;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_FLIPCARDSUCCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1431DFF0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1431CFF0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1431D3F0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONACTIVITYCHANGE_OFFSET UNITYSDK_OFFSET(0x1431DEA0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1431D000)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATITEM_OFFSET UNITYSDK_OFFSET(0x1431DEF0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1431E120)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1431DDB0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1431E280)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1431E440)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1431D090)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1431D580)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1431E4B0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1431E550)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__FLIPCARDSUCCESSHANDLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1431E560)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1431E610)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1431E6A0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1431E6B0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1431E6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameZhaoMainPageController_TypeDefinitionIndex = 72443;

	class UIFlipCardGameZhaoMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* TextCanFlipTimes; // 0x0
		// static const ::System::String* TextFlipCard; // 0x0
		// static const ::System::String* TextHasFlipedAllCard; // 0x0
		// static const ::System::String* TextHasNoFlipTimes; // 0x0
		// static const ::System::String* TextHasNoFlipTimesCountdown; // 0x0
		// static const ::System::String* TextRewardPreviewTitle; // 0x0
		::Class_2_8265DBA59E61D93F* _model; // 0x320
		::Class_2_79AE422BA06F6D26_232* _view; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnActivityChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONACTIVITYCHANGE_OFFSET))(this, args);
		}

		::MoleMole::ScrollViewItemWidgetController* OnCreatItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONCREATITEM_OFFSET))(this, arg);
		}

		::System::Void FlipCardSuccessHandle(::System::Int32 indexOfCardBoard, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_FLIPCARDSUCCESSHANDLE_OFFSET))(this, indexOfCardBoard, delay);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void _FlipCardSuccessHandle_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER__FLIPCARDSUCCESSHANDLE_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
