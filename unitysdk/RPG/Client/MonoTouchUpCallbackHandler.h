#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class Action; }

#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xD86E010)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD86E440)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xD86DF70)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERONTOUCHDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xD86DFC0)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_START_OFFSET UNITYSDK_OFFSET(0xD86E060)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD86E900)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0xD86E820)
#define RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xD86E890)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTouchUpCallbackHandler_TypeDefinitionIndex = 63748;

	class MonoTouchUpCallbackHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* _TouchDownCallback; // 0x18
		::System::Action* _TouchUpCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterOnTouchDownCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER_REGISTERONTOUCHDOWNCALLBACK_OFFSET))(this, a1);
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

		::System::Void _OnTouchDown(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTOUCHUPCALLBACKHANDLER__ONTOUCHUP_OFFSET))(this, a1);
		}
	};
}
