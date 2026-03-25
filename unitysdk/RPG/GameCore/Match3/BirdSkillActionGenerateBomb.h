#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_3793E39D59A6C5BE_OFFSET UNITYSDK_OFFSET(0x173A0C30)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_50754097DB3A1DB1_OFFSET UNITYSDK_OFFSET(0x173A0B20)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x173A0BC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateBomb_TypeDefinitionIndex = 22761;

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

		static ::System::Void Method_5_50754097DB3A1DB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_50754097DB3A1DB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3793E39D59A6C5BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_5_3793E39D59A6C5BE_OFFSET))(a1, a2);
		}
	};
}
