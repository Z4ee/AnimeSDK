#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMIRACLECONFIG_METHOD_2_3191C7B069555E1B_OFFSET UNITYSDK_OFFSET(0x1CFBCAD0)
#define RPG_GAMECORE_ROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBCB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleConfig_TypeDefinitionIndex = 17202;

	class RogueMiracleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3191C7B069555E1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLECONFIG_METHOD_2_3191C7B069555E1B_OFFSET))(a1, a2);
		}
	};
}
