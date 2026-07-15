#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_6_204B931C62F6ADC9_OFFSET UNITYSDK_OFFSET(0x1C073750)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_6_704D693F47B6E9CD_OFFSET UNITYSDK_OFFSET(0x1C0737A0)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C073790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActGetCoinByParamConfig_TypeDefinitionIndex = 18469;

	class FateActGetCoinByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_204B931C62F6ADC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActGetCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActGetCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_6_204B931C62F6ADC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_704D693F47B6E9CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActGetCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActGetCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_6_704D693F47B6E9CD_OFFSET))(a1, a2);
		}
	};
}
