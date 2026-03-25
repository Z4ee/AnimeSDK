#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98ADC0)
#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98AE50)
#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98AE00)
#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xA98AD50)
#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xA98AEA0)
#define RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98AEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGlobalActionDelayChanged_TypeDefinitionIndex = 45677;

	class LevelGlobalActionDelayChanged : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint PrevValue; // 0x18
		::RPG::GameCore::FixPoint CurrentValue; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGlobalActionDelayChanged* Init(::RPG::GameCore::FixPoint prevValue, ::RPG::GameCore::FixPoint changeValue, ::RPG::GameCore::FixPoint currentValue)
		{
			return ((::RPG::GameCore::LevelGlobalActionDelayChanged*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_INIT_OFFSET))(this, prevValue, changeValue, currentValue);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGLOBALACTIONDELAYCHANGED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
