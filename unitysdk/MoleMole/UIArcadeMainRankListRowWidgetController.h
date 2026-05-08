#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1B26407BD81502D9;
class Class_2_19206BC47BA92FC3_2;
class Class_2_888C59F77423C576_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_INITPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x13EF6CE0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x13EF5E30)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13EF5F30)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13EF6040)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EF5FC0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13EF5DC0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13EF5EC0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHCOMMONVIEW_OFFSET UNITYSDK_OFFSET(0x13EF69F0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHTOPSELFVIEW_OFFSET UNITYSDK_OFFSET(0x13EF6150)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHUSERVIEW_OFFSET UNITYSDK_OFFSET(0x13EF66D0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_SWITCHACCOUNTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x13EF6C60)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF74D0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13EF74E0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13EF7570)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EF7610)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13EF76A0)
#define MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13EF7730)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMainRankListRowWidgetController_TypeDefinitionIndex = 81104;

	class UIArcadeMainRankListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_19206BC47BA92FC3_2* _view; // 0x2E8
		::System::Int32 _playerID; // 0x2F0
		::System::Boolean _allowShowPlatform; // 0x2F4
		::System::Boolean _canSwitchPlatformInfo; // 0x2F5
		::System::Boolean _isShowingPlatform; // 0x2F6
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x2F8
		::System::String* _inGameName; // 0x300
		::System::String* _otherPlatformName; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshUserView(::System::Int32 playerID, ::Class_1_1B26407BD81502D9* rankData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_1B26407BD81502D9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHUSERVIEW_OFFSET))(this, playerID, rankData);
		}

		::System::Void RefreshTopSelfView(::System::Int32 playerID, ::Class_2_888C59F77423C576_1* rankData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_888C59F77423C576_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHTOPSELFVIEW_OFFSET))(this, playerID, rankData);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshCommonView(::System::UInt32 score, ::System::UInt32 rank, ::System::UInt32 rankPercent, ::System::Boolean isEverPlayed, ::System::Int32 headPortrait, ::System::String* inGameName, ::System::String* consoleAccountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_REFRESHCOMMONVIEW_OFFSET))(this, score, rank, rankPercent, isEverPlayed, headPortrait, inGameName, consoleAccountName);
		}

		::System::Void InitPlatformUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_INITPLATFORMUI_OFFSET))(this);
		}

		::System::Void SwitchAccountNameInfo(::System::Boolean showConsoleAccountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER_SWITCHACCOUNTNAMEINFO_OFFSET))(this, showConsoleAccountName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
