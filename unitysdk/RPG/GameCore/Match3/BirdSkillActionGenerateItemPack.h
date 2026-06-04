#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_5_07F523705A4C7B75_OFFSET UNITYSDK_OFFSET(0x198E0900)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_5_61525920204C4ED3_OFFSET UNITYSDK_OFFSET(0x198E07F0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x198E0890)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateItemPack_TypeDefinitionIndex = 23573;

	class BirdSkillActionGenerateItemPack : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ItemPackCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_61525920204C4ED3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_5_61525920204C4ED3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_07F523705A4C7B75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_5_07F523705A4C7B75_OFFSET))(a1, a2);
		}
	};
}
