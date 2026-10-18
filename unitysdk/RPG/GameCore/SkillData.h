#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/RPG/GameCore/SkillLayerType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/Struct_2_165AEDBFDC2B5511.h"
#include "unitysdk/Struct_2_1DBF01015A93DAF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0BF70B7AEC57376C;
class Class_1_5F51D4049EA87B7B;
class Class_1_BCDC191CF05491FA;
class Class_1_DD56E792A2635894;
namespace RPG::GameCore { class AssistSkillUIConfig; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class SkillCustomReadyConfig; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class SkillUIConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_SKILLDATA_ADDTAGS_OFFSET UNITYSDK_OFFSET(0xE75C410)
#define RPG_GAMECORE_SKILLDATA_GETAUTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xE75C530)
#define RPG_GAMECORE_SKILLDATA_GETCUSTOMREADYCONFIG_OFFSET UNITYSDK_OFFSET(0xE75C660)
#define RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUEIGNORESLOT_OFFSET UNITYSDK_OFFSET(0xE75C170)
#define RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xE754A80)
#define RPG_GAMECORE_SKILLDATA_GETREADCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xE75C7E0)
#define RPG_GAMECORE_SKILLDATA_GETREADYANIMSTATE_OFFSET UNITYSDK_OFFSET(0xE75B7B0)
#define RPG_GAMECORE_SKILLDATA_GETREADYCUSTOMFORMATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE75C770)
#define RPG_GAMECORE_SKILLDATA_GETUNUSABLECONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0xE75CB50)
#define RPG_GAMECORE_SKILLDATA_GET_ASSISTSKILLUICONFIG_OFFSET UNITYSDK_OFFSET(0xE75BA60)
#define RPG_GAMECORE_SKILLDATA_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xE75B4A0)
#define RPG_GAMECORE_SKILLDATA_GET_BPADD_OFFSET UNITYSDK_OFFSET(0xE759E20)
#define RPG_GAMECORE_SKILLDATA_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0xE7595B0)
#define RPG_GAMECORE_SKILLDATA_GET_CANTRAVERSALBYCOMPLEXSKILLAI_OFFSET UNITYSDK_OFFSET(0xE75C020)
#define RPG_GAMECORE_SKILLDATA_GET_CHILDSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xE75BFC0)
#define RPG_GAMECORE_SKILLDATA_GET_CURRENTCTRLTYPE_OFFSET UNITYSDK_OFFSET(0xE75B180)
#define RPG_GAMECORE_SKILLDATA_GET_CUSTOMSKILLBUTTONPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE75B930)
#define RPG_GAMECORE_SKILLDATA_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0xE75B390)
#define RPG_GAMECORE_SKILLDATA_GET_FINALAIULTRASKILLPRIORITY_OFFSET UNITYSDK_OFFSET(0xE75C090)
#define RPG_GAMECORE_SKILLDATA_GET_FORBIDENHANCEEFFECT_OFFSET UNITYSDK_OFFSET(0xE75B9D0)
#define RPG_GAMECORE_SKILLDATA_GET_ISINSERTCONDTIONMEET_OFFSET UNITYSDK_OFFSET(0xE75BD20)
#define RPG_GAMECORE_SKILLDATA_GET_ISUSABLECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0xE75BDA0)
#define RPG_GAMECORE_SKILLDATA_GET_ISVISABLECONDTIONMEET_OFFSET UNITYSDK_OFFSET(0xE75BEE0)
#define RPG_GAMECORE_SKILLDATA_GET_LAYERTYPE_OFFSET UNITYSDK_OFFSET(0xE759990)
#define RPG_GAMECORE_SKILLDATA_GET_PROGRESSDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE75BAF0)
#define RPG_GAMECORE_SKILLDATA_GET_READYANIMSTATE_OFFSET UNITYSDK_OFFSET(0xE75B7A0)
#define RPG_GAMECORE_SKILLDATA_GET_ROOTSKILLDATA_OFFSET UNITYSDK_OFFSET(0xE75BF60)
#define RPG_GAMECORE_SKILLDATA_GET_SHOWASMENU_OFFSET UNITYSDK_OFFSET(0xE75B0A0)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0xE75B6A0)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xE75B5A0)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLLAYOUTKEY_OFFSET UNITYSDK_OFFSET(0xE75B220)
#define RPG_GAMECORE_SKILLDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xE75BCA0)
#define RPG_GAMECORE_SKILLDATA_GET_SPADD_OFFSET UNITYSDK_OFFSET(0xE759C60)
#define RPG_GAMECORE_SKILLDATA_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0xE75B340)
#define RPG_GAMECORE_SKILLDATA_GET_SPECIALBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xE75B840)
#define RPG_GAMECORE_SKILLDATA_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0xE75B2F0)
#define RPG_GAMECORE_SKILLDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xE75B2A0)
#define RPG_GAMECORE_SKILLDATA_GET_TARGETINFO_OFFSET UNITYSDK_OFFSET(0xE753B40)
#define RPG_GAMECORE_SKILLDATA_GET_TARGETTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xE75B3E0)
#define RPG_GAMECORE_SKILLDATA_GET_UISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xE75B000)
#define RPG_GAMECORE_SKILLDATA_GET__UICONFIG_OFFSET UNITYSDK_OFFSET(0xE75B8D0)
#define RPG_GAMECORE_SKILLDATA_HASMULTITARGETGROUP_OFFSET UNITYSDK_OFFSET(0xE75C940)
#define RPG_GAMECORE_SKILLDATA_MODIFYPROPERTY_OFFSET UNITYSDK_OFFSET(0xE75C220)
#define RPG_GAMECORE_SKILLDATA_OVERRIDEPROGRESSDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE75BB60)
#define RPG_GAMECORE_SKILLDATA_REMOVETAGS_OFFSET UNITYSDK_OFFSET(0xE75C4A0)
#define RPG_GAMECORE_SKILLDATA_SETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0xE757FE0)
#define RPG_GAMECORE_SKILLDATA_SETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE75C0F0)
#define RPG_GAMECORE_SKILLDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xE75BD10)
#define RPG_GAMECORE_SKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE757F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillData_TypeDefinitionIndex = 57667;

