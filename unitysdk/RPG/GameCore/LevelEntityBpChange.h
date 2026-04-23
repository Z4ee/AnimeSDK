#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYBPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D5F70)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D6010)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D5FC0)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D5F00)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D6060)
#define RPG_GAMECORE_LEVELENTITYBPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D6070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBpChange_TypeDefinitionIndex = 52291;

	class LevelEntityBpChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* EntityRef; // 0x18
		::System::String* Reason; // 0x20
		::System::Int32 BPChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityBpChange* Init(::RPG::GameCore::GameEntity* pEntity, ::System::Int32 nBpChange, ::System::String* sreason)
		{
			return ((::RPG::GameCore::LevelEntityBpChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE_INIT_OFFSET))(this, pEntity, nBpChange, sreason);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
