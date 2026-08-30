#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F138DBFC3396EA15_2;
namespace RPG::Client { class PlayerModule; }

#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDBAB8B0)
#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0___CMDPLAYERGETTOKENSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDBB0AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule___c__DisplayClass57_0_TypeDefinitionIndex = 66720;

	class PlayerModule___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlayerModule* __4__this; // 0x10
		::Class_1_F138DBFC3396EA15_2* rsp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0___CMDPLAYERGETTOKENSCRSP_B__0_OFFSET))(this);
		}
	};
}
