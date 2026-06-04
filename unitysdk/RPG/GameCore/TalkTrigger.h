#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/Client/DialoguePhase.h"
#include "unitysdk/RPG/Client/DialogueType.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_TalkSourceType.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/GameCore/TalkTrigger_DialogueGroupInfo.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class TalkTrigger_ShowTalkBtnParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET UNITYSDK_OFFSET(0xCEFFB40)
#define RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET UNITYSDK_OFFSET(0xCF005B0)
#define RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCEFF500)
#define RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCEFF2A0)
#define RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCEFF550)
#define RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xCEFF860)
#define RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCEFFB00)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0xCF00A80)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET UNITYSDK_OFFSET(0xCF00AD0)
#define RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0xCF00AA0)
#define RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xCF00AC0)
#define RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCF00630)
#define RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0xCF00A90)
#define RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0xCF00AB0)
#define RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCEFFA50)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET UNITYSDK_OFFSET(0xCF00280)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET UNITYSDK_OFFSET(0xCF00480)
#define RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xCF004F0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xCEFE0C0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0xCEFFE20)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET UNITYSDK_OFFSET(0xCF00680)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xCF00150)
#define RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCF000B0)
#define RPG_GAMECORE_TALKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFE1C0)
#define RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCEFD1B0)
#define RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xCEFD980)
#define RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xCEFCB90)
#define RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xCEFD350)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET UNITYSDK_OFFSET(0xCF003B0)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0xCEFDD70)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET UNITYSDK_OFFSET(0xCEFDEA0)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xCEFDAB0)
#define RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET UNITYSDK_OFFSET(0xCEFD8B0)
#define RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET UNITYSDK_OFFSET(0xCEFE4C0)
#define RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET UNITYSDK_OFFSET(0xCEFCB10)
#define RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xCEFD640)
#define RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET UNITYSDK_OFFSET(0xCEFDFD0)
#define RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xCEFE150)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xCEFCDF0)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xCEFCD60)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xCEFCF20)
#define RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCF00AE0)
#define RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCF00AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_TypeDefinitionIndex = 53742;

	class TalkTrigger : public ::Class_1_A696AB4980B3D7B5
	{
	public:
		// static const ::System::UInt32 INVALID_ID = 0x0; // 0x0
		// static const ::System::Int32 _ParallelDialogueMaxCount = 0x5; // 0x0
		::Il2CppArray<::System::UInt32>* _MissionDialogueGroups; // 0x98
		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* _ShowTalkBtnParam; // 0xA0
		::System::String* _DialogueGraph_k__BackingField; // 0xA8
		::RPG::GameCore::LevelGroupMissionConditionSet* _ConditionSet; // 0xB0
		::System::Single _dialogueCDConfig; // 0xB8
		::RPG::Client::DialogueType DialogueType; // 0xBC
		::System::Single _dialogueCD; // 0xC0
		::RPG::GameCore::DialogueUtil_TalkSourceType _TalkSourceType; // 0xC4
		::System::Single DialogueTriggerAngle; // 0xC8
		::System::Boolean _EnableDialogCamera_k__BackingField; // 0xCC

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _InitializeDialogueGroupPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _TryUpdateDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryUpdateDailyDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryUpdateMissionDialogueGroups(::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*& a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>*&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TalkTrigger_DialogueGroupInfo _GetCurChinwagDialogue(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkTrigger_DialogueGroupInfo(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>>* _GetShownMissionDialogueGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Boolean _IsDialogueAssociateWithTrackingMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET))(this, a1);
		}

		::System::Int32 _SortDialogue(::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo> a1, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::TalkTrigger_DialogueGroupInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetMissionDialogueGroups()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Void _RetargetRepeatedRandomValue(::System::UInt32& a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetFirstDialogueID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TalkChosenType _GetTalkChosenType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetTalkDialogueID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetTalkDialogueIDList(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void StartDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET))(this);
		}

		::System::Void DelayDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET))(this);
		}

		::System::Void EndDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET))(this);
		}

		::System::Boolean CheckDialogueConditions(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET))(this, a1);
		}

		::RPG::Client::DialoguePhase UpdataDialogueFirstPhase(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET))(this, a1);
		}

		::System::Boolean UpdataDialogueSecondPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET))(this);
		}

		::System::Void UpdateConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckLocalPlayerCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET))(this);
		}

		::System::Void SetTargetFakeAvatar(::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInTriggerHeight(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckIfInTriggerAngle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckIfIsBlockedByCustomTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET))(this);
		}

		::System::Boolean _CheckRogueDialogue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _GetTalkBtnParam(::System::UInt32 a1)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _CheckDialogueByGroupID(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void _InitDialogueType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET))(this);
		}

		::System::String* get_DialogueGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET))(this);
		}

		::System::Void set_DialogueGraph(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableDialogCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET))(this);
		}

		::System::Void set_EnableDialogCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET))(this);
		}

		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* get_DialogueParam()
		{
			return ((::RPG::GameCore::TalkTrigger_ShowTalkBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
		}
	};
}
