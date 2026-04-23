#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAdditionPair.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_BC36FFCBF1884962_OFFSET UNITYSDK_OFFSET(0x186FBB40)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_F202795BBDAB96C8_OFFSET UNITYSDK_OFFSET(0x186FBD90)
#define RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x186FBB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraSkillTreeAdditionPair_TypeDefinitionIndex = 22629;

	class BattleExtraSkillTreeAdditionPair : public ::RPG::GameCore::BattleExtraPropertyAdditionPair
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* PointTriggerKeyList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F202795BBDAB96C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_F202795BBDAB96C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC36FFCBF1884962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraSkillTreeAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRASKILLTREEADDITIONPAIR_METHOD_3_BC36FFCBF1884962_OFFSET))(a1, a2);
		}
	};
}
