#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG_METHOD_3_06E4C5D03AAC9306_OFFSET UNITYSDK_OFFSET(0x1CFBF610)
#define RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG_METHOD_3_AB585B25F60538B8_OFFSET UNITYSDK_OFFSET(0x1CFBF5B0)
#define RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAbusolutePositionSelectorConfig_TypeDefinitionIndex = 15731;

	class ChimeraDuelAbusolutePositionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::UInt32 Position; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB585B25F60538B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG_METHOD_3_AB585B25F60538B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06E4C5D03AAC9306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABUSOLUTEPOSITIONSELECTORCONFIG_METHOD_3_06E4C5D03AAC9306_OFFSET))(a1, a2);
		}
	};
}
