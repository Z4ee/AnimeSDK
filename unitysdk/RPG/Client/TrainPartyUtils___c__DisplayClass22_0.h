#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AboveSwitchDialog; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC7000)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__SHOWSTREAMINGTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xCAC7EF0)
#define RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__SHOWSTREAMINGTRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xCAC7FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils___c__DisplayClass22_0_TypeDefinitionIndex = 63788;

	class TrainPartyUtils___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* buildUI; // 0x10
		::System::Action* __9__1; // 0x18
		::RPG::Client::AboveSwitchDialog* transfer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStreamingTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__SHOWSTREAMINGTRANSFER_B__0_OFFSET))(this);
		}

		::System::Void _ShowStreamingTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS___C__DISPLAYCLASS22_0__SHOWSTREAMINGTRANSFER_B__1_OFFSET))(this);
		}
	};
}
