#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_METHOD_3_5FD1F2D5D68582D3_OFFSET UNITYSDK_OFFSET(0x1C240A30)
#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_METHOD_3_B831C2366826247D_OFFSET UNITYSDK_OFFSET(0x1C2409D0)
#define RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C240A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGroupEntitiesSelectorConfig_TypeDefinitionIndex = 15301;

	class ChimeraDuelGroupEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::Boolean ExcludeCaster; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B831C2366826247D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_METHOD_3_B831C2366826247D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FD1F2D5D68582D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGROUPENTITIESSELECTORCONFIG_METHOD_3_5FD1F2D5D68582D3_OFFSET))(a1, a2);
		}
	};
}
