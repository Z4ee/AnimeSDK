#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class BaseMPGameService; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD9F40)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x9DDB5B0)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x9DDB5F0)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x9DDB7B0)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__3_OFFSET UNITYSDK_OFFSET(0x9DDB7E0)
#define RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__4_OFFSET UNITYSDK_OFFSET(0x9DDB770)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseMPGameService___c__DisplayClass2_0_TypeDefinitionIndex = 62936;

	class BaseMPGameService___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseMPGameService* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__4; // 0x18
		::Class_1_0C36FD2A7876DF8E* extInfo; // 0x20
		::System::UInt64 lobbyID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__4()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__4_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__3()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__3_OFFSET))(this);
		}
	};
}
