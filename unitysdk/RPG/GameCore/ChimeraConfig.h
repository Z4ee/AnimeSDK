#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityList; }
namespace RPG::GameCore { class ChimeraEventHandlers; }
namespace RPG::GameCore { class ChimeraLevelStatus; }
namespace RPG::GameCore { class ChimeraTalkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERACONFIG_METHOD_2_2499054EA5AF24C0_OFFSET UNITYSDK_OFFSET(0x19635AA0)
#define RPG_GAMECORE_CHIMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19635C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraConfig_TypeDefinitionIndex = 15052;

	class ChimeraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityList* AbilityConfig; // 0x10
		::RPG::GameCore::ChimeraLevelStatus* StatusConfig; // 0x18
		::RPG::GameCore::ChimeraTalkConfig* Talks; // 0x20
		::System::String* LeavePerformance; // 0x28
		::RPG::GameCore::ChimeraEventHandlers* EventHandlers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2499054EA5AF24C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERACONFIG_METHOD_2_2499054EA5AF24C0_OFFSET))(a1, a2);
		}
	};
}
