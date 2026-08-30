#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_3793E39D59A6C5BE_OFFSET UNITYSDK_OFFSET(0x1D240110)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_6E1B112CE8A8BF93_OFFSET UNITYSDK_OFFSET(0x1D2400D0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240100)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateBomb_TypeDefinitionIndex = 24648;

	class BirdSkillActionGenerateBomb : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::GameCore::Match3::BombType BombType; // 0x18
		::System::UInt32 BombCount; // 0x1C
		::System::Boolean IsSelfDestruct; // 0x20
		::System::Boolean GenerateAtCenter; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6E1B112CE8A8BF93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_6E1B112CE8A8BF93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3793E39D59A6C5BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_3793E39D59A6C5BE_OFFSET))(a1, a2);
		}
	};
}
