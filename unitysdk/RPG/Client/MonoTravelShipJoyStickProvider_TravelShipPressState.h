#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoJoyStickProvider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1C28C450)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1C28C930)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1C28C530)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CHECKINBOUNDRYVEC2_OFFSET UNITYSDK_OFFSET(0x1C28C750)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C28C440)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipJoyStickProvider_TravelShipPressState_TypeDefinitionIndex = 61416;

	class MonoTravelShipJoyStickProvider_TravelShipPressState : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _AnalogPos; // 0x10
		::UnityEngine::Vector2 _AnalogLastScreenPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _CheckInBoundryVec2(::UnityEngine::Vector2& a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CHECKINBOUNDRYVEC2_OFFSET))(this, a1, a2);
		}
	};
}
