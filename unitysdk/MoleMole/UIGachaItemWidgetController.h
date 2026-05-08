#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_37CA0C975E67CCBF.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_131;
class Class_2_208CC9941471731A_734;
class Class_2_4A2BD6DB641276C7;
class Class_3_601FA52CA5E757A0;
class MonoUIGachaItemParam_ConfigItem;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETCONFIGITEMS_OFFSET UNITYSDK_OFFSET(0x15F04FD0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETRARITYSOUNDKEY_OFFSET UNITYSDK_OFFSET(0x15F05570)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x15F04340)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F04880)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYANIMFINISH_OFFSET UNITYSDK_OFFSET(0x15F05610)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x15F04800)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F04910)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F04350)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F043B0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_PLAYITEMFADEINANIM_OFFSET UNITYSDK_OFFSET(0x15F04A30)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHITEMIMAGE_OFFSET UNITYSDK_OFFSET(0x15F051F0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHRARITY_OFFSET UNITYSDK_OFFSET(0x15F05030)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15F04600)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REGISTERONCLICK_OFFSET UNITYSDK_OFFSET(0x15F04F80)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_RESETFADEINANIMSTATE_OFFSET UNITYSDK_OFFSET(0x15F04990)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F05BA0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x15F05C00)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F05C70)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x15F05D00)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F05D10)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F05DA0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F05E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetController_TypeDefinitionIndex = 75507;

	class UIGachaItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_4A2BD6DB641276C7* _view; // 0x2B8
		::Class_3_601FA52CA5E757A0* _item; // 0x2C0
		::Enum_3_37CA0C975E67CCBF _itemType; // 0x2C8
		::Class_2_208CC9941471731A_131* _template; // 0x2D0
		::Class_2_208CC9941471731A_734* _resourceTemplate; // 0x2D8
		::System::Action_2<::Enum_3_37CA0C975E67CCBF, ::System::Int32>* _onClick; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnPlayFadeInAnimationAfterLoading(::System::String* fadeAnimation, ::System::Boolean isPlayToEnd, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, fadeAnimation, isPlayToEnd, animSpeed);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetFadeInAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_RESETFADEINANIMSTATE_OFFSET))(this);
		}

		::System::Void PlayItemFadeInAnim(::System::Single activateAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_PLAYITEMFADEINANIM_OFFSET))(this, activateAnimDelay);
		}

		::System::Void RegisterOnClick(::System::Action_2<::Enum_3_37CA0C975E67CCBF, ::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Enum_3_37CA0C975E67CCBF, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REGISTERONCLICK_OFFSET))(this, action);
		}

		::System::Collections::Generic::List_1<::MonoUIGachaItemParam_ConfigItem*>* GetConfigItems()
		{
			return ((::System::Collections::Generic::List_1<::MonoUIGachaItemParam_ConfigItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETCONFIGITEMS_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshItemImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHITEMIMAGE_OFFSET))(this);
		}

		::System::Void RefreshRarity(::System::Int32 rarityValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_REFRESHRARITY_OFFSET))(this, rarityValue);
		}

		::System::String* GetRaritySoundKey(::System::Int32 rarity)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_GETRARITYSOUNDKEY_OFFSET))(this, rarity);
		}

		::System::Void OnPlayAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER_ONPLAYANIMFINISH_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPlayFadeInAnimationAfterLoading(::System::String* P0, ::System::Boolean P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
