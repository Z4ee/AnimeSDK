#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BAB4F1D0D06F4746_OFFSET UNITYSDK_OFFSET(0x1D9189C0)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BE4098AF7BA7CFE2_OFFSET UNITYSDK_OFFSET(0x1D918A10)
#define RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondMiracleCountConfig_TypeDefinitionIndex = 19565;

	class RogueCondMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BAB4F1D0D06F4746(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BAB4F1D0D06F4746_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BE4098AF7BA7CFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLECOUNTCONFIG_METHOD_6_BE4098AF7BA7CFE2_OFFSET))(a1, a2);
		}
	};
}
