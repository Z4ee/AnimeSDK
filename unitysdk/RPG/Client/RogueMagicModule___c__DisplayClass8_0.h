#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDEDB8F0)
#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS8_0__SHOWENTRANCEPAGEPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xDEE1460)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule___c__DisplayClass8_0_TypeDefinitionIndex = 67407;

	class RogueMagicModule___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x10
		::System::UInt32 areaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEntrancePagePromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS8_0__SHOWENTRANCEPAGEPROMISED_B__0_OFFSET))(this);
		}
	};
}
