#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_949;
class Class_2_A078DB95AA50A141;
class Class_3_08BF171A3D46075C;
class Class_3_7E21E2F8DEAA5F4C_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET UNITYSDK_OFFSET(0x14C7ED30)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C7D6D0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14C7D7E0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONTAKEREWARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x14C7EC70)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C7D760)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C7D440)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHGAMEPADSPACELIST_OFFSET UNITYSDK_OFFSET(0x14C7E4C0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET UNITYSDK_OFFSET(0x14C7E420)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREWARDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14C7DF50)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14C7D890)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_SETONTAKEREWARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x14C7ECE0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7EFD0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C7EFE0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14C7F070)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C7F110)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C7F1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABRewardTaskRowWidgetController_TypeDefinitionIndex = 85571;

	class UIRABRewardTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 MinRewardSlotCount = 0x3; // 0x0
		::Class_2_A078DB95AA50A141* _view; // 0x2F0
		::System::Int32 _questId; // 0x2F8
		::System::Action* _onTakeRewardSuccess; // 0x300
		::MoleMole::UIGeneralPopUpHintWidgetController* _redDotCtrl; // 0x308
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrl; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshRedDotAndNew(::Class_3_08BF171A3D46075C* serverQuest, ::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_08BF171A3D46075C*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET))(this, serverQuest, isFinished);
		}

		::System::Void RefreshRewardScrollView(::Class_2_208CC9941471731A_949* questConfig, ::System::Boolean isGot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_949*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREWARDSCROLLVIEW_OFFSET))(this, questConfig, isGot);
		}

		::System::Void RefreshGamepadSpaceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHGAMEPADSPACELIST_OFFSET))(this);
		}

		::System::Void OnTakeRewardSuccess(::Class_3_7E21E2F8DEAA5F4C_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7E21E2F8DEAA5F4C_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONTAKEREWARDSUCCESS_OFFSET))(this, rsp);
		}

		::System::Void SetOnTakeRewardSuccess(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_SETONTAKEREWARDSUCCESS_OFFSET))(this, action);
		}

		::System::Void OnClickGetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
