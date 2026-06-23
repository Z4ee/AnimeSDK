#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7594C8C40FFC1AE0.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Enum_3_D51CB1582D6C6E9A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Struct_2_545C436C5B39D527.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_20;
class Class_1_90F86E90A663D1B4;
class Class_1_945ACFB1FEBC7A2C_6;
class Class_1_A0B1A57C6DC75B0F;
class Class_1_E081FCEC8F87505A;
class Class_1_FECC0FE2F87A8617;
class Class_2_0A55B5A82A61DAFA;
class Class_2_0A55B5A82A61DAFA_1;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_101;
class Class_2_7D61104C59A2F8F6;
class Class_2_AF37D287A7DA5B72;
class Class_2_F69D29AB796376C2;
class Class_3_5B0D01C92C1E671E_2;
class Class_3_DC4548D26CCF6FCF;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }
namespace MoleMole { class UILineupSelectContext_CheckGoBattleDel; }
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UILineupSelectContext_OnSelectionChanged; }
namespace MoleMole { class UILineupSelectPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET UNITYSDK_OFFSET(0x169BBBC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x169BBE90)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x169BD390)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x169BD5A0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET UNITYSDK_OFFSET(0x169BC2D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x169BDA00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x169BDB10)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x169BBD20)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x169BC170)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x169BD360)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x169BD570)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x169BD9D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x169BDAE0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169BBBD0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET UNITYSDK_OFFSET(0x169BDBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_TypeDefinitionIndex = 60175;

	class UILineupSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x28
		::Class_3_5B0D01C92C1E671E_2* HollowQuestLevelInfo; // 0x30
		::System::String* buddyLockTipTextMapId; // 0x38
		::MoleMole::UILineupSelectContext_CheckGoBattleDel* onCheckCanGoBattle; // 0x40
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x48
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* RobotList; // 0x50
		::System::Action_1<::System::Action*>* goButtonClickCallback; // 0x58
		::MoleMole::UILineupSelectContext_BeginBattleDel* onBeginBattle; // 0x60
		::System::Action_1<::MoleMole::QuickEditContext*>* SetQuickEditorContext; // 0x68
		::System::Func_1<::System::Boolean>* getNoReward; // 0x70
		::Class_1_90F86E90A663D1B4* initSelections; // 0x78
		::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* onGetRoleSelectContext; // 0x80
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::Enum_3_D51CB1582D6C6E9A>>* slotTypes; // 0x88
		::Struct_2_545C436C5B39D527 battleTypeData; // 0x90
		::System::Action_1<::System::Boolean>* setNoReward; // 0xA8
		::System::Func_2<::System::Int32, ::System::String*>* GetDisableSelectHintKey; // 0xB0
		::System::Action* onShowDetailInfo; // 0xB8
		::Class_1_945ACFB1FEBC7A2C_6* multiPlayInfo; // 0xC0
		::System::Func_2<::System::Int32, ::System::Boolean>* OverrideCheckSlotClick; // 0xC8
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0xD0
		::Class_3_DC4548D26CCF6FCF* onPostGetBuddySelectContext; // 0xD8
		::System::Action_1<::MoleMole::UILineupSelectPageController*>* overrideMainAction; // 0xE0
		::Class_2_F69D29AB796376C2* QuestCfg; // 0xE8
		::Il2CppArray<::System::Int32>* teams; // 0xF0
		::Class_1_FECC0FE2F87A8617* extraPresetsConfig; // 0xF8
		::System::Action_1<::System::Action*>* overrideBackAction; // 0x100
		::MoleMole::UILineupSelectContext_OnSelectionChanged* onSelectionChanged; // 0x108
		::System::Int32 questSubTypeForRamen; // 0x110
		::System::Int32 BigSceneTeamBuildingID; // 0x114
		::System::Int32 lockSlotCount; // 0x118
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0x11C
		::Share::EHollowQuestType hollowQuestType; // 0x120
		::System::Boolean IsHideManualQTE; // 0x122
		::System::Boolean openBuddy; // 0x123
		::Enum_3_A3F38457E644339A rewardBuffTag; // 0x124
		::System::Int32 AvatarUpgradeID; // 0x128
		::System::Int32 roleSelectCount; // 0x12C
		::System::Int32 energyCost; // 0x130
		::System::Int32 currentMissionID; // 0x134
		::System::Int32 recommendedLevel; // 0x138
		::Enum_3_7594C8C40FFC1AE0 questType; // 0x13C
		::System::Int32 avatarNeedCount; // 0x140
		::System::Boolean allowSameName; // 0x144
		::System::Boolean showPairUpInfo; // 0x145
		::System::Boolean IsBanBackFlowRobot; // 0x146
		::System::Boolean isRobotBuddy; // 0x147
		::System::Int32 averageLevelTips; // 0x148
		::System::Boolean IsBigScene; // 0x14C
		::System::Boolean banPreinstall; // 0x14D
		::System::Boolean freeSlot; // 0x14E
		::System::Boolean showMainQuestDifficultyToggle; // 0x14F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_208CC9941471731A_101* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_101*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void _ctor_2(::Class_0_16E4307DCC419505_20* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET))(this, questTemplate);
		}

		::System::Void _ctor_3(::Class_2_0A55B5A82A61DAFA_1* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET))(this, questTemp, fileID);
		}

		::System::Void _ctor_4(::Class_2_0A55B5A82A61DAFA* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_5(::Class_2_AF37D287A7DA5B72* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AF37D287A7DA5B72*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_6(::Class_2_7D61104C59A2F8F6* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7D61104C59A2F8F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET))(this, questTemp);
		}

		::System::Boolean get_HasValidPresetsAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET))(this);
		}

		::System::Void SetActivityBattleQuestContext(::Class_2_208CC9941471731A_101* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_101*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void SetLineupQuestBaseContext(::Class_0_16E4307DCC419505_20* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET))(this, questTemplate);
		}

		::System::Void SetArchiveBattleQuestContext(::Class_2_0A55B5A82A61DAFA_1* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_1*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET))(this, questTemp, fileID);
		}

		::System::Void SetHollowQuestContext(::Class_2_0A55B5A82A61DAFA* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeQuestContext(::Class_2_AF37D287A7DA5B72* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AF37D287A7DA5B72*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeTaskContext(::Class_2_7D61104C59A2F8F6* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7D61104C59A2F8F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Boolean _SetLineupQuestBaseContext_b__61_0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET))(this, data);
		}
	};
}
