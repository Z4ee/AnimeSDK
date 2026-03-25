#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_METHOD_3_1B65D8EDE69CF097_OFFSET UNITYSDK_OFFSET(0x176EB3A0)
#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_METHOD_3_380DB2A5614A6CE6_OFFSET UNITYSDK_OFFSET(0x176EB320)
#define RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x176EB370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupPropagateBeingAttackInTeam_TypeDefinitionIndex = 21427;

	class SetupPropagateBeingAttackInTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_380DB2A5614A6CE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_METHOD_3_380DB2A5614A6CE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B65D8EDE69CF097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupPropagateBeingAttackInTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupPropagateBeingAttackInTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPAGATEBEINGATTACKINTEAM_METHOD_3_1B65D8EDE69CF097_OFFSET))(a1, a2);
		}
	};
}
