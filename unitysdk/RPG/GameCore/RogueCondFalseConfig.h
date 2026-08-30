#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_57CD737F0E0206D7_OFFSET UNITYSDK_OFFSET(0x1D918900)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_FC3BB185594E4BBB_OFFSET UNITYSDK_OFFSET(0x1D918950)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondFalseConfig_TypeDefinitionIndex = 19570;

	class RogueCondFalseConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_57CD737F0E0206D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_57CD737F0E0206D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FC3BB185594E4BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_METHOD_6_FC3BB185594E4BBB_OFFSET))(a1, a2);
		}
	};
}
