#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingReadyDriverPanelIconState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListControl; }
namespace RPG::Client::B51Racing { class B51RacingReadyDriverDetailViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::Client::B51Racing { class MonoB51RacingReadyVehicleDetailItem; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_GET_CARDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0x1B6DB680)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_GET_DRIVERBUTTON_OFFSET UNITYSDK_OFFSET(0x1B6DB640)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_ONDRIVERPANELCLICK_OFFSET UNITYSDK_OFFSET(0x1B6DBFC0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_ONVEHICLEDETAILCLICK_OFFSET UNITYSDK_OFFSET(0x1B6DC2E0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_REFRESHDRIVERDETAIL_OFFSET UNITYSDK_OFFSET(0x1B6DB8A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6DB6C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__APPLYDRIVERPANELICONSTATE_OFFSET UNITYSDK_OFFSET(0x1B6DBA70)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6DC560)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DC530)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6DB5A0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__GETICONSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B6DC4D0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6DB340)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6DB160)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__SETUPNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1B6DBE70)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1B6DBC50)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingReadyDriverPanel_TypeDefinitionIndex = 80630;

	class MonoB51RacingReadyDriverPanel : public ::Sofa::BaseSofaControl
	{
	public:
		static ::RPG::Client::TextID* StaticGet_s_TextInGameStats()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MonoB51RacingReadyDriverPanel_TypeDefinitionIndex)->GetStaticField(0x15390);
		}
		// static const ::System::String* ICON_STATE_NORMAL; // 0x0
		// static const ::System::String* ICON_STATE_LOCK; // 0x0
		// static const ::System::String* TOAST_AUTO_EQUIPPED_NEW_DRIVER; // 0x0
		// static const ::System::String* TOAST_DRIVER_LOCKED_FOR_MATCH; // 0x0
		// static const ::System::String* TOAST_DRIVER_SWITCH_UNLOCKED; // 0x0
		::RPG::Client::UIStateCtrl* _AvatarImgCtrl; // 0x38
		::RPG::Client::LocalizedText* _DriverBonusHint; // 0x40
		::UnityEngine::Transform* _SwitchIconPanel; // 0x48
		::RPG::Client::UIStateCtrl* _SwitchIconStateCtrl; // 0x50
		::RPG::Client::B51Racing::MonoB51RacingReadyVehicleDetailItem* _VehicleDetailItem; // 0x58
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _ValueIconList; // 0x60
		::RPG::Client::AnimatorButton* _BtnDriver; // 0x68
		::RPG::Client::AnimatorButton* _BtnCarDetail; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_DriverButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_GET_DRIVERBUTTON_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CarDetailButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_GET_CARDETAILBUTTON_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void RefreshDriverDetail(::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyDriverDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_REFRESHDRIVERDETAIL_OFFSET))(this, a1);
		}

		::System::Void OnDriverPanelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_ONDRIVERPANELCLICK_OFFSET))(this);
		}

		::System::Void OnVehicleDetailClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL_ONVEHICLEDETAILCLICK_OFFSET))(this);
		}

		::System::Void _ApplyDriverPanelIconState(::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__APPLYDRIVERPANELICONSTATE_OFFSET))(this, a1);
		}

		static ::System::String* _GetIconStateName(::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState a1)
		{
			return ((::System::String*(*)(::RPG::Client::B51Racing::B51RacingReadyDriverPanelIconState))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__GETICONSTATENAME_OFFSET))(a1);
		}

		static ::System::Void _ShowToast(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__SHOWTOAST_OFFSET))(a1);
		}

		::System::Void _SetupNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYDRIVERPANEL__SETUPNAVIGATION_OFFSET))(this);
		}
	};
}
