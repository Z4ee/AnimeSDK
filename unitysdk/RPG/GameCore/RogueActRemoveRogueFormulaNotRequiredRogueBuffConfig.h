#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_6_0E761FFC39FE1D4F_OFFSET UNITYSDK_OFFSET(0x1C49D960)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_6_AA6C8D16B757F613_OFFSET UNITYSDK_OFFSET(0x1C49D9B0)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig_TypeDefinitionIndex = 18912;

	class RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0E761FFC39FE1D4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_6_0E761FFC39FE1D4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AA6C8D16B757F613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaNotRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULANOTREQUIREDROGUEBUFFCONFIG_METHOD_6_AA6C8D16B757F613_OFFSET))(a1, a2);
		}
	};
}
