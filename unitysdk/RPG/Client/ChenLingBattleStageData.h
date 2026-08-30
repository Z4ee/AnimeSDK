#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingStageType.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_2;
namespace RPG::GameCore { class ChenLingStageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ALLYTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC44A40)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYCOMMANDERNAME_OFFSET UNITYSDK_OFFSET(0x1CC448C0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYTEAMICONPATHINBATTLE_OFFSET UNITYSDK_OFFSET(0x1CC44CC0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC44C20)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_FINISHUNLOCKDECKID_OFFSET UNITYSDK_OFFSET(0x1CC44670)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ISSEENUNLOK_OFFSET UNITYSDK_OFFSET(0x1CC44750)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CC44710)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_LOCKDECKID_OFFSET UNITYSDK_OFFSET(0x1CC44980)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC44600)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_NEXTID_OFFSET UNITYSDK_OFFSET(0x1CC444A0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_STAGESTATE_OFFSET UNITYSDK_OFFSET(0x1CC44880)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC44360)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_WAVEDATAS_OFFSET UNITYSDK_OFFSET(0x1CC44A20)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET__NAME_OFFSET UNITYSDK_OFFSET(0x1CC44540)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1CC44440)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1CC44070)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SET_WAVEDATAS_OFFSET UNITYSDK_OFFSET(0x1CC44A30)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1CC440C0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC43D00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageData_TypeDefinitionIndex = 61550;

	class ChenLingBattleStageData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_2*>* _WaveDatas_k__BackingField; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::StageState _StageState; // 0x1C
		::System::Boolean _IsUnlock; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetUnlockState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SETUNLOCKSTATE_OFFSET))(this, a1);
		}

		::System::Void SyncState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SYNCSTATE_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingStageRow* get__Row()
		{
			return ((::RPG::GameCore::ChenLingStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_NextID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_NEXTID_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingStageType get_Type()
		{
			return ((::RPG::GameCore::ChenLingStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get__Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET__NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_FinishUnlockDeckID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_FINISHUNLOCKDECKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsSeenUnlok()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ISSEENUNLOK_OFFSET))(this);
		}

		::RPG::Client::StageState get_StageState()
		{
			return ((::RPG::Client::StageState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_STAGESTATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnemyCommanderName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYCOMMANDERNAME_OFFSET))(this);
		}

		::System::UInt32 get_LockDeckID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_LOCKDECKID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_2*>* get_WaveDatas()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_WAVEDATAS_OFFSET))(this);
		}

		::System::Void set_WaveDatas(::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_SET_WAVEDATAS_OFFSET))(this, a1);
		}

		::System::String* get_AllyTeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ALLYTEAMICONPATH_OFFSET))(this);
		}

		::System::String* get_EnemyTeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYTEAMICONPATH_OFFSET))(this);
		}

		::System::String* get_EnemyTeamIconPathInBattle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA_GET_ENEMYTEAMICONPATHINBATTLE_OFFSET))(this);
		}
	};
}
