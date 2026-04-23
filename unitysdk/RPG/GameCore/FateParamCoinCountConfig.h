#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_6_4410DC20F5C7B0A1_OFFSET UNITYSDK_OFFSET(0x188D70C0)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_6_F147A9002D79D12A_OFFSET UNITYSDK_OFFSET(0x188D7310)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D7250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamCoinCountConfig_TypeDefinitionIndex = 15760;

	class FateParamCoinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4410DC20F5C7B0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamCoinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamCoinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_6_4410DC20F5C7B0A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F147A9002D79D12A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_METHOD_6_F147A9002D79D12A_OFFSET))(a1, a2);
		}
	};
}
