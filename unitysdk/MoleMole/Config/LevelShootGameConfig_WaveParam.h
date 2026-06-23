#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAVEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0746F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WaveParam_TypeDefinitionIndex = 70553;

	class LevelShootGameConfig_WaveParam : public ::System::Object
	{
	public:
		::System::Int32 WaveID; // 0x10
		::System::Single Interval; // 0x14
		::System::String* LogicWaveTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAVEPARAM__CTOR_OFFSET))(this);
		}
	};
}
