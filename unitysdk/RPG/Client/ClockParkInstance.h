#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_26.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_12EBBCDF245A0FB0_5;
class Class_1_21DCD4640D389503_19;
class Class_1_242BFB9DE152D766_17;
class Class_1_242BFB9DE152D766_19;
class Class_1_242BFB9DE152D766_20;
class Class_1_455008579EB95638;
class Class_1_5B567C8A01BAEDFE_88;
class Class_1_963E317C37FB5E9A_18;
class Class_1_D40936EF3BF54118_14;
class Class_1_DB57B006CFFCF00A_1;
class Class_1_E92D9F2145FFF946;
class Class_1_EA5A5E4D07C4CF2B_8;
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

#define RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AE09000)
#define RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE06550)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AE099B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x1AE09810)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET UNITYSDK_OFFSET(0x1AE08DA0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1AE09B50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08EE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F00)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1AE09E20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1AE09E60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1AE08FE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1AE09E40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x1AE08FA0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1AE08FC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1AE08EC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x1AE05F60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1AE09A80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AE098E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET UNITYSDK_OFFSET(0x1AE06470)
#define RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET UNITYSDK_OFFSET(0x1AE066C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08EF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1AE09E30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1AE09E70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1AE08FF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1AE09E50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x1AE08FB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1AE08F90)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1AE08FD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1AE08ED0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0x1AE06F50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET UNITYSDK_OFFSET(0x1AE06830)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x1AE067E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE05E40)
#define RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1AE065E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET UNITYSDK_OFFSET(0x1AE070C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1AE06190)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x1AE08620)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE06AD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1AE06B30)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET UNITYSDK_OFFSET(0x1AE07380)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1AE069B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1AE06B90)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x1AE07310)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET UNITYSDK_OFFSET(0x1AE089C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x1AE08BF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08950)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08820)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x1AE08A30)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_TypeDefinitionIndex = 58733;

	class ClockParkInstance : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance_ClockParkRandomEventState* _RandomEventState; // 0x10
		::RPG::Client::ClockParkBuffInfo* _BuffInfo_k__BackingField; // 0x18
		::RPG::Client::ClockParkWaitSelectStartChapterState* _SelectStartChapterState; // 0x20
		::RPG::Common::StateMachine_1<::RPG::Client::ClockParkInstance*>* _StateMachine; // 0x28
		::RPG::Client::ClockParkGameResultInfo* _ResultInfo_k__BackingField; // 0x30
		::RPG::Client::ClockParkSlotMachineState* _SlotMachineState; // 0x38
		::RPG::Client::ClockParkInstance_ClockParkCheckState* _CheckState; // 0x40
		::RPG::Client::ClockParkInstance_ClockParkBranchSelectState* _BranchSelectState; // 0x48
		::RPG::Client::ClockParkLittleGameState* _LittleGameState; // 0x50
		::RPG::Client::ClockParkCardInfo* _CardInfo_k__BackingField; // 0x58
		::RPG::Client::ClockParkActionInfo* _ActionInfo_k__BackingField; // 0x60
		::RPG::Client::ClockParkInstance_ClockParkStoryState* _StoryState; // 0x68
		::RPG::Client::ClockParkDiceInfo* _DiceInfo_k__BackingField; // 0x70
		::System::String* _ScriptTransNo_k__BackingField; // 0x78
		::RPG::Client::Promises::Promise* _RefreshOnGoingPromise; // 0x80
		::RPG::Client::ClockParkAttributeInfo* _AttributeInfo_k__BackingField; // 0x88
		::RPG::Client::BaseClockParkGameState* _CurGameState_k__BackingField; // 0x90
		::RPG::Client::ClockParkScriptInfo* _ScriptInfo_k__BackingField; // 0x98
		::Enum_3_DB663931210BBC27_26 _Status_k__BackingField; // 0xA0
		::RPG::Client::ClockParkGameStateEnum _PrevGameStateEnum_k__BackingField; // 0xA4
		::System::Boolean _IsWaitSelectStartChapterId_k__BackingField; // 0xA8
		::System::Boolean IsManualQuit; // 0xA9
		::RPG::Client::ClockParkGameStateEnum _CurGameStateEnum_k__BackingField; // 0xAC

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void QuitCurGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshOnGoingInfo()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET))(this);
		}

		::System::Void SyncStatus(::Enum_3_DB663931210BBC27_26 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET))(this, a1);
		}

		::System::Void SyncOnGoing(::Class_1_21DCD4640D389503_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET))(this, a1);
		}

		::System::Void SyncLotteryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET))(this, a1);
		}

		::System::Void _SyncScriptInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _SyncWaitFinishStoryInfo(::Class_1_5B567C8A01BAEDFE_88* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitPlaceDiceInfo(::Class_1_242BFB9DE152D766_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitMoveGameInfo(::Class_1_242BFB9DE152D766_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitHanuShootingInfo(::Class_1_242BFB9DE152D766_20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitSlotMachineInfo(::Class_1_963E317C37FB5E9A_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitInCheckPoint(::Class_1_12EBBCDF245A0FB0_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET))(this, a1);
		}

		::System::Void _SyncCardDice(::Class_1_455008579EB95638* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET))(this, a1);
		}

		::System::Void _SyncAttribute(::Class_1_EA5A5E4D07C4CF2B_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void _SyncBuffInfo(::Class_1_D40936EF3BF54118_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncState(::Class_1_E92D9F2145FFF946* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E92D9F2145FFF946*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET))(this, a1);
		}

		::System::Void Finish(::Class_1_DB57B006CFFCF00A_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_26 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_26 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkAttributeInfo* get_AttributeInfo()
		{
			return ((::RPG::Client::ClockParkAttributeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void set_AttributeInfo(::RPG::Client::ClockParkAttributeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::ClockParkBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::ClockParkBuffInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkDiceInfo* get_DiceInfo()
		{
			return ((::RPG::Client::ClockParkDiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET))(this);
		}

		::System::Void set_DiceInfo(::RPG::Client::ClockParkDiceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCardInfo* get_CardInfo()
		{
			return ((::RPG::Client::ClockParkCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::ClockParkCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkActionInfo* get_ActionInfo()
		{
			return ((::RPG::Client::ClockParkActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET))(this);
		}

		::System::Void set_ActionInfo(::RPG::Client::ClockParkActionInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkScriptInfo* get_ScriptInfo()
		{
			return ((::RPG::Client::ClockParkScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET))(this);
		}

		::System::Void set_ScriptInfo(::RPG::Client::ClockParkScriptInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET))(this);
		}

		::System::Void set_ResultInfo(::RPG::Client::ClockParkGameResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET))(this, a1);
		}

		::System::String* get_ScriptTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ScriptTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitSelectStartChapterId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this);
		}

		::System::Void set_IsWaitSelectStartChapterId(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this, a1);
		}

		::Class_1_455008579EB95638* CreateDicePlacement()
		{
			return ((::Class_1_455008579EB95638*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET))(this);
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

		::RPG::Client::BaseClockParkGameState* GetState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET))(this);
		}

		::System::Void _DisposeGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET))(this);
		}

		::System::Void _SwitchState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::BaseClockParkGameState* _GetState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameStateEnum get_CurGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_CurGameStateEnum(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameStateEnum get_PrevGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_PrevGameStateEnum(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET))(this, a1);
		}

		::RPG::Client::BaseClockParkGameState* get_CurGameState()
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::BaseClockParkGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseClockParkGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET))(this, a1);
		}
	};
}
