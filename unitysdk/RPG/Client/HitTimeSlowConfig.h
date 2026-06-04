#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NamedCurve; }

#define RPG_CLIENT_HITTIMESLOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBD1E260)

namespace RPG::Client
{
	inline static constexpr unsigned int HitTimeSlowConfig_TypeDefinitionIndex = 56137;

	class HitTimeSlowConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::HitTimeSlowType Type; // 0x10
		::RPG::GameCore::HitTimeSlowIntensity Intensity; // 0x14
		::System::Single Duration; // 0x18
		::RPG::Client::NamedCurve* Curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HITTIMESLOWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
