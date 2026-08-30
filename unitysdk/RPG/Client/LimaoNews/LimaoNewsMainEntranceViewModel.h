#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceEventViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntranceSceneViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsModule; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISDLCSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD468590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0xD4685F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET UNITYSDK_OFFSET(0xD468610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETCITYTYPE_OFFSET UNITYSDK_OFFSET(0xD4684B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET UNITYSDK_OFFSET(0xD468460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETSKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET UNITYSDK_OFFSET(0xD468540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET UNITYSDK_OFFSET(0xD468600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET UNITYSDK_OFFSET(0xD468620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD468360)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceViewModel_TypeDefinitionIndex = 79099;

	class LimaoNewsMainEntranceViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsModule* _Module; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* _SceneViewModel_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* _EventViewModel_k__BackingField; // 0x30
		::System::Boolean _IsFirstIn_k__BackingField; // 0x38
		::System::Boolean _SkipManagementTutorialOnFirstSetup_k__BackingField; // 0x39

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetIsFirstIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETISFIRSTIN_OFFSET))(this, a1);
		}

		::System::Void SetCityType(::RPG::GameCore::LimaoNewsCityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETCITYTYPE_OFFSET))(this, a1);
		}

		::System::Void SetSkipManagementTutorialOnFirstSetup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SETSKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDLCSubmissionFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISDLCSUBMISSIONFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsFirstIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_ISFIRSTIN_OFFSET))(this);
		}

		::System::Void set_IsFirstIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_ISFIRSTIN_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipManagementTutorialOnFirstSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET))(this);
		}

		::System::Void set_SkipManagementTutorialOnFirstSetup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SKIPMANAGEMENTTUTORIALONFIRSTSETUP_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* get_SceneViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_SCENEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_SceneViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceSceneViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_SCENEVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* get_EventViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_GET_EVENTVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EventViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEVIEWMODEL_SET_EVENTVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
