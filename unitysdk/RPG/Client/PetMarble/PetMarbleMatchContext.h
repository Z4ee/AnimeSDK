#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1DD6AC150642D284;
class Class_1_4AF717D30078CC7E_1;
class Class_1_C50F5982E5600913;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_1_OFFSET UNITYSDK_OFFSET(0xDADECC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_OFFSET UNITYSDK_OFFSET(0xDADEB10)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATECOOPBOSSMATCH_OFFSET UNITYSDK_OFFSET(0xDADD380)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETLEVELMODE_OFFSET UNITYSDK_OFFSET(0xDADF500)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0xDADE940)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDADFF00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xDADFE00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xDADFE60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_INITREADYPROMISE_OFFSET UNITYSDK_OFFSET(0xDADE7C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xDADEBE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xDADF2D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETCOOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDADD6E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETINITINFO_OFFSET UNITYSDK_OFFSET(0xDADD8F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETTEAMSELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xDADD730)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDADFF10)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xDADED80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET UNITYSDK_OFFSET(0xDADF040)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0xDADEE50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDADD330)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__FILLCOOPPLAYERTEAMFROMFRIEND_OFFSET UNITYSDK_OFFSET(0xDADE250)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__HASFINALBATTLEINITINFO_OFFSET UNITYSDK_OFFSET(0xDADE460)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xDADF550)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMatchContext_TypeDefinitionIndex = 74697;

	class PetMarbleMatchContext : public ::RPG::Client::ActivityMarble::MarblePVPMatchContext
	{
	public:
		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* _LevelMode; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MarbleBall*>* _BallInfoDict; // 0x90
		::RPG::Client::Promises::Promise* _InitReadyPromise; // 0x98
		::RPG::Client::ActivityMarble::IMarblePlayer* _CoopPlayer_k__BackingField; // 0xA0

		::System::Void _ctor(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PetMarble::PetMarbleMatchContext* CreateCoopBossMatch(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchContext*(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATECOOPBOSSMATCH_OFFSET))(a1);
		}

		::System::Void SetCoopPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETCOOPPLAYER_OFFSET))(this, a1);
		}

		::System::Void SetTeamSelectMember(::RPG::Client::ActivityMarble::IMarbleData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETTEAMSELECTMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void SetInitInfo(::Class_1_4AF717D30078CC7E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SETINITINFO_OFFSET))(this, a1);
		}

		static ::System::Void _FillCoopPlayerTeamFromFriend(::RPG::Client::PetMarble::PetMarblePlayer* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::PetMarble::PetMarblePlayer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__FILLCOOPPLAYERTEAMFROMFRIEND_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::Promise* InitReadyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_INITREADYPROMISE_OFFSET))(this);
		}

		::RPG::Client::MarbleBall* GetMarbleBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETMARBLEBALL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MarbleBall* CreateBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_OFFSET))(this, a1, a2);
		}

		::System::Void OnLoadLevelConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* CreateBall_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_CREATEBALL_1_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		static ::System::Boolean _HasFinalBattleInitInfo(::Class_1_4AF717D30078CC7E_1* a1)
		{
			return ((::System::Boolean(*)(::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__HASFINALBATTLEINITINFO_OFFSET))(a1);
		}

		::System::Void UpdateSelfPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATESELFPLAYER_OFFSET))(this, a1);
		}

		::System::Void UpdateOtherPlayer(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_UPDATEOTHERPLAYER_OFFSET))(this, a1);
		}

		::System::Void OnRoomInit(::Class_1_1DD6AC150642D284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_ONROOMINIT_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* GetLevelMode()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GETLEVELMODE_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_ISMATCHED_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPManagerBase* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManagerBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_PVPMGR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_CoopPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_GET_COOPPLAYER_OFFSET))(this);
		}

		::System::Void set_CoopPlayer(::RPG::Client::ActivityMarble::IMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTEXT_SET_COOPPLAYER_OFFSET))(this, a1);
		}
	};
}
