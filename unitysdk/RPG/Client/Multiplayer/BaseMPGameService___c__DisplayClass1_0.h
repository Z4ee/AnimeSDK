#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284;
class Class_1_7B005A18003A04C3;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Multiplayer { class BaseMPGameService; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x1B6EF360)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x1B6EF420)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x1B6EF780)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__3_OFFSET UNITYSDK_OFFSET(0x1B6EF820)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__4_OFFSET UNITYSDK_OFFSET(0x1B6EF6C0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6ECAE0)

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int BaseMPGameService___c__DisplayClass1_0_TypeDefinitionIndex = 78931;

	class BaseMPGameService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Multiplayer::BaseMPGameService* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__4; // 0x18
		::Class_1_1DD6AC150642D284* roomExtInfo; // 0x20
		::Class_1_7B005A18003A04C3* extInfo; // 0x28
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
