#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELWAITSECOND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E8C30)
#define RPG_GAMECORE_LEVELWAITSECOND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E8BE0)
#define RPG_GAMECORE_LEVELWAITSECOND_GET_LOOPEXECUTEUSED_OFFSET UNITYSDK_OFFSET(0xB6E8D00)
#define RPG_GAMECORE_LEVELWAITSECOND_RESET_OFFSET UNITYSDK_OFFSET(0xB6E8C80)
#define RPG_GAMECORE_LEVELWAITSECOND_SETUSED_OFFSET UNITYSDK_OFFSET(0xB6E8CC0)
#define RPG_GAMECORE_LEVELWAITSECOND_SET_LOOPEXECUTEUSED_OFFSET UNITYSDK_OFFSET(0xB6E8D10)
#define RPG_GAMECORE_LEVELWAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E8D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelWaitSecond_TypeDefinitionIndex = 52363;

	class LevelWaitSecond : public ::System::Object
	{
	public:
		::System::Boolean FirstTick; // 0x10
		::System::Boolean _LoopExecuteUsed_k__BackingField; // 0x11
		::System::Single RemainWaitSecond; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_RESET_OFFSET))(this);
		}

		::System::Void SetUsed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_SETUSED_OFFSET))(this);
		}

		::System::Boolean get_LoopExecuteUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_GET_LOOPEXECUTEUSED_OFFSET))(this);
		}

		::System::Void set_LoopExecuteUsed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAITSECOND_SET_LOOPEXECUTEUSED_OFFSET))(this, value);
		}
	};
}
