#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBabeltowerPage02Controller.h"

class Class_2_79AE422BA06F6D26;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x19564430)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x19564960)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x195647D0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONBABELTOWERUPDATERANK_OFFSET UNITYSDK_OFFSET(0x195658B0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19564740)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x195645A0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19564A90)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONTEACH_OFFSET UNITYSDK_OFFSET(0x19565900)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19563FA0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19564230)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_OPENRANKINFO_OFFSET UNITYSDK_OFFSET(0x19566280)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x19564FE0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHPOWER_OFFSET UNITYSDK_OFFSET(0x19564EC0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_TEST_OFFSET UNITYSDK_OFFSET(0x19563F30)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATERANKDATA_OFFSET UNITYSDK_OFFSET(0x19565F20)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATERANKVIEW_OFFSET UNITYSDK_OFFSET(0x19565620)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19565EA0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CREATESELECTITEM_B__10_0_OFFSET UNITYSDK_OFFSET(0x195665C0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19566450)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x195664F0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__OPENRANKINFO_B__19_0_OFFSET UNITYSDK_OFFSET(0x19566730)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x19566900)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x19566910)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x19566920)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19566930)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19566940)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19566970)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19566980)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19566990)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x195669A0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x195669B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage03Controller_TypeDefinitionIndex = 48543;

	class UIBabeltowerPage03Controller : public ::MoleMole::UIBabeltowerPage02Controller
	{
	public:
		::Class_2_79AE422BA06F6D26* _view; // 0x3E0
		::System::Single configUpdateTime; // 0x3E8
		::System::String* ANIM_NAME; // 0x3F0
		::System::Single waitTimer; // 0x3F8
		::System::Int32 mvpCount; // 0x3FC
		::System::Int32 totalMvpCount; // 0x400

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_TEST_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CREATESELECTITEM_OFFSET))(this, arg);
		}

		::System::Void OnPostRefreshView(::System::Int32 initScrollIndex, ::System::UInt32 initFloor, ::System::Boolean isDoAnimation, ::System::Boolean isWaitAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this, initScrollIndex, initFloor, isDoAnimation, isWaitAnimation);
		}

		::System::Void RefreshPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHPOWER_OFFSET))(this);
		}

		::System::Void RefreshDetail(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHDETAIL_OFFSET))(this, floorIndex, realFloorIndex);
		}

		::System::Void UpdateRankView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATERANKVIEW_OFFSET))(this);
		}

		::System::Void OnBabelTowerUpdateRank(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONBABELTOWERUPDATERANK_OFFSET))(this, args);
		}

		::System::Void OnTeach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONTEACH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateRankData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATERANKDATA_OFFSET))(this);
		}

		::System::Void OpenRankInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_OPENRANKINFO_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this);
		}

		::System::Void _CreateSelectItem_b__10_0(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CREATESELECTITEM_B__10_0_OFFSET))(this, floorIndex, realFloorIndex, selectIndex);
		}

		::System::Void _OpenRankInfo_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__OPENRANKINFO_B__19_0_OFFSET))(this);
		}

		::System::Void __base_CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CHECKNEWBIE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* __base_CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* P0)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CREATESELECTITEM_OFFSET))(this, P0);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* __base_GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostRefreshView(::System::Int32 P0, ::System::UInt32 P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshDetail(::System::UInt32 P0, ::System::UInt32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_UPDATE_OFFSET))(this);
		}
	};
}
