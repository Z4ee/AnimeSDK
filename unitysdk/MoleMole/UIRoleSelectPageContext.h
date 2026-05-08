#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_298DC3CE224F6DF8.h"
#include "unitysdk/Enum_3_32F297C5ACECCD12.h"
#include "unitysdk/Enum_3_3A250D2252735266.h"
#include "unitysdk/Enum_3_6A15F0394BF6F10B.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A0B1A57C6DC75B0F;
class Class_2_1824EF69C8E376A3;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIRoleSelectPageContext_OnHandleRoleSelect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1486E0F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET UNITYSDK_OFFSET(0x1486EC10)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x1486E030)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x1486E280)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x1486E2C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x1486E2A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1486E2E0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x1486E260)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x1486E240)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x1486E300)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x1486E020)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET UNITYSDK_OFFSET(0x1486EAC0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET UNITYSDK_OFFSET(0x1486E960)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET UNITYSDK_OFFSET(0x1486E800)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET UNITYSDK_OFFSET(0x1486E090)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x1486E510)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1486E3A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET UNITYSDK_OFFSET(0x14865CF0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x1486E350)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x1486E690)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x1486E290)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x1486E2D0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x1486E2B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1486E2F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x1486E270)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x1486E250)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x1486E310)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1486E320)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14865CC0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1486EC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageContext_TypeDefinitionIndex = 56156;

	class UIRoleSelectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x28
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x30
		::System::String* multiSelectBtnKey; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* unselectableList; // 0x40
		::System::Func_2<::System::Int32, ::System::String*>* _OnBlockClickHint_k__BackingField; // 0x48
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x50
		::Il2CppArray<::Enum_3_3A250D2252735266>* sortTypes; // 0x58
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* showRobots; // 0x60
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* showAvatarList; // 0x68
		::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CustomGetOtherTeamSelectIndex; // 0x70
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x78
		::Il2CppArray<::System::Int32>* _savedInitSelection; // 0x80
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectHandle; // 0x88
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x90
		::System::Func_4<::System::Int32, ::System::Int32, ::Class_2_1824EF69C8E376A3*, ::System::String*>* CustomGetMultiIndexStr; // 0x98
		::Il2CppArray<::Enum_3_3A250D2252735266>* highPrioritySortTypes; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* _Selections_k__BackingField; // 0xA8
		::System::Int32 initSelectionAvatarID; // 0xB0
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0xB4
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0xB8
		::Enum_3_F4E08D0E9B554572 _SelectType_k__BackingField; // 0xBC
		::System::Int32 selectMaxCount; // 0xC0
		::System::Int32 _OtherTeamIndex_k__BackingField; // 0xC4
		::System::Boolean ForceOpenEquipRecommend; // 0xC8
		::System::Boolean _FirstAsCaptain_k__BackingField; // 0xC9
		::System::Boolean allowSameName; // 0xCA
		::System::Boolean disableSubViewBtns; // 0xCB
		::System::UInt16 _selectedIndex; // 0xCC
		::System::Boolean strategyGuideNotPreview; // 0xCE
		::System::Int32 _TeamSplitIndex_k__BackingField; // 0xD0
		::System::Int32 slotIndexInTeam; // 0xD4
		::System::Boolean IsFromQuickTeam; // 0xD8
		::System::Boolean IsForceShowOwnFilterSorter; // 0xD9
		::System::Int32 AvatarUpgradeID; // 0xDC
		::System::Boolean showTrustDegreeBtn; // 0xE0
		::System::Boolean _MultiSelectToggleDisabled_k__BackingField; // 0xE1
		::System::Boolean IsAutoToRoleInfoWithBlack; // 0xE2
		::System::Boolean IsAutoToRoleInfoPage; // 0xE3
		::System::Boolean banBackFlowRobot; // 0xE4
		::System::Boolean IsBigScene; // 0xE5
		::System::Boolean ForceClickEquip; // 0xE6
		::System::Boolean MultiSelectDontShowNum; // 0xE7
		::Enum_3_32F297C5ACECCD12 customSelectReturnType; // 0xE8
		::Enum_3_298DC3CE224F6DF8 banSelfOwnedAvatarMode; // 0xEC
		::System::Int32 AutoTabIndex; // 0xF0
		::System::Boolean ForceOpenWeaponRecommend; // 0xF4
		::System::Boolean ForceClickWeapon; // 0xF5
		::Share::EHollowQuestType HollowQuestType; // 0xF6

		::System::Void _ctor(::Enum_3_F4E08D0E9B554572 selectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET))(this, selectType);
		}

		::System::Void _ctor_1(::Enum_3_CDAC16D6E8EB95EB usage, ::Enum_3_F4E08D0E9B554572 selectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CDAC16D6E8EB95EB, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET))(this, usage, selectType);
		}

		::Enum_3_CDAC16D6E8EB95EB get_usage()
		{
			return ((::Enum_3_CDAC16D6E8EB95EB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET))(this);
		}

		::System::Boolean get_collectNotOwnedAvatars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET))(this);
		}

		::System::Void SetCustomReturnHandler(::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectAction, ::Enum_3_32F297C5ACECCD12 returnType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect*, ::Enum_3_32F297C5ACECCD12))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET))(this, customSelectAction, returnType);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::Enum_3_F4E08D0E9B554572 get_SelectType()
		{
			return ((::Enum_3_F4E08D0E9B554572(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET))(this);
		}

		::System::Void set_SelectType(::Enum_3_F4E08D0E9B554572 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* get_Selections()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET))(this);
		}

		::System::Void set_Selections(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_FirstAsCaptain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET))(this);
		}

		::System::Void set_FirstAsCaptain(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET))(this, value);
		}

		::System::Func_2<::System::Int32, ::System::String*>* get_OnBlockClickHint()
		{
			return ((::System::Func_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET))(this);
		}

		::System::Void set_OnBlockClickHint(::System::Func_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET))(this, value);
		}

		::System::Boolean get_MultiSelectToggleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET))(this);
		}

		::System::Void set_MultiSelectToggleDisabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET))(this, value);
		}

		::System::Int32 get_OtherTeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET))(this);
		}

		::System::Void set_OtherTeamIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_TeamSplitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET))(this);
		}

		::System::Void set_TeamSplitIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET))(this, value);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectFirstAsCaptain(::System::Boolean firstAsCaptain)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET))(this, firstAsCaptain);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelected(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedUnselectable(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedOtherTeam(::System::Int32 otherTeamIdx, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET))(this, otherTeamIdx, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetPreemptibleOtherTeam(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* avatarList, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET))(this, avatarList, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections_1(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetBlockSelections(::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>* multiSelected, ::System::Func_2<::System::Int32, ::System::String*>* onBlockClickHint, ::Enum_3_6A15F0394BF6F10B additionFlags)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_1824EF69C8E376A3*>*, ::System::Func_2<::System::Int32, ::System::String*>*, ::Enum_3_6A15F0394BF6F10B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET))(this, multiSelected, onBlockClickHint, additionFlags);
		}

		::MoleMole::UIRoleSelectPageContext* DisableMultiSelectToggle()
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
