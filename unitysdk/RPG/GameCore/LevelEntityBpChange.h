#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYBPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDFA530)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFA5D0)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFA580)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1BDFA4C0)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFA620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBpChange_TypeDefinitionIndex = 54201;

	class LevelEntityBpChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* Reason; // 0x18
		::RPG::GameCore::GameEntity* EntityRef; // 0x20
		::System::Int32 BPChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityBpChange* Init(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::LevelEntityBpChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
