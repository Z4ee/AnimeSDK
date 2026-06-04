#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CANCELMATCHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xB3B2560)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CANCELMATCHPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0xB3B2600)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B0230)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass19_0_TypeDefinitionIndex = 61487;

	class BaseLobby___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* cancelMatchPromise; // 0x10
		::RPG::Client::BaseLobby* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _CancelMatchPromise_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CANCELMATCHPROMISE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _CancelMatchPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS19_0__CANCELMATCHPROMISE_B__1_OFFSET))(this);
		}
	};
}
