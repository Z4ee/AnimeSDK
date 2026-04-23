#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA02D370)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS21_0___PERFORMINITCOMMANDS_B__0_OFFSET UNITYSDK_OFFSET(0xA02F920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance___c__DisplayClass21_0_TypeDefinitionIndex = 55744;

	class ChimeraGameInstance___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __PerformInitCommands_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__DISPLAYCLASS21_0___PERFORMINITCOMMANDS_B__0_OFFSET))(this);
		}
	};
}
