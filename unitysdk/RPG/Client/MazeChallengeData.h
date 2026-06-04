#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class MazeChallengeSystem; }
namespace RPG::GameCore { class MazePuzzleChallengeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xBFC2570)
#define RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xBFC1D00)
#define RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET UNITYSDK_OFFSET(0xBFC2450)
#define RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC21C0)
#define RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET UNITYSDK_OFFSET(0xBFC2360)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xBFC2D70)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMCNT_OFFSET UNITYSDK_OFFSET(0xBFC2D90)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMTOTAL_OFFSET UNITYSDK_OFFSET(0xBFC2DA0)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_ISFAIL_OFFSET UNITYSDK_OFFSET(0xBFC2D80)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_REMAININGSTEP_OFFSET UNITYSDK_OFFSET(0xBFC2DB0)
#define RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xBFC18F0)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xBFC2010)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETPREPAREFINISH_OFFSET UNITYSDK_OFFSET(0xBFC2830)
#define RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET UNITYSDK_OFFSET(0xBFC23C0)
#define RPG_CLIENT_MAZECHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC17C0)
#define RPG_CLIENT_MAZECHALLENGEDATA__ISALLFINPARAMFINISH_OFFSET UNITYSDK_OFFSET(0xBFC2610)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFAIL_OFFSET UNITYSDK_OFFSET(0xBFC2500)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFINISH_OFFSET UNITYSDK_OFFSET(0xBFC2730)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0xBFC20B0)
#define RPG_CLIENT_MAZECHALLENGEDATA__PREPARETIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xBFC2A30)
#define RPG_CLIENT_MAZECHALLENGEDATA__TIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xBFC29B0)
#define RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xBFC1DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeData_TypeDefinitionIndex = 56929;

	class MazeChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamTotal; // 0x10
		::Class_1_23F67DD15593C8D6* _LimitTimer; // 0x18
		::RPG::Client::MazeChallengeSystem* _Owner; // 0x20
		::RPG::GameCore::MazePuzzleChallengeRow* _ChallengeData; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamCnt; // 0x30
		::Class_1_23F67DD15593C8D6* _PrepareTimer; // 0x38
		::Class_1_23F67DD15593C8D6* _NowTimer; // 0x40
		::System::Boolean IsPrepareFinish; // 0x48
		::System::Boolean _IsPreparing; // 0x49
		::System::Boolean _IsFail; // 0x4A
		::System::UInt32 _ScreenBlockHandler; // 0x4C
		::System::Int32 _RemainStep; // 0x50
		::System::UInt32 _AttachQuestID; // 0x54
		::System::Single _LimitTime; // 0x58

		::System::Void _ctor(::RPG::Client::MazeChallengeSystem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MazeChallengeSystem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AttachQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET))(this, a1);
		}

		::System::Void _UpdateAttachQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET))(this);
		}

		::System::Void _OnQuestUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Single GetTimeRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET))(this);
		}

		::System::Void ChangeRemainStep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET))(this, a1);
		}

		::System::Void AddFinParmrListSucc(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET))(this, a1, a2);
		}

		::System::Void SetFinParmrListSucc(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET))(this, a1, a2);
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
