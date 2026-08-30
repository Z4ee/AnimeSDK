#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_6_C09ED3B168AD4DC5_OFFSET UNITYSDK_OFFSET(0x1E0CBDE0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_6_FF59C4B6FF9E9649_OFFSET UNITYSDK_OFFSET(0x1E0CBE30)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CBE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByParamConfig_TypeDefinitionIndex = 19008;

	class FateActAddMasterAffixByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C09ED3B168AD4DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_6_C09ED3B168AD4DC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FF59C4B6FF9E9649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYPARAMCONFIG_METHOD_6_FF59C4B6FF9E9649_OFFSET))(a1, a2);
		}
	};
}
