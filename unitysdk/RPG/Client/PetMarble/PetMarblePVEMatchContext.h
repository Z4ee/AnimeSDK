#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleMatchContext.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_C932B131B8650893;
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATEBALL_1_OFFSET UNITYSDK_OFFSET(0xDAE7110)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATEBALL_OFFSET UNITYSDK_OFFSET(0xDAE6CB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xDAE52F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GETMARBLEBALL_OFFSET UNITYSDK_OFFSET(0xDAE2BC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_AIRANK_OFFSET UNITYSDK_OFFSET(0xDAE72E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDAE72A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xDAE72C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_ISTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0xDAE4A70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_LEVELMODE_OFFSET UNITYSDK_OFFSET(0xDAE7320)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_PLAYERFIRST_OFFSET UNITYSDK_OFFSET(0xDAE7300)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_TUTORIALLEVELINFO_OFFSET UNITYSDK_OFFSET(0xDAE7340)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xDAE7030)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETCOOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDAE6C60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETPVEOPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xDAE5260)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETTUTORIALLEVELINFO_OFFSET UNITYSDK_OFFSET(0xDAE6D80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_AIRANK_OFFSET UNITYSDK_OFFSET(0xDAE72F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_COOPPLAYER_OFFSET UNITYSDK_OFFSET(0xDAE72B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xDAE72D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_LEVELMODE_OFFSET UNITYSDK_OFFSET(0xDAE7330)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_PLAYERFIRST_OFFSET UNITYSDK_OFFSET(0xDAE7310)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_TUTORIALLEVELINFO_OFFSET UNITYSDK_OFFSET(0xDAE7350)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xDAE6DD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE6C20)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarblePVEMatchContext_TypeDefinitionIndex = 74699;

	class PetMarblePVEMatchContext : public ::RPG::Client::ActivityMarble::MarbleMatchContext
	{
	public:
		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* _LevelMode_k__BackingField; // 0x70
		::RPG::Client::PetMarble::PetMarblePlayer* _CoopPlayer_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MarbleBall*>* _BallInfoDict; // 0x80
		::Class_1_C932B131B8650893* _TutorialLevelInfo_k__BackingField; // 0x88
		::System::UInt32 _EnemyId_k__BackingField; // 0x90
		::System::Boolean _PlayerFirst_k__BackingField; // 0x94
		::System::UInt32 _AiRank_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarblePVEMatchContext* Create(::System::UInt32 a1, ::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6)
		{
			return ((::RPG::Client::PetMarble::PetMarblePVEMatchContext*(*)(::System::UInt32, ::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetCoopPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETCOOPPLAYER_OFFSET))(this, a1);
		}

		::System::Void SetPVEOpponentPlayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETPVEOPPONENTPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* GetMarbleBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GETMARBLEBALL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MarbleBall* CreateBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATEBALL_OFFSET))(this, a1, a2);
		}

		::System::Void SetTutorialLevelInfo(::Class_1_C932B131B8650893* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C932B131B8650893*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SETTUTORIALLEVELINFO_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		::System::Void OnLoadLevelConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_ONLOADLEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* CreateBall_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_CREATEBALL_1_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarblePlayer* get_CoopPlayer()
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_COOPPLAYER_OFFSET))(this);
		}

		::System::Void set_CoopPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_COOPPLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnemyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_ENEMYID_OFFSET))(this);
		}

		::System::Void set_EnemyId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_ENEMYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AiRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_AIRANK_OFFSET))(this);
		}

		::System::Void set_AiRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_AIRANK_OFFSET))(this, a1);
		}

		::System::Boolean get_PlayerFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_PLAYERFIRST_OFFSET))(this);
		}

		::System::Void set_PlayerFirst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_PLAYERFIRST_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* get_LevelMode()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_LEVELMODE_OFFSET))(this);
		}

		::System::Void set_LevelMode(::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_LEVELMODE_OFFSET))(this, a1);
		}

		::Class_1_C932B131B8650893* get_TutorialLevelInfo()
		{
			return ((::Class_1_C932B131B8650893*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_TUTORIALLEVELINFO_OFFSET))(this);
		}

		::System::Void set_TutorialLevelInfo(::Class_1_C932B131B8650893* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C932B131B8650893*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_SET_TUTORIALLEVELINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPVEMATCHCONTEXT_GET_ISTUTORIALLEVEL_OFFSET))(this);
		}
	};
}
