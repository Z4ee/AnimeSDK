#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA9895E0)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA989590)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA9894E0)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA989630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySpecialSPChange_TypeDefinitionIndex = 45658;

	class LevelEntitySpecialSPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x148
		::RPG::GameCore::FixPoint ChangeValue; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySpecialSPChange* Init(::RPG::GameCore::GameEntity* target, ::Struct_2_5909FD7779934CCA chgParams, ::RPG::GameCore::FixPoint chgVal)
		{
			return ((::RPG::GameCore::LevelEntitySpecialSPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET))(this, target, chgParams, chgVal);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
