#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTSHAKEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB0ED600)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenInteractShakeParams_TypeDefinitionIndex = 70447;

	class HipplenInteractShakeParams : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenInteractLikeType TargetLikeType; // 0x10
		::System::Single ShakePosIntensity; // 0x14
		::System::Single ShakePosSpeed; // 0x18
		::System::Single ShakeRotIntensity; // 0x1C
		::System::Single ShakeRotSpeed; // 0x20
		::System::Single ShakeRotXOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTSHAKEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
