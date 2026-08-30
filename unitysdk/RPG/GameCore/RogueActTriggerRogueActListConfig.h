#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_6_16D9F111487DD346_OFFSET UNITYSDK_OFFSET(0x1D3BB5B0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_6_1A6597EFF3B65BE2_OFFSET UNITYSDK_OFFSET(0x1D3BB600)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueActListConfig_TypeDefinitionIndex = 19414;

	class RogueActTriggerRogueActListConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_16D9F111487DD346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_6_16D9F111487DD346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1A6597EFF3B65BE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueActListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueActListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEACTLISTCONFIG_METHOD_6_1A6597EFF3B65BE2_OFFSET))(a1, a2);
		}
	};
}
