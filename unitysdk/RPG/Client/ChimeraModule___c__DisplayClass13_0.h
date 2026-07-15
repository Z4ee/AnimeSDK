#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraModule; }

#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B03000)
#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS13_0___UPDATECURRENTWORKREMAINHP_B__0_OFFSET UNITYSDK_OFFSET(0x19B06AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraModule___c__DisplayClass13_0_TypeDefinitionIndex = 60623;

	class ChimeraModule___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraModule* __4__this; // 0x10
		::System::UInt32 workRemainHp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateCurrentWorkRemainHp_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS13_0___UPDATECURRENTWORKREMAINHP_B__0_OFFSET))(this, a1);
		}
	};
}
