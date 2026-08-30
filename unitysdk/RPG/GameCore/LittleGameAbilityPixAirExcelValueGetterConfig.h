#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_METHOD_3_6975B5BB7736B947_OFFSET UNITYSDK_OFFSET(0x1DD637A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_METHOD_3_A78F92FEEC981253_OFFSET UNITYSDK_OFFSET(0x1DD638A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD63890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirExcelValueGetterConfig_TypeDefinitionIndex = 21145;

	class LittleGameAbilityPixAirExcelValueGetterConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::Int32 ParamIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6975B5BB7736B947(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_METHOD_3_6975B5BB7736B947_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A78F92FEEC981253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREXCELVALUEGETTERCONFIG_METHOD_3_A78F92FEEC981253_OFFSET))(a1, a2);
		}
	};
}
