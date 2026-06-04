#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_METHOD_3_198FB485F458D1EB_OFFSET UNITYSDK_OFFSET(0x19620560)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_METHOD_3_B12971B341770549_OFFSET UNITYSDK_OFFSET(0x19620500)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19620550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddResource_TypeDefinitionIndex = 15020;

	class ChenLingBattleEffect_AddResource : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleResource* Resource; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B12971B341770549(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddResource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddResource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_METHOD_3_B12971B341770549_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_198FB485F458D1EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddResource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_METHOD_3_198FB485F458D1EB_OFFSET))(a1, a2);
		}
	};
}
