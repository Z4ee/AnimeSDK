#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_45DB7C0830A847D5_OFFSET UNITYSDK_OFFSET(0x18CF6CD0)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_FC3BB185594E4BBB_OFFSET UNITYSDK_OFFSET(0x18CF6F80)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF6E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondFalseConfig_TypeDefinitionIndex = 18790;

	class RogueCondFalseConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_45DB7C0830A847D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_45DB7C0830A847D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FC3BB185594E4BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_FC3BB185594E4BBB_OFFSET))(a1, a2);
		}
	};
}
