#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_6_660F7C0DFA079411_OFFSET UNITYSDK_OFFSET(0x171C9550)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_6_C42A31EF1D6FCC25_OFFSET UNITYSDK_OFFSET(0x171C9710)
#define RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C9650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAtomParamConfig_TypeDefinitionIndex = 15229;

	class FateParamAtomParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_660F7C0DFA079411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAtomParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAtomParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_6_660F7C0DFA079411_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C42A31EF1D6FCC25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamAtomParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamAtomParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMATOMPARAMCONFIG_METHOD_6_C42A31EF1D6FCC25_OFFSET))(a1, a2);
		}
	};
}
