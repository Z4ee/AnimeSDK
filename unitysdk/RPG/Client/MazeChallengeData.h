#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class MazeChallengeSystem; }
namespace RPG::GameCore { class MazePuzzleChallengeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xA8784E0)
#define RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xA877CF0)
#define RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET UNITYSDK_OFFSET(0xA8783C0)
#define RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA878140)
#define RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET UNITYSDK_OFFSET(0xA8782D0)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xA878D20)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMCNT_OFFSET UNITYSDK_OFFSET(0xA878D40)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMTOTAL_OFFSET UNITYSDK_OFFSET(0xA878D50)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_ISFAIL_OFFSET UNITYSDK_OFFSET(0xA878D30)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_REMAININGSTEP_OFFSET UNITYSDK_OFFSET(0xA878D60)
#define RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA877970)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xA877FB0)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETPREPAREFINISH_OFFSET UNITYSDK_OFFSET(0xA878740)
#define RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET UNITYSDK_OFFSET(0xA878330)
#define RPG_CLIENT_MAZECHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA877860)
#define RPG_CLIENT_MAZECHALLENGEDATA__ISALLFINPARAMFINISH_OFFSET UNITYSDK_OFFSET(0xA878580)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFAIL_OFFSET UNITYSDK_OFFSET(0xA878470)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFINISH_OFFSET UNITYSDK_OFFSET(0xA878640)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0xA878060)
#define RPG_CLIENT_MAZECHALLENGEDATA__PREPARETIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xA878940)
#define RPG_CLIENT_MAZECHALLENGEDATA__TIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xA8788C0)
#define RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xA877DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeData_TypeDefinitionIndex = 56167;

	class MazeChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamTotal; // 0x10
		::Class_1_23F67DD15593C8D6* _LimitTimer; // 0x18
		::RPG::GameCore::MazePuzzleChallengeRow* _ChallengeData; // 0x20
		::Class_1_23F67DD15593C8D6* _NowTimer; // 0x28
		::Class_1_23F67DD15593C8D6* _PrepareTimer; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamCnt; // 0x38
		::RPG::Client::MazeChallengeSystem* _Owner; // 0x40
		::System::Int32 _RemainStep; // 0x48
		::System::Single _LimitTime; // 0x4C
		::System::UInt32 _AttachQuestID; // 0x50
		::System::Boolean _IsFail; // 0x54
		::System::Boolean _IsPreparing; // 0x55
		::System::Boolean IsPrepareFinish; // 0x56
		::System::UInt32 _ScreenBlockHandler; // 0x58

		::System::Void _ctor(::RPG::Client::MazeChallengeSystem* owner, ::System::UInt32 mazePuzzleID, ::System::UInt32 prepareTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MazeChallengeSystem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__CTOR_OFFSET))(this, owner, mazePuzzleID, prepareTime);
		}

		::System::Void AttachQuest(::System::UInt32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET))(this, questID);
		}

		::System::Void _UpdateAttachQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET))(this);
		}

		::System::Void _OnQuestUpdate(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET))(this, param);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Single GetTimeRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET))(this);
		}

		::System::Void ChangeRemainStep(::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET))(this, delta);
		}

		::System::Void AddFinParmrListSucc(::System::Int32 index, ::System::Int32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET))(this, index, cnt);
		}

		::System::Void SetFinParmrListSucc(::System::Int32 index, ::System::Int32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET))(this, index, cnt);
		}

		::System::Void SetPrepareFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_SETPREPAREFINISH_OFFSET))(this);
		}

		::System::Void _TimeUpAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__TIMEUPACTION_OFFSET))(this);
		}

		::System::Void _PrepareTimeUpAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__PREPARETIMEUPACTION_OFFSET))(this);
		}

		::System::Void _OnFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONFAIL_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONFINISH_OFFSET))(this);
		}

		::System::Boolean _IsAllFinParamFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ISALLFINPARAMFINISH_OFFSET))(this);
		}

		::RPG::GameCore::MazePuzzleChallengeRow* get_ChallengeData()
		{
			return ((::RPG::GameCore::MazePuzzleChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_ISFAIL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_FinParamCnt()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMCNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_FinParamTotal()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMTOTAL_OFFSET))(this);
		}

		::System::Int32 get_RemainingStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_REMAININGSTEP_OFFSET))(this);
		}
	};
}
