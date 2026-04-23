#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_26.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_12EBBCDF245A0FB0_5;
class Class_1_20A9CC5EE44FE1A7;
class Class_1_355A2207C3B7A99D_18;
class Class_1_355A2207C3B7A99D_20;
class Class_1_355A2207C3B7A99D_21;
class Class_1_3AE7F314F70B83F2_1;
class Class_1_455008579EB95638_21;
class Class_1_5B567C8A01BAEDFE_86;
class Class_1_76FC7D9EAE4C806C_2;
class Class_1_C4B679728AD83B32_3;
class Class_1_D40936EF3BF54118_13;
class Class_1_DCE302F7FD05DE84_2;
namespace RPG::Client { class BaseClockParkGameState; }
namespace RPG::Client { class ClockParkActionInfo; }
namespace RPG::Client { class ClockParkAttributeInfo; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkDiceInfo; }
namespace RPG::Client { class ClockParkGameResultInfo; }
namespace RPG::Client { class ClockParkInstance_ClockParkBranchSelectState; }
namespace RPG::Client { class ClockParkInstance_ClockParkCheckState; }
namespace RPG::Client { class ClockParkInstance_ClockParkRandomEventState; }
namespace RPG::Client { class ClockParkInstance_ClockParkStoryState; }
namespace RPG::Client { class ClockParkLittleGameState; }
namespace RPG::Client { class ClockParkScriptInfo; }
namespace RPG::Client { class ClockParkSlotMachineState; }
namespace RPG::Client { class ClockParkWaitSelectStartChapterState; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA0A1A60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA09EFD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA0A2340)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xA0A2280)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET UNITYSDK_OFFSET(0xA0A1800)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xA0A2400)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0xA0A19C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xA0A1940)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xA0A1960)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0xA0A19A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0xA0A26D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA0A2710)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0xA0A1980)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA0A1A40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0xA0A26F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0xA0A1A00)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0xA0A19E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA0A1A20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA0A1920)
#define RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xA09E9E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xA0A23A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA0A22E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET UNITYSDK_OFFSET(0xA09EEF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET UNITYSDK_OFFSET(0xA09F3B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0xA0A19D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xA0A1950)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0xA0A1970)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0xA0A19B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0xA0A26E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA0A2720)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET UNITYSDK_OFFSET(0xA0A1990)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA0A1A50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0xA0A2700)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0xA0A1A10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0xA0A19F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA0A1A30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA0A1930)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0xA09FC30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET UNITYSDK_OFFSET(0xA09F510)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0xA09F4C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA09E8C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA09F0D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET UNITYSDK_OFFSET(0xA09FD90)
#define RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA09EC10)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xA0A10E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA09F7B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA09F810)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET UNITYSDK_OFFSET(0xA0A0050)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0xA09F690)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET UNITYSDK_OFFSET(0xA09F870)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xA09FFE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET UNITYSDK_OFFSET(0xA0A1420)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET UNITYSDK_OFFSET(0xA0A1650)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET UNITYSDK_OFFSET(0xA0A13B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET UNITYSDK_OFFSET(0xA0A12E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET UNITYSDK_OFFSET(0xA0A1490)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_TypeDefinitionIndex = 56687;

	class ClockParkInstance : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance_ClockParkBranchSelectState* _BranchSelectState; // 0x10
		::RPG::Client::ClockParkLittleGameState* _LittleGameState; // 0x18
		::RPG::Client::ClockParkBuffInfo* _BuffInfo_k__BackingField; // 0x20
		::System::String* _ScriptTransNo_k__BackingField; // 0x28
		::RPG::Client::ClockParkDiceInfo* _DiceInfo_k__BackingField; // 0x30
		::RPG::Client::ClockParkCardInfo* _CardInfo_k__BackingField; // 0x38
		::RPG::Client::ClockParkAttributeInfo* _AttributeInfo_k__BackingField; // 0x40
		::RPG::Client::Promises::Promise* _RefreshOnGoingPromise; // 0x48
		::RPG::Common::StateMachine_1<::RPG::Client::ClockParkInstance*>* _StateMachine; // 0x50
		::RPG::Client::ClockParkWaitSelectStartChapterState* _SelectStartChapterState; // 0x58
		::RPG::Client::ClockParkInstance_ClockParkRandomEventState* _RandomEventState; // 0x60
		::RPG::Client::ClockParkActionInfo* _ActionInfo_k__BackingField; // 0x68
		::RPG::Client::ClockParkGameResultInfo* _ResultInfo_k__BackingField; // 0x70
		::RPG::Client::ClockParkInstance_ClockParkStoryState* _StoryState; // 0x78
		::RPG::Client::ClockParkSlotMachineState* _SlotMachineState; // 0x80
		::RPG::Client::ClockParkInstance_ClockParkCheckState* _CheckState; // 0x88
		::RPG::Client::BaseClockParkGameState* _CurGameState_k__BackingField; // 0x90
		::RPG::Client::ClockParkScriptInfo* _ScriptInfo_k__BackingField; // 0x98
		::RPG::Client::ClockParkGameStateEnum _CurGameStateEnum_k__BackingField; // 0xA0
		::System::Boolean _IsWaitSelectStartChapterId_k__BackingField; // 0xA4
		::System::Boolean IsManualQuit; // 0xA5
		::RPG::Client::ClockParkGameStateEnum _PrevGameStateEnum_k__BackingField; // 0xA8
		::Enum_3_DB663931210BBC27_26 _Status_k__BackingField; // 0xAC

		::System::Void _ctor(::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET))(this, scriptID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void QuitCurGame(::System::Boolean isSettleAndClear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET))(this, isSettleAndClear);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshOnGoingInfo()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET))(this);
		}

		::System::Void SyncStatus(::Enum_3_DB663931210BBC27_26 status)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET))(this, status);
		}

		::System::Void SyncOnGoing(::Class_1_3AE7F314F70B83F2_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET))(this, rsp);
		}

		::System::Void SyncLotteryID(::System::UInt32 lotteryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET))(this, lotteryID);
		}

		::System::Void _SyncScriptInfo(::System::UInt32 scriptID, ::System::UInt32 chapterID, ::System::Collections::Generic::IList_1<::System::UInt32>* chapterPathList, ::System::UInt32 roundID, ::System::UInt32 roundIndexInChapter, ::System::UInt32 checkPointID, ::System::UInt32 EndlessScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET))(this, scriptID, chapterID, chapterPathList, roundID, roundIndexInChapter, checkPointID, EndlessScore);
		}

		::System::Void _SyncWaitFinishStoryInfo(::Class_1_5B567C8A01BAEDFE_86* waitFinishStoryInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET))(this, waitFinishStoryInfo);
		}

		::System::Void _SyncWaitPlaceDiceInfo(::Class_1_355A2207C3B7A99D_18* waitPlaceDiceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET))(this, waitPlaceDiceInfo);
		}

		::System::Void _SyncWaitMoveGameInfo(::Class_1_355A2207C3B7A99D_20* waitMovieGameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET))(this, waitMovieGameInfo);
		}

		::System::Void _SyncWaitHanuShootingInfo(::Class_1_355A2207C3B7A99D_21* waitHanuShootingInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET))(this, waitHanuShootingInfo);
		}

		::System::Void _SyncWaitSlotMachineInfo(::Class_1_C4B679728AD83B32_3* waitSlotMachineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET))(this, waitSlotMachineInfo);
		}

		::System::Void _SyncWaitInCheckPoint(::Class_1_12EBBCDF245A0FB0_5* waitInCheckPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET))(this, waitInCheckPoint);
		}

		::System::Void _SyncCardDice(::Class_1_455008579EB95638_21* dicePlacement)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET))(this, dicePlacement);
		}

		::System::Void _SyncAttribute(::Class_1_76FC7D9EAE4C806C_2* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET))(this, attributes);
		}

		::System::Void _SyncBuffInfo(::Class_1_D40936EF3BF54118_13* buffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET))(this, buffInfo);
		}

		::System::Void _SyncState(::Class_1_20A9CC5EE44FE1A7* roundInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20A9CC5EE44FE1A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET))(this, roundInfo);
		}

		::System::Void Finish(::Class_1_DCE302F7FD05DE84_2* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET))(this, finishInfo);
		}

		::Enum_3_DB663931210BBC27_26 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_26 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkAttributeInfo* get_AttributeInfo()
		{
			return ((::RPG::Client::ClockParkAttributeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void set_AttributeInfo(::RPG::Client::ClockParkAttributeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::ClockParkBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::ClockParkBuffInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkDiceInfo* get_DiceInfo()
		{
			return ((::RPG::Client::ClockParkDiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET))(this);
		}

		::System::Void set_DiceInfo(::RPG::Client::ClockParkDiceInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkCardInfo* get_CardInfo()
		{
			return ((::RPG::Client::ClockParkCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::ClockParkCardInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkActionInfo* get_ActionInfo()
		{
			return ((::RPG::Client::ClockParkActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET))(this);
		}

		::System::Void set_ActionInfo(::RPG::Client::ClockParkActionInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkScriptInfo* get_ScriptInfo()
		{
			return ((::RPG::Client::ClockParkScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET))(this);
		}

		::System::Void set_ScriptInfo(::RPG::Client::ClockParkScriptInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkGameResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET))(this);
		}

		::System::Void set_ResultInfo(::RPG::Client::ClockParkGameResultInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET))(this, value);
		}

		::System::String* get_ScriptTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ScriptTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitSelectStartChapterId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this);
		}

		::System::Void set_IsWaitSelectStartChapterId(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this, value);
		}

		::Class_1_455008579EB95638_21* CreateDicePlacement()
		{
			return ((::Class_1_455008579EB95638_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::RPG::Client::BaseClockParkGameState* GetState(::RPG::Client::ClockParkGameStateEnum state)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET))(this, state);
		}

		::System::Void _InitGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET))(this);
		}

		::System::Void _DisposeGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET))(this);
		}

		::System::Void _SwitchState(::RPG::Client::ClockParkGameStateEnum targetState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET))(this, targetState);
		}

		::RPG::Client::BaseClockParkGameState* _GetState(::RPG::Client::ClockParkGameStateEnum stateEnum)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET))(this, stateEnum);
		}

		::RPG::Client::ClockParkGameStateEnum get_CurGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_CurGameStateEnum(::RPG::Client::ClockParkGameStateEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkGameStateEnum get_PrevGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_PrevGameStateEnum(::RPG::Client::ClockParkGameStateEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET))(this, value);
		}

		::RPG::Client::BaseClockParkGameState* get_CurGameState()
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::BaseClockParkGameState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseClockParkGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET))(this, value);
		}
	};
}
