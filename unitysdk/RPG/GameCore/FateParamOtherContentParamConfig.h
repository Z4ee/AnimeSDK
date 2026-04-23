#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_6_116CA118880BCD53_OFFSET UNITYSDK_OFFSET(0x188D8B30)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_6_55C352718E35DFAF_OFFSET UNITYSDK_OFFSET(0x188D8CF0)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D8C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOtherContentParamConfig_TypeDefinitionIndex = 15747;

	class FateParamOtherContentParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_116CA118880BCD53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOtherContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOtherContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_6_116CA118880BCD53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_55C352718E35DFAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOtherContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOtherContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_METHOD_6_55C352718E35DFAF_OFFSET))(a1, a2);
		}
	};
}
