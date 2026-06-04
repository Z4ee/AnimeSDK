#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_450007E35E9F3F04_OFFSET UNITYSDK_OFFSET(0x19AFBFF0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_6CC79D546E936569_OFFSET UNITYSDK_OFFSET(0x19AFBDD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFBF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectDropConfig_TypeDefinitionIndex = 18662;

	class RogueActTriggerRogueMagicScepterSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6CC79D546E936569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_6CC79D546E936569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_450007E35E9F3F04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_450007E35E9F3F04_OFFSET))(a1, a2);
		}
	};
}
