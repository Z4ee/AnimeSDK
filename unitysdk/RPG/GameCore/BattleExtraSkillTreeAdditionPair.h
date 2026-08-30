#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAdditionPair.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_0E69DCF882D9CB1D_OFFSET UNITYSDK_OFFSET(0x1CE770E0)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_5FA49233E49EAE73_OFFSET UNITYSDK_OFFSET(0x1CE772F0)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE770D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraSkillTreeAdditionPair_TypeDefinitionIndex = 23374;

	class BattleExtraSkillTreeAdditionPair : public ::RPG::GameCore::BattleExtraPropertyAdditionPair
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* PointTriggerKeyList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FA49233E49EAE73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_5FA49233E49EAE73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E69DCF882D9CB1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_0E69DCF882D9CB1D_OFFSET))(a1, a2);
		}
	};
}
