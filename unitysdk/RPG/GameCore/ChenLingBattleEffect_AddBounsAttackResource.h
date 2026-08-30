#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_METHOD_3_7BE592FD120E3847_OFFSET UNITYSDK_OFFSET(0x1E00ADB0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_METHOD_3_DD6916D4CACAE6D6_OFFSET UNITYSDK_OFFSET(0x1E00AE50)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00AE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddBounsAttackResource_TypeDefinitionIndex = 15612;

	class ChenLingBattleEffect_AddBounsAttackResource : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7BE592FD120E3847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_METHOD_3_7BE592FD120E3847_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD6916D4CACAE6D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_METHOD_3_DD6916D4CACAE6D6_OFFSET))(a1, a2);
		}
	};
}
