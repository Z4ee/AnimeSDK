#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_6_05B659718F237421_OFFSET UNITYSDK_OFFSET(0x1D1770E0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_6_8C47FD5D7AC2C5FD_OFFSET UNITYSDK_OFFSET(0x1D177090)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1770D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournAreaDivisionLevelConfig_TypeDefinitionIndex = 19079;

	class RogueParamRogueTournAreaDivisionLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8C47FD5D7AC2C5FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_6_8C47FD5D7AC2C5FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_05B659718F237421(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_6_05B659718F237421_OFFSET))(a1, a2);
		}
	};
}
