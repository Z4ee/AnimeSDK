#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_912551DDCECF21B5_OFFSET UNITYSDK_OFFSET(0x189BEB30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_EB4FFEEF23E130EC_OFFSET UNITYSDK_OFFSET(0x189BEC00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BEBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceSupplyRuleIdConfig_TypeDefinitionIndex = 18460;

	class GridFightModifierReplaceSupplyRuleIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_912551DDCECF21B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_912551DDCECF21B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB4FFEEF23E130EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_EB4FFEEF23E130EC_OFFSET))(a1, a2);
		}
	};
}
