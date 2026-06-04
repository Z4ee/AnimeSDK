#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCATTACK_METHOD_3_2B9D38811822BCD7_OFFSET UNITYSDK_OFFSET(0x19429B40)
#define RPG_GAMECORE_ADVNPCATTACK_METHOD_3_AD002B45D9BF2246_OFFSET UNITYSDK_OFFSET(0x19429BD0)
#define RPG_GAMECORE_ADVNPCATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19429BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCAttack_TypeDefinitionIndex = 18858;

	class AdvNPCAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single AttackCD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B9D38811822BCD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK_METHOD_3_2B9D38811822BCD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD002B45D9BF2246(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK_METHOD_3_AD002B45D9BF2246_OFFSET))(a1, a2);
		}
	};
}
