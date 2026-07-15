#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_6_2A0EAAAA8890D230_OFFSET UNITYSDK_OFFSET(0x1C0756B0)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_6_B9205244356EF82C_OFFSET UNITYSDK_OFFSET(0x1C075700)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0756F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAffixCountConfig_TypeDefinitionIndex = 15978;

	class FateParamAffixCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2A0EAAAA8890D230(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAffixCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAffixCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_6_2A0EAAAA8890D230_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B9205244356EF82C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAffixCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAffixCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_METHOD_6_B9205244356EF82C_OFFSET))(a1, a2);
		}
	};
}
