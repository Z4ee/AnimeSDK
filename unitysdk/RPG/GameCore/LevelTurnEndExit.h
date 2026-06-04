#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4EBF0)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4EC30)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4EC80)
#define RPG_GAMECORE_LEVELTURNENDEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4ECD0)
#define RPG_GAMECORE_LEVELTURNENDEXIT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE4ECE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEndExit_TypeDefinitionIndex = 52956;

	class LevelTurnEndExit : public ::Class_1_BF7A075734D15E98
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
