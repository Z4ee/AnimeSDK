#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_6_0E08964ED7BCFBFD_OFFSET UNITYSDK_OFFSET(0x1E0CEB70)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_6_F2F19EDA097B80B9_OFFSET UNITYSDK_OFFSET(0x1E0CEB20)
#define RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CEB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamLastBattleLeftRoundCountConfig_TypeDefinitionIndex = 16451;

	class FateParamLastBattleLeftRoundCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F2F19EDA097B80B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_6_F2F19EDA097B80B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0E08964ED7BCFBFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamLastBattleLeftRoundCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMLASTBATTLELEFTROUNDCOUNTCONFIG_METHOD_6_0E08964ED7BCFBFD_OFFSET))(a1, a2);
		}
	};
}
