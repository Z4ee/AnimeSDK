#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_506;

#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCE4E550)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4E500)
#define RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4E770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBasedModifierEventProcessor_TypeDefinitionIndex = 52486;

	class LevelTurnBasedModifierEventProcessor : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_506*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBASEDMODIFIEREVENTPROCESSOR_EXECUTE_OFFSET))(this, a1);
		}
	};
}
