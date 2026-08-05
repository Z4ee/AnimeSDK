#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_271;
class Class_2_79F6D62CE30E3F8E_132;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197DA170)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197DA200)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBATTLEPHOTOWIDGET_OFFSET UNITYSDK_OFFSET(0x197DA280)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGETINLEVEL_OFFSET UNITYSDK_OFFSET(0x197DA420)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x197DA930)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_SHOWBUFF_OFFSET UNITYSDK_OFFSET(0x197DAD80)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197DB750)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197DB7B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197DB840)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialInLevelPauseBuffInfoWidgetController_TypeDefinitionIndex = 65506;

	class UIActivityTeamTrialInLevelPauseBuffInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_132* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshBattlePhotoWidget(::Class_2_208CC9941471731A_271* activityBattleAbilityTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBATTLEPHOTOWIDGET_OFFSET))(this, activityBattleAbilityTemplate);
		}

		::System::Void RefreshWidgetInLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGETINLEVEL_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 questID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, questID, conditionList, effectList);
		}

		::System::Boolean ShowBuff(::System::Int32 index, ::Foundation::AssetPath buffIcon, ::System::String* nameKey, ::System::String* descKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::AssetPath, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_SHOWBUFF_OFFSET))(this, index, buffIcon, nameKey, descKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
