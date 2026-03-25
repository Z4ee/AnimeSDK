#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraSkillTreeAdditionPair___O_TypeDefinitionIndex = 21892;

	class BattleExtraSkillTreeAdditionPair___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarSkillTreePointTriggerKey>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarSkillTreePointTriggerKey>**)Il2CppClass::FromTypeDefinitionIndex(BattleExtraSkillTreeAdditionPair___O_TypeDefinitionIndex)->GetStaticField(0x22B30);
		}
	};
}
