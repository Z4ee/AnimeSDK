#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_702;
class Class_2_A078DB95AA50A141;
class Class_3_08BF171A3D46075C_1;
class Class_3_88D140F5E09465E1_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCLICKGETREWARD_OFFSET UNITYSDK_OFFSET(0x16752E90)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167517E0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167518F0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONTAKEREWARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x16752DD0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16751870)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16751550)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHGAMEPADSPACELIST_OFFSET UNITYSDK_OFFSET(0x16752620)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET UNITYSDK_OFFSET(0x16752580)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREWARDSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16752060)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x167519A0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_SETONTAKEREWARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x16752E40)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16753130)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16753140)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167531D0)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16753270)
#define MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16753300)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABRewardTaskRowWidgetController_TypeDefinitionIndex = 60919;

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

		::System::Void RefreshRedDotAndNew(::Class_3_08BF171A3D46075C_1* serverQuest, ::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_08BF171A3D46075C_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET))(this, serverQuest, isFinished);
		}

		::System::Void RefreshRewardScrollView(::Class_2_208CC9941471731A_702* questConfig, ::System::Boolean isGot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_702*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHREWARDSCROLLVIEW_OFFSET))(this, questConfig, isGot);
		}

		::System::Void RefreshGamepadSpaceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_REFRESHGAMEPADSPACELIST_OFFSET))(this);
		}

		::System::Void OnTakeRewardSuccess(::Class_3_88D140F5E09465E1_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_88D140F5E09465E1_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTASKROWWIDGETCONTROLLER_ONTAKEREWARDSUCCESS_OFFSET))(this, rsp);
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
