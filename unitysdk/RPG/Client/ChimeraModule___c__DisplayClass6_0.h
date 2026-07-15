#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraModule; }

#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B023C0)
#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__STARTWORK_B__0_OFFSET UNITYSDK_OFFSET(0x19B06D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraModule___c__DisplayClass6_0_TypeDefinitionIndex = 60624;

	class ChimeraModule___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* team; // 0x10
		::RPG::Client::ChimeraModule* __4__this; // 0x18
		::System::UInt32 leader; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartWork_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__STARTWORK_B__0_OFFSET))(this, a1);
		}
	};
}
