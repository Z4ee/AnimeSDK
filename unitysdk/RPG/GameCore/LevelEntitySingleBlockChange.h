#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6ED970)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EDA10)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ED9C0)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6ED8C0)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE6EDA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySingleBlockChange_TypeDefinitionIndex = 56839;

	class LevelEntitySingleBlockChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x128
		::RPG::GameCore::FixPoint ChangeValue; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySingleBlockChange* Init(::RPG::GameCore::GameEntity* a1, ::Struct_2_5909FD7779934CCA a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntitySingleBlockChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
