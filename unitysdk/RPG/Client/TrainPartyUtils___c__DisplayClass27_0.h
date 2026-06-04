#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC77F0)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__TRANSFERTOPLAYERROOM_B__0_OFFSET UNITYSDK_OFFSET(0xCAC8140)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__TRANSFERTOPLAYERROOM_B__1_OFFSET UNITYSDK_OFFSET(0xCAC83B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils___c__DisplayClass27_0_TypeDefinitionIndex = 63789;

	class TrainPartyUtils___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::UInt32 subAreaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToPlayerRoom_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__TRANSFERTOPLAYERROOM_B__0_OFFSET))(this);
		}

		::System::Void _TransferToPlayerRoom_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS27_0__TRANSFERTOPLAYERROOM_B__1_OFFSET))(this);
		}
	};
}
