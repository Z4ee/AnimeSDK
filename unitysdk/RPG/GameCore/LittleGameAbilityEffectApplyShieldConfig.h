#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_METHOD_3_0BAE61C70F3D951B_OFFSET UNITYSDK_OFFSET(0x1DD61310)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_METHOD_3_4DE77ED668C62427_OFFSET UNITYSDK_OFFSET(0x1DD61240)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD61300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyShieldConfig_TypeDefinitionIndex = 21094;

	class LittleGameAbilityEffectApplyShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ShieldValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DE77ED668C62427(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_METHOD_3_4DE77ED668C62427_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BAE61C70F3D951B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_METHOD_3_0BAE61C70F3D951B_OFFSET))(a1, a2);
		}
	};
}
