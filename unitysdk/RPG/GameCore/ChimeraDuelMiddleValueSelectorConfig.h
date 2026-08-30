#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_METHOD_3_9B724CB63241E1A7_OFFSET UNITYSDK_OFFSET(0x1CFCA240)
#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_METHOD_3_A5591FD3D34023C9_OFFSET UNITYSDK_OFFSET(0x1CFCA2A0)
#define RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCA290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMiddleValueSelectorConfig_TypeDefinitionIndex = 15768;

	class ChimeraDuelMiddleValueSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelValueSelectorType ValueSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B724CB63241E1A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_METHOD_3_9B724CB63241E1A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5591FD3D34023C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMiddleValueSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMIDDLEVALUESELECTORCONFIG_METHOD_3_A5591FD3D34023C9_OFFSET))(a1, a2);
		}
	};
}
