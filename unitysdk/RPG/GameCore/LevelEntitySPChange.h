#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD23300)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD232B0)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD231E0)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD23350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySPChange_TypeDefinitionIndex = 56936;

	class LevelEntitySPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x20
		::RPG::GameCore::FixPoint NewValue; // 0x128
		::RPG::GameCore::FixPoint ChangeValue; // 0x130
		::RPG::GameCore::FixPoint OldValue; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySPChange* Init(::RPG::GameCore::GameEntity* a1, ::Struct_2_5909FD7779934CCA a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::LevelEntitySPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
