#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_298DC3CE224F6DF8.h"
#include "unitysdk/Enum_3_32F297C5ACECCD12.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
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

#define MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x156A8080)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET UNITYSDK_OFFSET(0x156A8C00)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x156A7FC0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x156A8210)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x156A8250)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x156A8230)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x156A8270)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x156A81F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x156A81D0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x156A8290)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x156A7FB0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET UNITYSDK_OFFSET(0x156A8AA0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET UNITYSDK_OFFSET(0x156A8940)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET UNITYSDK_OFFSET(0x156A87E0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET UNITYSDK_OFFSET(0x156A8020)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x156A84F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x156A8380)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET UNITYSDK_OFFSET(0x15695310)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x156A8330)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x156A8670)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x156A8220)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x156A8260)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x156A8240)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x156A8280)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x156A8200)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x156A81E0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x156A82A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156A82B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15695290)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x156A8C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageContext_TypeDefinitionIndex = 46014;

	class UIRoleSelectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* showAvatarList; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x30
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectHandle; // 0x38
		::Il2CppArray<::Enum_3_3A280D225275881D>* sortTypes; // 0x40
		::System::Func_4<::System::Int32, ::System::Int32, ::Class_2_1824EF69C8E376A3*, ::System::String*>* CustomGetMultiIndexStr; // 0x48
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* showRobots; // 0x50
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x58
		::Il2CppArray<::System::Int32>* _savedInitSelection; // 0x60
		::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CustomGetOtherTeamSelectIndex; // 0x68
		::System::Func_3<::Class_1_A0B1A57C6DC75B0F*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* _Selections_k__BackingField; // 0x78
		::System::Func_2<::System::Int32, ::System::String*>* _OnBlockClickHint_k__BackingField; // 0x80
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* unselectableList; // 0x90
		::Il2CppArray<::Enum_3_3A280D225275881D>* highPrioritySortTypes; // 0x98
		::System::String* multiSelectBtnKey; // 0xA0
		::Class_2_F69D29AB796376C2* QuestCfg; // 0xA8
		::System::Boolean _MultiSelectToggleDisabled_k__BackingField; // 0xB0
		::System::Boolean _FirstAsCaptain_k__BackingField; // 0xB1
		::System::UInt16 _selectedIndex; // 0xB2
		::Enum_3_298DC3CE224F6DF8 banSelfOwnedAvatarMode; // 0xB4
		::System::Int32 _TeamSplitIndex_k__BackingField; // 0xB8
		::Enum_3_80565EDC4420BFE0 BuildBtnType; // 0xBC
		::Enum_3_32F297C5ACECCD12 customSelectReturnType; // 0xC0
		::System::Int32 AvatarUpgradeID; // 0xC4
		::System::Int32 _OtherTeamIndex_k__BackingField; // 0xC8
		::System::Int32 AutoTabIndex; // 0xCC
		::System::Int32 slotIndexInTeam; // 0xD0
		::System::Boolean IsFromQuickTeam; // 0xD4
		::System::Boolean IsBigScene; // 0xD5
		::System::Boolean ForceClickWeapon; // 0xD6
		::System::Boolean strategyGuideNotPreview; // 0xD7
		::System::Boolean showTrustDegreeBtn; // 0xD8
		::System::Boolean allowSameName; // 0xD9
		::System::Boolean ForceOpenWeaponRecommend; // 0xDA
		::System::Boolean disableSubViewBtns; // 0xDB
		::System::Boolean ForceOpenEquipRecommend; // 0xDC
		::System::Boolean checkReleaseTime; // 0xDD
		::System::Boolean IsAutoToRoleInfoPage; // 0xDE
		::System::Boolean IsAutoToRoleInfoWithBlack; // 0xDF
		::System::Boolean banBackFlowRobot; // 0xE0
		::System::Boolean MultiSelectDontShowNum; // 0xE1
		::Share::EHollowQuestType HollowQuestType; // 0xE2
		::System::Boolean ForceClickEquip; // 0xE4
		::System::Boolean IsForceShowOwnFilterSorter; // 0xE5
		::System::Int32 selectMaxCount; // 0xE8
		::System::Int32 initSelectionAvatarID; // 0xEC
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0xF0
		::Enum_3_F4E08D0E9B554572 _SelectType_k__BackingField; // 0xF4

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
