#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkSlotItem; }

#define RPG_CLIENT_CLOCKPARKDICEITEM_GET_HASOWNERSLOT_OFFSET UNITYSDK_OFFSET(0x1BC0DB80)
#define RPG_CLIENT_CLOCKPARKDICEITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0x1BC0DFA0)
#define RPG_CLIENT_CLOCKPARKDICEITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1BC0DFE0)
#define RPG_CLIENT_CLOCKPARKDICEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0E030)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkDiceItem_TypeDefinitionIndex = 61583;

	class ClockParkDiceItem : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkSlotItem* SlotRef; // 0x10
		::System::UInt32 DiceValue; // 0x18
		::System::Int32 DiceIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEITEM__CTOR_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEITEM_ONNEW_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Boolean get_HasOwnerSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEITEM_GET_HASOWNERSLOT_OFFSET))(this);
		}
	};
}
