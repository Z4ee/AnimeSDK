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
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/Struct_2_165AEDBFDC2B5511.h"
#include "unitysdk/Struct_2_1DBF01015A93DAF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0BF70B7AEC57376C;
class Class_1_5F51D4049EA87B7B;
class Class_1_B213EAEBAA108779;
class Class_1_EABAA0FA9B3BC305;
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class SkillCustomReadyConfig; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_SKILLDATA_ADDTAGS_OFFSET UNITYSDK_OFFSET(0xAA3DA10)
#define RPG_GAMECORE_SKILLDATA_GETAUTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xAA3DD50)
#define RPG_GAMECORE_SKILLDATA_GETCUSTOMREADYCONFIG_OFFSET UNITYSDK_OFFSET(0xAA3DE90)
#define RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUEIGNORESLOT_OFFSET UNITYSDK_OFFSET(0xAA3D950)
#define RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xAA329F0)
#define RPG_GAMECORE_SKILLDATA_GETREADCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xAA3E030)
#define RPG_GAMECORE_SKILLDATA_GETREADYANIMSTATE_OFFSET UNITYSDK_OFFSET(0xAA3D600)
#define RPG_GAMECORE_SKILLDATA_GETREADYCUSTOMFORMATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xAA3DFC0)
#define RPG_GAMECORE_SKILLDATA_GETUNUSABLECONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0xAA37850)
#define RPG_GAMECORE_SKILLDATA_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xAA3D490)
#define RPG_GAMECORE_SKILLDATA_GET_BPADD_OFFSET UNITYSDK_OFFSET(0xAA3CD50)
#define RPG_GAMECORE_SKILLDATA_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0xAA390F0)
#define RPG_GAMECORE_SKILLDATA_GET_CANTRAVERSALBYCOMPLEXSKILLAI_OFFSET UNITYSDK_OFFSET(0xAA3D7F0)
#define RPG_GAMECORE_SKILLDATA_GET_CHILDSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xAA37FC0)
#define RPG_GAMECORE_SKILLDATA_GET_CURRENTCTRLTYPE_OFFSET UNITYSDK_OFFSET(0xAA2FD20)
#define RPG_GAMECORE_SKILLDATA_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0xAA3D380)
#define RPG_GAMECORE_SKILLDATA_GET_FINALAIULTRASKILLPRIORITY_OFFSET UNITYSDK_OFFSET(0xAA3D860)
#define RPG_GAMECORE_SKILLDATA_GET_ISINSERTCONDTIONMEET_OFFSET UNITYSDK_OFFSET(0xAA37B50)
#define RPG_GAMECORE_SKILLDATA_GET_ISUSABLECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0xAA376F0)
#define RPG_GAMECORE_SKILLDATA_GET_ISVISABLECONDTIONMEET_OFFSET UNITYSDK_OFFSET(0xAA3D710)
#define RPG_GAMECORE_SKILLDATA_GET_LAYERTYPE_OFFSET UNITYSDK_OFFSET(0xAA357C0)
#define RPG_GAMECORE_SKILLDATA_GET_READYANIMSTATE_OFFSET UNITYSDK_OFFSET(0xAA3D5F0)
#define RPG_GAMECORE_SKILLDATA_GET_ROOTSKILLDATA_OFFSET UNITYSDK_OFFSET(0xAA3D790)
#define RPG_GAMECORE_SKILLDATA_GET_SHOWASMENU_OFFSET UNITYSDK_OFFSET(0xAA3D130)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0xAA3D540)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xAA2D400)
#define RPG_GAMECORE_SKILLDATA_GET_SKILLLAYOUTKEY_OFFSET UNITYSDK_OFFSET(0xAA3D210)
#define RPG_GAMECORE_SKILLDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0xAA3D690)
#define RPG_GAMECORE_SKILLDATA_GET_SPADD_OFFSET UNITYSDK_OFFSET(0xAA3CD00)
#define RPG_GAMECORE_SKILLDATA_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0xAA3D330)
#define RPG_GAMECORE_SKILLDATA_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0xAA3D2E0)
#define RPG_GAMECORE_SKILLDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xAA3D290)
#define RPG_GAMECORE_SKILLDATA_GET_TARGETINFO_OFFSET UNITYSDK_OFFSET(0xAA2D350)
#define RPG_GAMECORE_SKILLDATA_GET_TARGETTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xAA3D3D0)
#define RPG_GAMECORE_SKILLDATA_GET_UISKILLINDEX_OFFSET UNITYSDK_OFFSET(0xAA3D090)
#define RPG_GAMECORE_SKILLDATA_HASMULTITARGETGROUP_OFFSET UNITYSDK_OFFSET(0xAA3E190)
#define RPG_GAMECORE_SKILLDATA_MODIFYPROPERTY_OFFSET UNITYSDK_OFFSET(0xAA36600)
#define RPG_GAMECORE_SKILLDATA_REMOVETAGS_OFFSET UNITYSDK_OFFSET(0xAA3DBB0)
#define RPG_GAMECORE_SKILLDATA_SETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0xAA31EF0)
#define RPG_GAMECORE_SKILLDATA_SETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xAA3D8C0)
#define RPG_GAMECORE_SKILLDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0xAA3D700)
#define RPG_GAMECORE_SKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAA31E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillData_TypeDefinitionIndex = 46479;

	class SkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::JsonEnum*>* Tags; // 0x10
		::Struct_2_165AEDBFDC2B5511 ComplexAI; // 0x18
		::RPG::GameCore::SkillTargetConfig* DefaultTargetInfo; // 0x40
		::Il2CppArray<::Struct_2_1DBF01015A93DAF5>* _SkillProperties; // 0x48
		::Class_1_5F51D4049EA87B7B* InsertCondTask; // 0x50
		::RPG::GameCore::SkillConfig* Config; // 0x58
		::RPG::GameCore::SkillTargetConfig* OverrideTargetInfo; // 0x60
		::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* PreshowConditions; // 0x68
		::System::String* OverrideAnimState; // 0x70
		::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* CustomReadyConfigConditions; // 0x78
		::System::String* SkillTriggerKey; // 0x80
		::RPG::GameCore::SkillCharacterComponent* SkillCom; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* AllChildSkillDatas; // 0x90
		::RPG::GameCore::VCameraConfig* OverrideCameraConfig; // 0x98
		::RPG::GameCore::SkillData* ParentSkillData; // 0xA0
		::RPG::GameCore::VCameraConfig* OverrideCameraConfigAdded; // 0xA8
		::Class_1_5F51D4049EA87B7B* VisibleCondTask; // 0xB0
		::RPG::GameCore::ICharacterSkillRowData* RowData; // 0xB8
		::Class_1_B213EAEBAA108779* SkillTypeOverride; // 0xC0
		::Class_1_EABAA0FA9B3BC305* _Slot; // 0xC8
		::System::Collections::Generic::List_1<::Class_1_0BF70B7AEC57376C*>* UsableConditionDatas; // 0xD0
		::System::UInt32 SkillConfigID; // 0xD8
		::System::Int32 ChildIndex; // 0xDC
		::System::Int32 SkillIndex; // 0xE0
		::System::Int32 DefaultCoolDown; // 0xE4
		::System::Nullable_1<::System::Int32> OverrideAIUltraSkillPriority; // 0xE8
		::System::Int32 CurrentCoolDown; // 0xF0
		::System::Int32 MaxCastTimes; // 0xF4
		::System::Int32 LeftCastTimes; // 0xF8
		::System::UInt32 CommonActiveSkillID; // 0xFC
		::RPG::GameCore::AttackDamageType AttackDamageTypePreshowAttach; // 0x100

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

		::Class_1_EABAA0FA9B3BC305* get_Slot()
		{
			return ((::Class_1_EABAA0FA9B3BC305*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::Class_1_EABAA0FA9B3BC305* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EABAA0FA9B3BC305*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SET_SLOT_OFFSET))(this, value);
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

		::System::Void SetDefaultProperty(::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SETDEFAULTPROPERTY_OFFSET))(this, propertyType, val);
		}

		::System::Void SetOverrideProperty(::RPG::GameCore::SkillPropertyType propertyType, ::System::Nullable_1<::RPG::GameCore::FixPoint> val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_SETOVERRIDEPROPERTY_OFFSET))(this, propertyType, val);
		}

		::RPG::GameCore::FixPoint GetPropertyValueIgnoreSlot(::RPG::GameCore::SkillPropertyType propertyType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUEIGNORESLOT_OFFSET))(this, propertyType);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::SkillPropertyType propertyType)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETPROPERTYVALUE_OFFSET))(this, propertyType);
		}

		::System::Void ModifyProperty(::RPG::GameCore::SkillPropertyType propertyType, ::RPG::GameCore::SkillPropertyModifyType func, ::RPG::GameCore::FixPoint val)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_MODIFYPROPERTY_OFFSET))(this, propertyType, func, val);
		}

		::System::Void AddTags(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_ADDTAGS_OFFSET))(this, tags);
		}

		::System::Void RemoveTags(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>* tags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_REMOVETAGS_OFFSET))(this, tags);
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

		::System::Void GetReadCameraConfig(::RPG::GameCore::VCameraConfig*& cameraConfig, ::RPG::GameCore::VCameraConfig*& cameraConfigAdded)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*&, ::RPG::GameCore::VCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATA_GETREADCAMERACONFIG_OFFSET))(this, cameraConfig, cameraConfigAdded);
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
