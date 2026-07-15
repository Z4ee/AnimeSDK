#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_METHOD_3_54A32D02B730B0B4_OFFSET UNITYSDK_OFFSET(0x1C074E70)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_METHOD_3_B18B186169F05E38_OFFSET UNITYSDK_OFFSET(0x1C074E20)
#define RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C074E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierDisableMasterRandomReijuAffixConfig_TypeDefinitionIndex = 18524;

	class FateModifierDisableMasterRandomReijuAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B18B186169F05E38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_METHOD_3_B18B186169F05E38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54A32D02B730B0B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDisableMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDISABLEMASTERRANDOMREIJUAFFIXCONFIG_METHOD_3_54A32D02B730B0B4_OFFSET))(a1, a2);
		}
	};
}
