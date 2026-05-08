#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIHadalZone_RewardV3_PopWindowController_HadalRewardData.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_336;
class Class_2_468A4FBF2E9F527C;
class Class_2_A6415ACD2BAEC3D4;
class Class_3_025FF4981524A424_526;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_RewardV3_PopWindowController_RewardContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x157B4420)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x157B4430)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONCLICKLEFTTAB_OFFSET UNITYSDK_OFFSET(0x157B5C90)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157B55B0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x157B5D80)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157B5640)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157B4440)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157B4560)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x157B6060)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CREATEROWLAYERREWARD_OFFSET UNITYSDK_OFFSET(0x157B5B90)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157B5FD0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONEKEYGETREWARD_OFFSET UNITYSDK_OFFSET(0x157B56B0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONUIOPEN_B__12_0_OFFSET UNITYSDK_OFFSET(0x157B61E0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONUIOPEN_B__12_1_OFFSET UNITYSDK_OFFSET(0x157B61F0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__UPDATEONEKEYSTATUS_OFFSET UNITYSDK_OFFSET(0x157B5220)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__UPDATEREWARDS_OFFSET UNITYSDK_OFFSET(0x157B47C0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157B63A0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x157B6430)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x157B64C0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157B64D0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x157B64E0)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___CREATEROWLAYERREWARD_B__19_0_OFFSET UNITYSDK_OFFSET(0x157B6390)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___ONEKEYGETREWARD_B__16_0_OFFSET UNITYSDK_OFFSET(0x157B6200)
#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___UPDATEREWARDS_G__GETZONENAMETEXTKEY_18_1_OFFSET UNITYSDK_OFFSET(0x157B5AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV3_PopWindowController_TypeDefinitionIndex = 65349;

	class UIHadalZone_RewardV3_PopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ZoneNameTextCollection()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV3_PopWindowController_TypeDefinitionIndex)->GetStaticField(0x3AAD0);
		}
		::MoleMole::UIHadalZone_RewardV3_PopWindowController_RewardContext* _ctx; // 0x310
		::Class_2_A6415ACD2BAEC3D4* _view; // 0x318
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x320
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_RewardV3_PopWindowController_HadalRewardData>*>* _scrollDataList; // 0x328
		::System::Int32 _currSelectTabIdx; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateOneKeyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__UPDATEONEKEYSTATUS_OFFSET))(this);
		}

		::System::Void _OneKeyGetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONEKEYGETREWARD_OFFSET))(this);
		}

		::System::Void _UpdateRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__UPDATEREWARDS_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _CreateRowLayerReward(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__CREATEROWLAYERREWARD_OFFSET))(this, controlReference);
		}

		::System::Void OnClickLeftTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONCLICKLEFTTAB_OFFSET))(this, index);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void _OnUIOpen_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONUIOPEN_B__12_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER__ONUIOPEN_B__12_1_OFFSET))(this);
		}

		::System::Void __OneKeyGetReward_b__16_0(::Class_3_025FF4981524A424_526* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_526*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___ONEKEYGETREWARD_B__16_0_OFFSET))(this, rsp);
		}

		static ::System::String* __UpdateRewards_g__GetZoneNameTextKey_18_1(::Class_1_5DA2E7556103D5A3_336* zoneInfo, ::System::Int32 index)
		{
			return ((::System::String*(*)(::Class_1_5DA2E7556103D5A3_336*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___UPDATEREWARDS_G__GETZONENAMETEXTKEY_18_1_OFFSET))(zoneInfo, index);
		}

		::System::Void __CreateRowLayerReward_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___CREATEROWLAYERREWARD_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
