#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EDDA0)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__UPDATEV2FRIENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB7EDDB0)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__UPDATEV2FRIENDDATA_B__1_OFFSET UNITYSDK_OFFSET(0xB7EDDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c__DisplayClass97_0_TypeDefinitionIndex = 59487;

	class DiceCombatModule___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombatModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateV2FriendData_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__UPDATEV2FRIENDDATA_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateV2FriendData_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS97_0__UPDATEV2FRIENDDATA_B__1_OFFSET))(this);
		}
	};
}
