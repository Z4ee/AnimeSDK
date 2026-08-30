#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2E6EA8FA1A071A6;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_CREATE_OFFSET UNITYSDK_OFFSET(0xC84A370)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC84AB70)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC84A420)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_REFRESH_OFFSET UNITYSDK_OFFSET(0xC84A970)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC84A410)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__ONPOSTERCARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xC84AD20)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__REGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC84A5F0)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__REQUESTACTIVITYDATAIFNEEDED_OFFSET UNITYSDK_OFFSET(0xC84A6F0)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__UNREGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC84AC20)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER___REQUESTACTIVITYDATAIFNEEDED_B__6_0_OFFSET UNITYSDK_OFFSET(0xC84AD70)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER___REQUESTACTIVITYDATAIFNEEDED_B__6_1_OFFSET UNITYSDK_OFFSET(0xC84AD80)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingActivityPosterCarPresenter_TypeDefinitionIndex = 80626;

	class B51RacingActivityPosterCarPresenter : public ::System::Object
	{
	public:
		// static const ::System::String* STATE_DIY_OFF; // 0x0
		// static const ::System::String* STATE_DIY_ON; // 0x0
		::Class_1_E2E6EA8FA1A071A6* _AppearanceHelper; // 0x10
		::UnityEngine::GameObject* _CustomCarRoot; // 0x18
		::RPG::Client::UIStateCtrl* _CarPlayerStateCtrl; // 0x20
		::System::Boolean _HasNotifyHandlers; // 0x28
		::System::Boolean _IsDisposed; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::B51Racing::B51RacingActivityPosterCarPresenter* Create(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingActivityPosterCarPresenter*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Initialize(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_REFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER_DISPOSE_OFFSET))(this);
		}

		::System::Void _RequestActivityDataIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__REQUESTACTIVITYDATAIFNEEDED_OFFSET))(this);
		}

		::System::Void _RegisterNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__REGISTERNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _UnregisterNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__UNREGISTERNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPosterCarDataChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER__ONPOSTERCARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void __RequestActivityDataIfNeeded_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER___REQUESTACTIVITYDATAIFNEEDED_B__6_0_OFFSET))(this);
		}

		::System::Void __RequestActivityDataIfNeeded_b__6_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPOSTERCARPRESENTER___REQUESTACTIVITYDATAIFNEEDED_B__6_1_OFFSET))(this, a1);
		}
	};
}
