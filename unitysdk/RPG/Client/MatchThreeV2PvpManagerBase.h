#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_F44C14232390EA84;
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_GET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0x9B68CA0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0x9B4F380)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0x9B68CC0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0x9B68CB0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4F370)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTBIRDID_OFFSET UNITYSDK_OFFSET(0x9B567D0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTPROPS_OFFSET UNITYSDK_OFFSET(0x9B56830)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpManagerBase_TypeDefinitionIndex = 53668;

	class MatchThreeV2PvpManagerBase : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DEFAULT_BIRD_ID = 0x1F8; // 0x0
		::Class_1_F44C14232390EA84* _LobbyService_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__CTOR_OFFSET))(this);
		}

		::Class_1_F44C14232390EA84* get_LobbyService()
		{
			return ((::Class_1_F44C14232390EA84*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_GET_LOBBYSERVICE_OFFSET))(this);
		}

		::System::Void set_LobbyService(::Class_1_F44C14232390EA84* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F44C14232390EA84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET))(this);
		}

		::System::Void JoinAndOpenLobby(::RPG::Client::ChatMessageInviteData* invitation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET))(this, invitation);
		}

		::System::UInt32 _GetDefaultBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTBIRDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* _GetDefaultProps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTPROPS_OFFSET))(this);
		}
	};
}
