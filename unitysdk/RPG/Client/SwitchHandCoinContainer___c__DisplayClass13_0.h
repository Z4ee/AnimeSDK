#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::GameCore { class AdventureAfterPropStateChange; }

#define RPG_CLIENT_SWITCHHANDCOINCONTAINER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1EF030)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER___C__DISPLAYCLASS13_0___ONPROPSTATECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xB1EFCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinContainer___c__DisplayClass13_0_TypeDefinitionIndex = 62688;

	class SwitchHandCoinContainer___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureAfterPropStateChange* concreteEvent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnPropStateChange_b__0(::RPG::Client::SwitchHandCoinData* coinData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER___C__DISPLAYCLASS13_0___ONPROPSTATECHANGE_B__0_OFFSET))(this, coinData);
		}
	};
}
