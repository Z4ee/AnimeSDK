#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AACF40)
#define RPG_GAMECORE_RAIDPERFORMANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAD0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidPerformanceConfigRow_TypeDefinitionIndex = 13870;

	class RaidPerformanceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 HardLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidPerformanceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidPerformanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
