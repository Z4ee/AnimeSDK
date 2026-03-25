#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LobbyMemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOBBYCHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9A40630)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyChangeParam_TypeDefinitionIndex = 53411;

	class LobbyChangeParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* PreviousMembers; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* CurrentMembers; // 0x18
		::RPG::Client::LobbyMemberData* ChangeOwner; // 0x20
		::Enum_3_63C076C405BE0674_1 ChangeType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYCHANGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
