#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AADBCF55B84BE104;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x116777B0)
#define CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS27_0__TRYJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x11677D60)

inline static constexpr unsigned int Class_1_AADBCF55B84BE104___c__DisplayClass27_0_TypeDefinitionIndex = 60276;

class Class_1_AADBCF55B84BE104___c__DisplayClass27_0 : public ::System::Object
{
public:
	::Class_1_AADBCF55B84BE104* __4__this; // 0x10
	::System::UInt64 joinLobbyID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _TryJoinLobby_b__0()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS27_0__TRYJOINLOBBY_B__0_OFFSET))(this);
	}
};
