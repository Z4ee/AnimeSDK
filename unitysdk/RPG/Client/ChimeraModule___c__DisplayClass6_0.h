#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraModule; }

#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA031090)
#define RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__STARTWORK_B__0_OFFSET UNITYSDK_OFFSET(0xA035920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraModule___c__DisplayClass6_0_TypeDefinitionIndex = 58423;

	class ChimeraModule___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraModule* __4__this; // 0x10
		::Il2CppArray<::System::UInt32>* team; // 0x18
		::System::UInt32 leader; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartWork_b__0(::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___C__DISPLAYCLASS6_0__STARTWORK_B__0_OFFSET))(this, round);
		}
	};
}
