#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRSHIPBIRDEMITTER_EMITTERLEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9093E60)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBirdEmitter_EmitterLevelInfo_TypeDefinitionIndex = 48423;

	class AirshipBirdEmitter_EmitterLevelInfo : public ::System::Object
	{
	public:
		::System::Single maxAliveCount; // 0x10
		::System::Single emitInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_EMITTERLEVELINFO__CTOR_OFFSET))(this);
		}
	};
}
