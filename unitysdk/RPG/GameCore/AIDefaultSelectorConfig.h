#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AITargetSelectorType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AISelector; }

#define RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_METHOD_2_96C4BA5018255B8D_OFFSET UNITYSDK_OFFSET(0x185F0BB0)
#define RPG_GAMECORE_AIDEFAULTSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F0CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDefaultSelectorConfig_TypeDefinitionIndex = 14771;

	class AIDefaultSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AITargetSelectorType SelectorType; // 0x10
		::RPG::GameCore::AISelector* Selector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDEFAULTSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_96C4BA5018255B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDefaultSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDefaultSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDEFAULTSELECTORCONFIG_METHOD_2_96C4BA5018255B8D_OFFSET))(a1, a2);
		}
	};
}
