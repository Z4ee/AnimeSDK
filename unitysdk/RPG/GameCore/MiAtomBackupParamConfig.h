#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_METHOD_2_DA49EC08056FED98_OFFSET UNITYSDK_OFFSET(0x1D1A39F0)
#define RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A3A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiAtomBackupParamConfig_TypeDefinitionIndex = 16864;

	class MiAtomBackupParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DA49EC08056FED98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiAtomBackupParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomBackupParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_METHOD_2_DA49EC08056FED98_OFFSET))(a1, a2);
		}
	};
}
