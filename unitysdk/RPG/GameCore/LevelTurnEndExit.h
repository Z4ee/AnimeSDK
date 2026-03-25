#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA992720)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA992760)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9927B0)
#define RPG_GAMECORE_LEVELTURNENDEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA992800)
#define RPG_GAMECORE_LEVELTURNENDEXIT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA992810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEndExit_TypeDefinitionIndex = 45609;

	class LevelTurnEndExit : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
