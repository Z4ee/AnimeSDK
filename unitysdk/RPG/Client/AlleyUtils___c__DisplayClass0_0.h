#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x90BDDF0)
#define RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__SHOWALLEYMAINENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x90BE2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyUtils___c__DisplayClass0_0_TypeDefinitionIndex = 50579;

	class AlleyUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LuaUIController*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAlleyMainEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__SHOWALLEYMAINENTRANCEPAGE_B__0_OFFSET))(this);
		}
	};
}
