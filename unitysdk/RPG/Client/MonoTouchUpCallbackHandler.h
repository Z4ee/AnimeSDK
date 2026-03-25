#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class Action; }

#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D3F050)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D3F3F0)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D3EFB0)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERONTOUCHDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D3F000)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_START_OFFSET UNITYSDK_OFFSET(0x9D3F0A0)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3F800)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x9D3F740)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0x9D3F7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTouchUpCallbackHandler_TypeDefinitionIndex = 51732;

	class MonoTouchUpCallbackHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* _TouchDownCallback; // 0x18
		::System::Action* _TouchUpCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RegisterOnTouchDownCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERONTOUCHDOWNCALLBACK_OFFSET))(this, callback);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_CLEAR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnTouchDown(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHDOWN_OFFSET))(this, gesture);
		}

		::System::Void _OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHUP_OFFSET))(this, gesture);
		}
	};
}
