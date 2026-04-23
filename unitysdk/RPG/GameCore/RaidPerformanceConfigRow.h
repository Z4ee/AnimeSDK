#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C88040)
#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C881E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidPerformanceConfigRow_TypeDefinitionIndex = 13804;

	class RaidPerformanceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RaidID; // 0x10
		::System::UInt32 HardLevel; // 0x14
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::UInt32 PerformanceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RaidPerformanceConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidPerformanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
