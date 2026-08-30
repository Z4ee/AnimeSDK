#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRSHIPEMITTER_EMITTERLEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7360D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipEmitter_EmitterLevelInfo_TypeDefinitionIndex = 59930;

	class AirshipEmitter_EmitterLevelInfo : public ::System::Object
	{
	public:
		::System::Single maxAliveCount; // 0x10
		::System::Single emitInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_EMITTERLEVELINFO__CTOR_OFFSET))(this);
		}
	};
}
