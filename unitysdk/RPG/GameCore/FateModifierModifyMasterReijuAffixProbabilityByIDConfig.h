#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_8091279310EC8E6C_OFFSET UNITYSDK_OFFSET(0x1E0CDFD0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_D8A193E8306B7C70_OFFSET UNITYSDK_OFFSET(0x1E0CDF80)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterReijuAffixProbabilityByIDConfig_TypeDefinitionIndex = 19046;

	class FateModifierModifyMasterReijuAffixProbabilityByIDConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8A193E8306B7C70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_D8A193E8306B7C70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8091279310EC8E6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterReijuAffixProbabilityByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERREIJUAFFIXPROBABILITYBYIDCONFIG_METHOD_3_8091279310EC8E6C_OFFSET))(a1, a2);
		}
	};
}
