#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_6_DAC21F1AB0199546_OFFSET UNITYSDK_OFFSET(0x1C49DC00)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_6_DE4DC5F95B521DE2_OFFSET UNITYSDK_OFFSET(0x1C49DC50)
#define RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49DC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceAllRogueFormulaByCategoryConfig_TypeDefinitionIndex = 18903;

	class RogueActReplaceAllRogueFormulaByCategoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DAC21F1AB0199546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_6_DAC21F1AB0199546_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DE4DC5F95B521DE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceAllRogueFormulaByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEALLROGUEFORMULABYCATEGORYCONFIG_METHOD_6_DE4DC5F95B521DE2_OFFSET))(a1, a2);
		}
	};
}
