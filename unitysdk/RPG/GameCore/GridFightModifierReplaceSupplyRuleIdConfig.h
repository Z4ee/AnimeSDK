#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_43606B4443601EF0_OFFSET UNITYSDK_OFFSET(0x1D06AA40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_EB4FFEEF23E130EC_OFFSET UNITYSDK_OFFSET(0x1D06AA90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06AA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceSupplyRuleIdConfig_TypeDefinitionIndex = 18680;

	class GridFightModifierReplaceSupplyRuleIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43606B4443601EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_43606B4443601EF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB4FFEEF23E130EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_METHOD_3_EB4FFEEF23E130EC_OFFSET))(a1, a2);
		}
	};
}
