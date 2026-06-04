#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_26667A81BBDA7F35_OFFSET UNITYSDK_OFFSET(0x197129C0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_8091279310EC8E6C_OFFSET UNITYSDK_OFFSET(0x19711510)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197114C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterReijuAffixProbabilityByIDConfig_TypeDefinitionIndex = 18286;

	class FateModifierModifyMasterReijuAffixProbabilityByIDConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26667A81BBDA7F35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_26667A81BBDA7F35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8091279310EC8E6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_8091279310EC8E6C_OFFSET))(a1, a2);
		}
	};
}