	class SkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0BF70B7AEC57376C*>* UsableConditionDatas; // 0x10
		::Class_1_5F51D4049EA87B7B* VisibleCondTask; // 0x18
		::Class_1_BCDC191CF05491FA* _Slot; // 0x20
		::Class_1_DD56E792A2635894* SkillTypeOverride; // 0x28
		::RPG::GameCore::SkillConfig* Config; // 0x30
		::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* CustomReadyConfigConditions; // 0x38
		::RPG::GameCore::SkillTargetConfig* DefaultTargetInfo; // 0x40
		::RPG::GameCore::ICharacterSkillRowData* RowData; // 0x48
		::RPG::GameCore::SkillData* AssitLinkSourceSkill; // 0x50
		::Il2CppArray<::Struct_2_1DBF01015A93DAF5>* _SkillProperties; // 0x58
		::RPG::GameCore::VCameraConfig* OverrideCameraConfigAdded; // 0x60
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::JsonEnum*>* Tags; // 0x68
		::System::String* SkillTriggerKey; // 0x70
		::RPG::GameCore::VCameraConfig* OverrideCameraConfig; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* AllChildSkillDatas; // 0x80
		::RPG::GameCore::SkillData* ParentSkillData; // 0x88
		::System::String* OverrideAnimState; // 0x90
		::RPG::GameCore::SkillTargetConfig* OverrideTargetInfo; // 0x98
		::Class_1_5F51D4049EA87B7B* InsertCondTask; // 0xA0
		::Struct_2_165AEDBFDC2B5511 ComplexAI; // 0xA8
		::RPG::GameCore::SkillCharacterComponent* SkillCom; // 0xD0
		::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* PreshowConditions; // 0xD8
		::System::Int32 MaxCastTimes; // 0xE0
		::System::Int32 SkillIndex; // 0xE4
		::System::Nullable_1<::System::Int32> OverrideAIUltraSkillPriority; // 0xE8
		::System::Int32 CurrentCoolDown; // 0xF0
		::System::Int32 DefaultCoolDown; // 0xF4
		::System::Nullable_1<::RPG::GameCore::SkillSPProgressType> _OverrideProgressDisplayType; // 0xF8
		::System::UInt32 CommonActiveSkillID; // 0x100
		::System::Int32 LeftCastTimes; // 0x104
		::System::Boolean IgnoreDisableAction; // 0x108
		::System::UInt32 SkillConfigID; // 0x10C
		::System::Int32 ChildIndex; // 0x110
		::RPG::GameCore::AttackDamageType AttackDamageTypePreshowAttach; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex get_UISkillIndex()
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_UISKILLINDEX_OFFSET))(this);
		}

		::RPG::GameCore::SkillLayoutKey get_SkillLayoutKey()
		{
			return ((::RPG::GameCore::SkillLayoutKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SKILLLAYOUTKEY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_BPNEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_BPADD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SPNEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SPADD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPMultipleRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SPMULTIPLERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SPBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_DELAYRATIO_OFFSET))(this);
		}

		::RPG::GameCore::SkillTargetConfig* get_TargetInfo()
		{
			return ((::RPG::GameCore::SkillTargetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_TARGETINFO_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_TargetTeamType()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_TARGETTEAMTYPE_OFFSET))(this);
		}

		::RPG::GameCore::AttackType get_AttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ATTACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::SkillEffect get_SkillEffect()
		{
			return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SKILLEFFECT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SkillComboValueDelta()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
		}

		::System::String* get_ReadyAnimState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_READYANIMSTATE_OFFSET))(this);
		}

		::RPG::GameCore::SkillUISpecialButtonType get_SpecialButtonType()
		{
			return ((::RPG::GameCore::SkillUISpecialButtonType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SPECIALBUTTONTYPE_OFFSET))(this);
		}

		::System::String* get_CustomSkillButtonPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_CUSTOMSKILLBUTTONPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_ForbidEnhanceEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_FORBIDENHANCEEFFECT_OFFSET))(this);
		}

		::RPG::GameCore::AssistSkillUIConfig* get_AssistSkillUIConfig()
		{
			return ((::RPG::GameCore::AssistSkillUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ASSISTSKILLUICONFIG_OFFSET))(this);
		}

		::RPG::GameCore::SkillUIConfig* get__UIConfig()
		{
			return ((::RPG::GameCore::SkillUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET__UICONFIG_OFFSET))(this);
		}

		::RPG::GameCore::SkillSPProgressType get_ProgressDisplayType()
		{
			return ((::RPG::GameCore::SkillSPProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_PROGRESSDISPLAYTYPE_OFFSET))(this);
		}

		::System::Void OverrideProgressDisplayType(::System::Nullable_1<::RPG::GameCore::SkillSPProgressType> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::SkillSPProgressType>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_OVERRIDEPROGRESSDISPLAYTYPE_OFFSET))(this, a1);
		}

		::Class_1_BCDC191CF05491FA* get_Slot()
		{
			return ((::Class_1_BCDC191CF05491FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::Class_1_BCDC191CF05491FA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BCDC191CF05491FA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SET_SLOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::ControlSkillType get_CurrentCtrlType()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_CURRENTCTRLTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsInsertCondtionMeet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ISINSERTCONDTIONMEET_OFFSET))(this);
		}

		::System::Boolean get_IsUsableConditionMeet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ISUSABLECONDITIONMEET_OFFSET))(this);
		}

		::System::Boolean get_IsVisableCondtionMeet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ISVISABLECONDTIONMEET_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* get_RootSkillData()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_ROOTSKILLDATA_OFFSET))(this);
		}

		::System::Int32 get_ChildSkillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_CHILDSKILLCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::SkillLayerType get_LayerType()
		{
			return ((::RPG::GameCore::SkillLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_LAYERTYPE_OFFSET))(this);
		}

		::System::Boolean get_ShowAsMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SHOWASMENU_OFFSET))(this);
		}

		::System::Boolean get_CanTraversalByComplexSkillAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_CANTRAVERSALBYCOMPLEXSKILLAI_OFFSET))(this);
		}

		::System::Int32 get_FinalAIUltraSkillPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_FINALAIULTRASKILLPRIORITY_OFFSET))(this);
		}

		::System::Void SetDefaultProperty(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SETDEFAULTPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void SetOverrideProperty(::RPG::GameCore::SkillPropertyType a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SETOVERRIDEPROPERTY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetPropertyValueIgnoreSlot(::RPG::GameCore::SkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUEIGNORESLOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::SkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUE_OFFSET))(this, a1);
		}

		::System::Void ModifyProperty(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillPropertyModifyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_MODIFYPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddTags(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_ADDTAGS_OFFSET))(this, a1);
		}

		::System::Void RemoveTags(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_REMOVETAGS_OFFSET))(this, a1);
		}

		::System::Int32 GetAutoSelectPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETAUTOSELECTPRIORITY_OFFSET))(this);
		}

		::RPG::GameCore::SkillCustomReadyConfig* GetCustomReadyConfig()
		{
			return ((::RPG::GameCore::SkillCustomReadyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETCUSTOMREADYCONFIG_OFFSET))(this);
		}

		::System::String* GetReadyAnimState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETREADYANIMSTATE_OFFSET))(this);
		}

		::RPG::GameCore::SkillCustomFormationConfig* GetReadyCustomFormationConfig()
		{
			return ((::RPG::GameCore::SkillCustomFormationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETREADYCUSTOMFORMATIONCONFIG_OFFSET))(this);
		}

		::System::Void GetReadCameraConfig(::RPG::GameCore::VCameraConfig*& a1, ::RPG::GameCore::VCameraConfig*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*&, ::RPG::GameCore::VCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETREADCAMERACONFIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasMultiTargetGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_HASMULTITARGETGROUP_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::UseSkillErrorCode, ::System::String*> GetUnusableConditionResult()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::UseSkillErrorCode, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETUNUSABLECONDITIONRESULT_OFFSET))(this);
		}
	};
}
