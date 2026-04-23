#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoJoyStickProvider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xAA05D50)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xAA06230)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xAA05E30)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CHECKINBOUNDRYVEC2_OFFSET UNITYSDK_OFFSET(0xAA06050)
#define RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA05BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipJoyStickProvider_TravelShipPressState_TypeDefinitionIndex = 56549;

	class MonoTravelShipJoyStickProvider_TravelShipPressState : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _AnalogLastScreenPos; // 0x10
		::UnityEngine::Vector2 _AnalogPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* baseOwner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_ENTER_OFFSET))(this, baseOwner);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* baseOwner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_TICK_OFFSET))(this, baseOwner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _CheckInBoundryVec2(::UnityEngine::Vector2& pos, ::UnityEngine::RectTransform* boundary)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPJOYSTICKPROVIDER_TRAVELSHIPPRESSSTATE__CHECKINBOUNDRYVEC2_OFFSET))(this, pos, boundary);
		}
	};
}
