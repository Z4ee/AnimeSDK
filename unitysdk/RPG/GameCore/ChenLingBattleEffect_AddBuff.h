#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleBuffTypeExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_METHOD_3_32CB6CD7CFBDD673_OFFSET UNITYSDK_OFFSET(0x1C37A2F0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_METHOD_3_BA3DED6B6923F49D_OFFSET UNITYSDK_OFFSET(0x1C37A290)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37A2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddBuff_TypeDefinitionIndex = 15186;

	class ChenLingBattleEffect_AddBuff : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::ChenLingBattleBuffType BuffType; // 0x10
		::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* ExtraConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA3DED6B6923F49D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_METHOD_3_BA3DED6B6923F49D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32CB6CD7CFBDD673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_METHOD_3_32CB6CD7CFBDD673_OFFSET))(a1, a2);
		}
	};
}
