#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_E7DB216A3FFF6C29;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Multiplayer { class BaseMPGameService; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xC1BDE20)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xC1BDE70)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xC1BE060)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__3_OFFSET UNITYSDK_OFFSET(0xC1BE090)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__4_OFFSET UNITYSDK_OFFSET(0xC1BE010)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC1BC2A0)

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int BaseMPGameService___c__DisplayClass1_0_TypeDefinitionIndex = 73735;

	class BaseMPGameService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_1_0C36FD2A7876DF8E* extInfo; // 0x10
		::RPG::Client::Multiplayer::BaseMPGameService* __4__this; // 0x18
		::Class_1_E7DB216A3FFF6C29* roomExtInfo; // 0x20
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__4; // 0x28
		::System::UInt32 createParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__4()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__4_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__3()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__3_OFFSET))(this);
		}
	};
}
