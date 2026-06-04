#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F44C14232390EA84;
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_GET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0xBFAC3A0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xBFAC3C0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET UNITYSDK_OFFSET(0xBFAC430)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET UNITYSDK_OFFSET(0xBFAC3B0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBFACAD0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTBIRDID_OFFSET UNITYSDK_OFFSET(0xBFAC4A0)
#define RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE__GETDEFAULTPROPS_OFFSET UNITYSDK_OFFSET(0xBFAC500)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpManagerBase_TypeDefinitionIndex = 61746;

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

		::System::Void set_LobbyService(::Class_1_F44C14232390EA84* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F44C14232390EA84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_SET_LOBBYSERVICE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_INIT_OFFSET))(this);
		}

		::System::Void JoinAndOpenLobby(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPMANAGERBASE_JOINANDOPENLOBBY_OFFSET))(this, a1);
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
