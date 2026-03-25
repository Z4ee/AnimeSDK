#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B37E32AE995F430C.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CLASS_2_27AF3F8D0A0E5985__CTOR_OFFSET UNITYSDK_OFFSET(0x110606F0)

inline static constexpr unsigned int Class_2_27AF3F8D0A0E5985_TypeDefinitionIndex = 45162;

class Class_2_27AF3F8D0A0E5985 : public ::Class_1_B37E32AE995F430C
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_27AF3F8D0A0E5985__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
