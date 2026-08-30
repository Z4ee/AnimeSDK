#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListControl; }
namespace RPG::Client::B51Racing { class B51RacingNewCarDriverPageViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC891BD0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC8921A0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC891520)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC8915C0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC8916B0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC891AB0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xC891A00)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0xC891CE0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHBONUSICONLIST_OFFSET UNITYSDK_OFFSET(0xC892120)
#define RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHTEXTS_OFFSET UNITYSDK_OFFSET(0xC891DD0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewCarDriverPageControl_TypeDefinitionIndex = 80507;

	class B51RacingNewCarDriverPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _AvatarImgCtrl; // 0x38
		::RPG::Client::LocalizedText* _NameText1; // 0x40
		::RPG::Client::LocalizedText* _NameText2; // 0x48
		::RPG::Client::LocalizedText* _IndexText; // 0x50
		::RPG::Client::LocalizedText* _DescrText; // 0x58
		::RPG::Client::LocalizedText* _SkillNameText; // 0x60
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _BonusIconListControl; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _RefreshAvatar(::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHAVATAR_OFFSET))(this, a1);
		}

		::System::Void _RefreshTexts(::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHTEXTS_OFFSET))(this, a1);
		}

		::System::Void _RefreshBonusIconList(::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWCARDRIVERPAGECONTROL__REFRESHBONUSICONLIST_OFFSET))(this, a1);
		}
	};
}
