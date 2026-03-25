#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1B2F588DD05F2A7A;
class Class_1_34B28A5D6D3E2900;
class Class_1_EBD13AA6C54D68C4;
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class GameLevelHeartDialScriptConfig; }
namespace RPG::GameCore { class HeartDialScriptConditionRow; }
namespace RPG::GameCore { class HeartDialScriptRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEARTDIALSCRIPTINFO_ADDNPC_OFFSET UNITYSDK_OFFSET(0x99155C0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGEEMOTION_OFFSET UNITYSDK_OFFSET(0x9916D70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGENPCMODEL_OFFSET UNITYSDK_OFFSET(0x991C400)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x99151E0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCONDITIONITEMLIST_OFFSET UNITYSDK_OFFSET(0x991CE90)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x991D140)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTEMODIALOGUE_OFFSET UNITYSDK_OFFSET(0x991D270)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETDIALOGCONFIG_OFFSET UNITYSDK_OFFSET(0x991BC40)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONDESCTEXTID_OFFSET UNITYSDK_OFFSET(0x991A130)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x991A580)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETLOCKITEMDATA_OFFSET UNITYSDK_OFFSET(0x9918F70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GETMISSINGITEMDATA_OFFSET UNITYSDK_OFFSET(0x9918F10)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTEMO_OFFSET UNITYSDK_OFFSET(0x991BC20)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTMAINNPC_OFFSET UNITYSDK_OFFSET(0x991BBF0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x991BC00)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_DIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x991BBE0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x991BBB0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_ISSCRIPTANYCHANGE_OFFSET UNITYSDK_OFFSET(0x991AD70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_MISSINGEMPTYPE_OFFSET UNITYSDK_OFFSET(0x9919770)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x9918BE0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_UNLOCKRAIDID_OFFSET UNITYSDK_OFFSET(0x991BBC0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_HASEMOTYPE_OFFSET UNITYSDK_OFFSET(0x991A810)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_LOADCURRENTCUSTOMGROUP_OFFSET UNITYSDK_OFFSET(0x991C9F0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_MODIFYOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x991BF70)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_ONSTARTPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x991D2D0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x991CBB0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x991ADE0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0x991C450)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHMAINNPC_OFFSET UNITYSDK_OFFSET(0x9918890)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x9916A80)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9915570)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETFLOORID_OFFSET UNITYSDK_OFFSET(0x9915490)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETISCHANGE_OFFSET UNITYSDK_OFFSET(0x9916A20)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETMAINNPC_OFFSET UNITYSDK_OFFSET(0x991C320)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SETNPCTRACEINFO_OFFSET UNITYSDK_OFFSET(0x9917950)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTEMO_OFFSET UNITYSDK_OFFSET(0x991BC30)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x991BC10)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_SHOWPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x991AC80)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYDIALOGUEOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x991C6D0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x991D4B0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYPREOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x991D0B0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYRELEASEMAINNPC_OFFSET UNITYSDK_OFFSET(0x991C3A0)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYSHOWTOASTAFTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9917230)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO_UNLOADLASTGROUP_OFFSET UNITYSDK_OFFSET(0x991C750)
#define RPG_CLIENT_HEARTDIALSCRIPTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9913FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialScriptInfo_TypeDefinitionIndex = 53326;

	class HeartDialScriptInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::GameLevelHeartDialScriptConfig* _scriptConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _emoDialogueDict; // 0x18
		::RPG::GameCore::LevelGraphComponent* _act_Compt; // 0x20
		::System::String* _scriptDialogPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*>* _dialogDict; // 0x30
		::System::Collections::Generic::List_1<::Class_1_34B28A5D6D3E2900*>* _npcList; // 0x38
		::Class_1_1B2F588DD05F2A7A* _dialogueInfo; // 0x40
		::Class_1_1B2F588DD05F2A7A* _lastDialogueInfo; // 0x48
		::Class_1_34B28A5D6D3E2900* _currentMainNpc; // 0x50
		::RPG::GameCore::HeartDialScriptConditionRow* _scriptconditionRow; // 0x58
		::RPG::GameCore::HeartDialScriptRow* _scriptRow; // 0x60
		::RPG::GameCore::GameLevelHeartDialPerformance* _playPerformanceInfo; // 0x68
		::System::Boolean _isEmotionChange; // 0x70
		::System::Boolean _isStepChange; // 0x71
		::System::Boolean _needPlayPerformance; // 0x72
		::System::UInt32 _dialogueID; // 0x74
		::System::UInt32 _floorID; // 0x78
		::RPG::GameCore::HeartDialStepType _currentStep_k__BackingField; // 0x7C
		::RPG::GameCore::HeartDialEmoType _currentEmo_k__BackingField; // 0x80

		::System::Void _ctor(::RPG::GameCore::HeartDialScriptRow* scriptRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialScriptRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO__CTOR_OFFSET))(this, scriptRow);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_UNLOCKRAIDID_OFFSET))(this);
		}

		::Class_1_1B2F588DD05F2A7A* get_DialogueInfo()
		{
			return ((::Class_1_1B2F588DD05F2A7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_DIALOGUEINFO_OFFSET))(this);
		}

		::Class_1_34B28A5D6D3E2900* get_CurrentMainNPC()
		{
			return ((::Class_1_34B28A5D6D3E2900*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTMAINNPC_OFFSET))(this);
		}

		::RPG::GameCore::HeartDialStepType get_currentStep()
		{
			return ((::RPG::GameCore::HeartDialStepType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTSTEP_OFFSET))(this);
		}

		::System::Void set_currentStep(::RPG::GameCore::HeartDialStepType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialStepType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTSTEP_OFFSET))(this, value);
		}

		::RPG::GameCore::HeartDialEmoType get_currentEmo()
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_CURRENTEMO_OFFSET))(this);
		}

		::System::Void set_currentEmo(::RPG::GameCore::HeartDialEmoType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SET_CURRENTEMO_OFFSET))(this, value);
		}

		::RPG::GameCore::HeartDialEmoType get_missingEmpType()
		{
			return ((::RPG::GameCore::HeartDialEmoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_MISSINGEMPTYPE_OFFSET))(this);
		}

		::System::Boolean get_isScriptAnyChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GET_ISSCRIPTANYCHANGE_OFFSET))(this);
		}

		::System::Void AddNPC(::Class_1_34B28A5D6D3E2900* npc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34B28A5D6D3E2900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_ADDNPC_OFFSET))(this, npc);
		}

		::System::Void RefreshMainNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHMAINNPC_OFFSET))(this);
		}

		::System::Void SetNpcTraceInfo(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETNPCTRACEINFO_OFFSET))(this, value);
		}

		::System::Void SetMainNpc(::Class_1_34B28A5D6D3E2900* npc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34B28A5D6D3E2900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETMAINNPC_OFFSET))(this, npc);
		}

		::System::Void TryReleaseMainNpc(::Class_1_34B28A5D6D3E2900* heartDialNpc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34B28A5D6D3E2900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYRELEASEMAINNPC_OFFSET))(this, heartDialNpc);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ChangeNPCModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGENPCMODEL_OFFSET))(this);
		}

		::System::Void ChangeEmotion(::RPG::GameCore::HeartDialEmoType emotion, ::System::Boolean refresh)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_CHANGEEMOTION_OFFSET))(this, emotion, refresh);
		}

		::System::Void SetIsChange(::System::Boolean isStepChange, ::System::Boolean isEmoChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETISCHANGE_OFFSET))(this, isStepChange, isEmoChange);
		}

		::System::Void RefreshState(::RPG::GameCore::HeartDialStepType step, ::RPG::GameCore::HeartDialEmoType emotion, ::System::Boolean refresh)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeartDialStepType, ::RPG::GameCore::HeartDialEmoType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHSTATE_OFFSET))(this, step, emotion, refresh);
		}

		::System::Void ModifyOverrideInfo(::Class_1_EBD13AA6C54D68C4* overrideInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD13AA6C54D68C4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_MODIFYOVERRIDEINFO_OFFSET))(this, overrideInfo);
		}

		::System::Boolean ShowPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SHOWPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean PlayStartPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void TryShowToastAfterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYSHOWTOASTAFTERPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetMissingItemData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETMISSINGITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetLockItemData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETLOCKITEMDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetFullConditionDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONDESCTEXTID_OFFSET))(this);
		}

		::System::UInt32 GetFullConditionMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETFULLCONDITIONMAINMISSIONID_OFFSET))(this);
		}

		::System::Boolean HasEmoType(::RPG::GameCore::HeartDialEmoType emoType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_HASEMOTYPE_OFFSET))(this, emoType);
		}

		::System::Void SetFloorID(::System::UInt32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETFLOORID_OFFSET))(this, floorID);
		}

		::System::Void SetConfigPath(::System::String* configPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_SETCONFIGPATH_OFFSET))(this, configPath);
		}

		::System::Boolean PlayPerformance(::RPG::GameCore::GameLevelHeartDialPerformance* performanceInfo, ::System::Boolean isStartPerformance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialPerformance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_PLAYPERFORMANCE_OFFSET))(this, performanceInfo, isStartPerformance);
		}

		::System::Void RefreshDialogueInfo(::System::Boolean needPerformance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_REFRESHDIALOGUEINFO_OFFSET))(this, needPerformance);
		}

		::RPG::GameCore::GameLevelHeartDialDialogueConfig* GetDialogConfig(::System::UInt32 dialogueID)
		{
			return ((::RPG::GameCore::GameLevelHeartDialDialogueConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETDIALOGCONFIG_OFFSET))(this, dialogueID);
		}

		::System::UInt32 GetCurrentDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTDIALOGUEID_OFFSET))(this);
		}

		::System::UInt32 GetCurrentEmoDialogue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCURRENTEMODIALOGUE_OFFSET))(this);
		}

		::System::Void OnStartPerformanceEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_ONSTARTPERFORMANCEEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetConditionItemList(::System::UInt32 conditionID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_GETCONDITIONITEMLIST_OFFSET))(this, conditionID);
		}

		::System::Void TryPlayDialogueOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYDIALOGUEOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void TryPlayOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void TryPlayPreOverrideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_TRYPLAYPREOVERRIDEINFO_OFFSET))(this);
		}

		::System::Void UnloadLastGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_UNLOADLASTGROUP_OFFSET))(this);
		}

		::System::Void LoadCurrentCustomGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_LOADCURRENTCUSTOMGROUP_OFFSET))(this);
		}
	};
}
