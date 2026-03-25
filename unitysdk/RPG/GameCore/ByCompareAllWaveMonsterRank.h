#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_1B3968ED24967866_OFFSET UNITYSDK_OFFSET(0x17002880)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_91F6A5F562F9BD92_OFFSET UNITYSDK_OFFSET(0x17002950)
#define RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x17002900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAllWaveMonsterRank_TypeDefinitionIndex = 21246;

	class ByCompareAllWaveMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::UInt32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B3968ED24967866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_1B3968ED24967866_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91F6A5F562F9BD92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALLWAVEMONSTERRANK_METHOD_4_91F6A5F562F9BD92_OFFSET))(a1, a2);
		}
	};
}
