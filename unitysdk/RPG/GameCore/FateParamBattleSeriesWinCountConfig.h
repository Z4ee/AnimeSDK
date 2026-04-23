#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_6_75CF3E7DA5D5A763_OFFSET UNITYSDK_OFFSET(0x188D70B0)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_6_E4F9EB737152113F_OFFSET UNITYSDK_OFFSET(0x188D6EF0)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D6FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamBattleSeriesWinCountConfig_TypeDefinitionIndex = 15750;

	class FateParamBattleSeriesWinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E4F9EB737152113F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_6_E4F9EB737152113F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_75CF3E7DA5D5A763(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_6_75CF3E7DA5D5A763_OFFSET))(a1, a2);
		}
	};
}
