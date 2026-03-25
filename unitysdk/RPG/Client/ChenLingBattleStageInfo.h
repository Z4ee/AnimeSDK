#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36F606812EC9EB69_1;
namespace RPG::Client { class ChenLingBattleStageData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9353030)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETFINISHSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0x9353820)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETSTORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0x93539C0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETUNLOCKEDDECKIDS_OFFSET UNITYSDK_OFFSET(0x9353BA0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x93520C0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x9353E10)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTWAVE_OFFSET UNITYSDK_OFFSET(0x9353F10)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_ENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0x9353F20)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_HASINPROGRESSSTAGE_OFFSET UNITYSDK_OFFSET(0x9353DE0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x9353F40)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STAGEDATAS_OFFSET UNITYSDK_OFFSET(0x9353E00)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0x9353F00)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9352900)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISCURRENTINENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x9353A00)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISFINISHEDALLSTAGE_OFFSET UNITYSDK_OFFSET(0x9353510)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETCURRENTWAVE_OFFSET UNITYSDK_OFFSET(0x9353780)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0x93537D0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_ENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0x9353F30)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_HASINPROGRESSSTAGE_OFFSET UNITYSDK_OFFSET(0x9353DF0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x93534A0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x9353110)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_TRYGETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x9353630)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9354050)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCCURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x93531B0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCENDLESSDATAID_OFFSET UNITYSDK_OFFSET(0x9352E40)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTAGEDATAS_OFFSET UNITYSDK_OFFSET(0x9352A30)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0x9352C00)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_1_OFFSET UNITYSDK_OFFSET(0x93536F0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x9353200)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSYNCSTAGESTATES_OFFSET UNITYSDK_OFFSET(0x9353320)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageInfo_TypeDefinitionIndex = 49860;

	class ChenLingBattleStageInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StoryLineDataIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>* _StageDatas; // 0x18
		::System::Boolean _HasInProgressStage_k__BackingField; // 0x20
		::System::UInt32 _CurrentWave; // 0x24
		::System::UInt32 _EndlessModeWaveRecord_k__BackingField; // 0x28
		::System::Int32 _CurrentStageID; // 0x2C
		::System::Int32 _EndlessStageDataID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _SyncStageDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTAGEDATAS_OFFSET))(this);
		}

		::System::Void _SyncStoryLineDataIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTORYLINEDATAIDS_OFFSET))(this);
		}

		::System::Void _SyncEndlessDataID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCENDLESSDATAID_OFFSET))(this);
		}

		::System::Void SyncCurrentStage(::System::UInt32 stageID, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTSTAGE_OFFSET))(this, stageID, isUnlock);
		}

		::System::Void SyncCurrentPhase(::Class_1_36F606812EC9EB69_1* phaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTPHASE_OFFSET))(this, phaseInfo);
		}

		::System::Boolean IsFinishedAllStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISFINISHEDALLSTAGE_OFFSET))(this);
		}

		::System::Void _SyncCurrentStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCCURRENTSTAGEID_OFFSET))(this, stageID);
		}

		::System::Void _TrySetUnlockState(::System::UInt32 stageID, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_OFFSET))(this, stageID, isUnlock);
		}

		::System::Void _TrySetUnlockState_1(::RPG::Client::ChenLingBattleStageData* data, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleStageData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_1_OFFSET))(this, data, isUnlock);
		}

		::System::Void _TrySyncStageStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSYNCSTAGESTATES_OFFSET))(this);
		}

		::System::Void SetCurrentWave(::System::UInt32 wave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETCURRENTWAVE_OFFSET))(this, wave);
		}

		::System::Void SetEndlessModeWaveRecord(::System::UInt32 wave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETENDLESSMODEWAVERECORD_OFFSET))(this, wave);
		}

		::RPG::Client::ChenLingBattleStageData* TryGetStageData(::System::UInt32 stageID)
		{
			return ((::RPG::Client::ChenLingBattleStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_TRYGETSTAGEDATA_OFFSET))(this, stageID);
		}

		::System::Int32 GetFinishStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETFINISHSTAGECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetStoryLineDataIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETSTORYLINEDATAIDS_OFFSET))(this);
		}

		::System::Boolean IsCurrentInEndlessMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISCURRENTINENDLESSMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockedDeckIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETUNLOCKEDDECKIDS_OFFSET))(this);
		}

		::System::Boolean get_HasInProgressStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_HASINPROGRESSSTAGE_OFFSET))(this);
		}

		::System::Void set_HasInProgressStage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_HASINPROGRESSSTAGE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>* get_StageDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STAGEDATAS_OFFSET))(this);
		}

		::System::Int32 get_CurrentStageID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleStageData* get_CurrentStage()
		{
			return ((::RPG::Client::ChenLingBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StoryLineDataIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STORYLINEDATAIDS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTWAVE_OFFSET))(this);
		}

		::System::UInt32 get_EndlessModeWaveRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_ENDLESSMODEWAVERECORD_OFFSET))(this);
		}

		::System::Void set_EndlessModeWaveRecord(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_ENDLESSMODEWAVERECORD_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_MAXHP_OFFSET))(this);
		}
	};
}
