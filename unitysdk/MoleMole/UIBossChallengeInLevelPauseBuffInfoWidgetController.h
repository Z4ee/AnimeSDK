#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_79F6D62CE30E3F8E_51;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1680DB80)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1680DC10)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1680DA70)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1680DAD0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFFID_OFFSET UNITYSDK_OFFSET(0x1680DC90)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET UNITYSDK_OFFSET(0x1680E3A0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x1680E0D0)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_SETACITVESTATE_OFFSET UNITYSDK_OFFSET(0x1680DF90)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1680E780)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1680E800)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1680E890)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1680E920)
#define MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1680E9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInLevelPauseBuffInfoWidgetController_TypeDefinitionIndex = 63796;

	class UIBossChallengeInLevelPauseBuffInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_51* _view; // 0x2B8
		::UnityEngine::Color DefaultDescColor; // 0x2C0
		::UnityEngine::Color ActiveDescColor; // 0x2D0
		::UnityEngine::Color InactiveDescColor; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshBuffID(::System::Int32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFFID_OFFSET))(this, buffID);
		}

		::System::Void SetAcitveState(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_SETACITVESTATE_OFFSET))(this, isActive);
		}

		::System::Void RefreshBuff(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_OFFSET))(this, nameKey, iconPath, descKey);
		}

		::System::Void RefreshBuff_1(::System::String* nameKey, ::Foundation::AssetPath iconPath, ::System::String* descKey, ::System::Boolean showTitle, ::System::Boolean showBuff, ::System::Boolean showDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET))(this, nameKey, iconPath, descKey, showTitle, showBuff, showDesc);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
