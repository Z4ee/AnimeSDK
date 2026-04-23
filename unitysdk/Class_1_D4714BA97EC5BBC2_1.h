#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

class Class_1_5D31C4140DCE7D34;
class Class_1_E8C259E730C95D15;
namespace System { class String; }

#define CLASS_1_D4714BA97EC5BBC2_1_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x8F81D50)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x8F81CB0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x8F81C90)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x8F81BF0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x8F81CD0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x8F81B50)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8F81AA0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x8F81BD0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x8F81B30)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x8F81AF0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x8F81B10)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8F81AB0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x8F81CF0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x8F81B90)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x8F81BB0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x8F81B70)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x8F81D10)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x8F81D90)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x8F81D70)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x8F81AD0)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x8F81C10)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x8F81C30)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x8F81C70)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x8F81C50)
#define CLASS_1_D4714BA97EC5BBC2_1_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x8F81D30)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x8F81D60)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x8F81CC0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x8F81CA0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x8F81C00)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x8F81CE0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x8F81B60)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x8F81BE0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x8F81B40)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x8F81B00)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x8F81B20)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8F81AC0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x8F81D00)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x8F81BA0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x8F81BC0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x8F81B80)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x8F81D20)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x8F81DA0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x8F81D80)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x8F81AE0)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x8F81C20)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x8F81C40)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x8F81C80)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x8F81C60)
#define CLASS_1_D4714BA97EC5BBC2_1_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x8F81D40)
#define CLASS_1_D4714BA97EC5BBC2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8F81DB0)

inline static constexpr unsigned int Class_1_D4714BA97EC5BBC2_1_TypeDefinitionIndex = 47948;

class Class_1_D4714BA97EC5BBC2_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_E8C259E730C95D15*>* _ShowHealList_k__BackingField; // 0x20
	::Il2CppArray<::System::String*>* _LevelUpCostList_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x30
	::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* _ShowDamageList_k__BackingField; // 0x38
	::System::String* _SkillTriggerKey_k__BackingField; // 0x40
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x50
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x58
	::Struct_2_019938BC9C50B169_4 _Identifier_k__BackingField; // 0x5C
	::System::UInt32 _LevelUpLevelCond_k__BackingField; // 0x64
	::System::Int32 _InitCoolDown_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x88
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x90
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x98
	::System::Int32 _CoolDown_k__BackingField; // 0xA0
	::System::UInt32 _MaxLevel_k__BackingField; // 0xA4
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0xA8
	::System::UInt32 _LevelUpRankCond_k__BackingField; // 0xB0
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0xB4
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0xB8

	::System::Void _ctor(::Struct_2_019938BC9C50B169_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_4))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_4 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::String* get_SkillTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SkillTriggerKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLTRIGGERKEY_OFFSET))(this, value);
	}

	::System::UInt32 get_LevelUpLevelCond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPLEVELCOND_OFFSET))(this);
	}

	::System::Void set_LevelUpLevelCond(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPLEVELCOND_OFFSET))(this, value);
	}

	::System::UInt32 get_LevelUpRankCond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPRANKCOND_OFFSET))(this);
	}

	::System::Void set_LevelUpRankCond(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPRANKCOND_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* get_LevelUpCostList()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_LEVELUPCOSTLIST_OFFSET))(this);
	}

	::System::Void set_LevelUpCostList(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_LEVELUPCOSTLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_EXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWSTANCELIST_OFFSET))(this);
	}

	::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWSTANCELIST_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* get_ShowDamageList()
	{
		return ((::Il2CppArray<::Class_1_5D31C4140DCE7D34*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWDAMAGELIST_OFFSET))(this);
	}

	::System::Void set_ShowDamageList(::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5D31C4140DCE7D34*>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWDAMAGELIST_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_E8C259E730C95D15*>* get_ShowHealList()
	{
		return ((::Il2CppArray<::Class_1_E8C259E730C95D15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SHOWHEALLIST_OFFSET))(this);
	}

	::System::Void set_ShowHealList(::Il2CppArray<::Class_1_E8C259E730C95D15*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_E8C259E730C95D15*>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SHOWHEALLIST_OFFSET))(this, value);
	}

	::System::Int32 get_InitCoolDown()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_INITCOOLDOWN_OFFSET))(this);
	}

	::System::Void set_InitCoolDown(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_INITCOOLDOWN_OFFSET))(this, value);
	}

	::System::Int32 get_CoolDown()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_COOLDOWN_OFFSET))(this);
	}

	::System::Void set_CoolDown(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_COOLDOWN_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SPADD_OFFSET))(this);
	}

	::System::Void set_SPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SPBASE_OFFSET))(this);
	}

	::System::Void set_SPBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SPBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPMultipleRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SPMULTIPLERATIO_OFFSET))(this);
	}

	::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SPMULTIPLERATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_BPNEED_OFFSET))(this);
	}

	::System::Void set_BPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_BPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_BPADD_OFFSET))(this);
	}

	::System::Void set_BPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_BPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DelayRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_DELAYRATIO_OFFSET))(this);
	}

	::System::Void set_DelayRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_DELAYRATIO_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_PARAMLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SIMPLEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SIMPLEPARAMLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackDamageType get_StanceDamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_STANCEDAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_STANCEDAMAGETYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackType get_AttackType()
	{
		return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_ATTACKTYPE_OFFSET))(this);
	}

	::System::Void set_AttackType(::RPG::GameCore::AttackType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_ATTACKTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::SkillEffect get_SkillEffect()
	{
		return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLEFFECT_OFFSET))(this);
	}

	::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLEFFECT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SkillComboValueDelta()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
	}

	::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_1_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, value);
	}
};
