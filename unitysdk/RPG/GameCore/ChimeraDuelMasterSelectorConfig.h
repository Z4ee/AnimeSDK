#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG_METHOD_3_48CDA00FC70934A8_OFFSET UNITYSDK_OFFSET(0x1E3377C0)
#define RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG_METHOD_3_DDD50C057BD43918_OFFSET UNITYSDK_OFFSET(0x1E337760)
#define RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3377B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterSelectorConfig_TypeDefinitionIndex = 15735;

	class ChimeraDuelMasterSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDD50C057BD43918(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG_METHOD_3_DDD50C057BD43918_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48CDA00FC70934A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERSELECTORCONFIG_METHOD_3_48CDA00FC70934A8_OFFSET))(a1, a2);
		}
	};
}
