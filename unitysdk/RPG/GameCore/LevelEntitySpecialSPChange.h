#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFB8D0)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFB880)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1BDFB7E0)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFB920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySpecialSPChange_TypeDefinitionIndex = 54220;

	class LevelEntitySpecialSPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySpecialSPChange* Init(::RPG::GameCore::GameEntity* a1, ::Struct_2_5909FD7779934CCA a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntitySpecialSPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
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
