#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_METHOD_3_3173CDDF9AC7F476_OFFSET UNITYSDK_OFFSET(0x19E26820)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_METHOD_3_4134D5C89A3664BD_OFFSET UNITYSDK_OFFSET(0x19E267A0)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E267F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraBattleShowSkillInfoLock_TypeDefinitionIndex = 23056;

	class TutorialChimeraBattleShowSkillInfoLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::UInt32 ChimeraID; // 0x1C
		::System::Boolean AutoSend; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4134D5C89A3664BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_METHOD_3_4134D5C89A3664BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3173CDDF9AC7F476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_METHOD_3_3173CDDF9AC7F476_OFFSET))(a1, a2);
		}
	};
}
