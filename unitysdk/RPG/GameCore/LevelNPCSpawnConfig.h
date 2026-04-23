#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4D440)
#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4C480)
#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCSpawnConfig_TypeDefinitionIndex = 16389;

	class LevelNPCSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Boolean TryCapture; // 0x20
		::System::Single CaptureDistanceTolerance; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCSpawnConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCSpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCSpawnConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
