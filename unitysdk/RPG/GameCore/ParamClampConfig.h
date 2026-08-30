#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_DD6FEEA78A5410A3_OFFSET UNITYSDK_OFFSET(0x1D30A5E0)
#define RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_F266B0202DA1CB87_OFFSET UNITYSDK_OFFSET(0x1D30A580)
#define RPG_GAMECORE_PARAMCLAMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamClampConfig_TypeDefinitionIndex = 16896;

	class ParamClampConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Min; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Max; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F266B0202DA1CB87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamClampConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamClampConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_F266B0202DA1CB87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD6FEEA78A5410A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamClampConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamClampConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCLAMPCONFIG_METHOD_4_DD6FEEA78A5410A3_OFFSET))(a1, a2);
		}
	};
}
