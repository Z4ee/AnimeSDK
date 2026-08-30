#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_METHOD_3_04156763966BDBF7_OFFSET UNITYSDK_OFFSET(0x1D3F91C0)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_METHOD_3_E4FE8E242B86505B_OFFSET UNITYSDK_OFFSET(0x1D3F9210)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierInterceptAddInProgressStyleExpConfig_TypeDefinitionIndex = 17592;

	class RogueModifierInterceptAddInProgressStyleExpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04156763966BDBF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_METHOD_3_04156763966BDBF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4FE8E242B86505B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_METHOD_3_E4FE8E242B86505B_OFFSET))(a1, a2);
		}
	};
}
