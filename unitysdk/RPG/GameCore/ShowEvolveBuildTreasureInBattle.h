#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_METHOD_3_242601D4CEE8293B_OFFSET UNITYSDK_OFFSET(0x1D091DC0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_METHOD_3_60DEF8162A56D360_OFFSET UNITYSDK_OFFSET(0x1D091D80)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D091DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildTreasureInBattle_TypeDefinitionIndex = 22265;

	class ShowEvolveBuildTreasureInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildTreasureType TreasureType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60DEF8162A56D360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_METHOD_3_60DEF8162A56D360_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_242601D4CEE8293B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLE_METHOD_3_242601D4CEE8293B_OFFSET))(a1, a2);
		}
	};
}
