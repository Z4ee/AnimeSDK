#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5D31C4140DCE7D34;
class Class_1_E8C259E730C95D15;
namespace System { class String; }

#define CLASS_1_C85C4DAB350DD5FC_1_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x1454DCC0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x1454DC20)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x1454DC00)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1454DB60)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x1454DC40)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1454DAC0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1454DA10)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1454DB40)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1454DAA0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x1454DA60)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x1454DA80)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1454DA20)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1454DC60)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x1454DB00)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x1454DB20)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x1454DAE0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1454DC80)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x1454DD00)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x1454DCE0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1454DA40)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x1454DB80)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x1454DBA0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x1454DBE0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x1454DBC0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1454DCA0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x1454DCD0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x1454DC30)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x1454DC10)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1454DB70)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x1454DC50)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1454DAD0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1454DB50)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1454DAB0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x1454DA70)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x1454DA90)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1454DA30)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1454DC70)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x1454DB10)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x1454DB30)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x1454DAF0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1454DC90)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x1454DD10)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x1454DCF0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1454DA50)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x1454DB90)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x1454DBB0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x1454DBF0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x1454DBD0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1454DCB0)
#define CLASS_1_C85C4DAB350DD5FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1454DD20)

inline static constexpr unsigned int Class_1_C85C4DAB350DD5FC_1_TypeDefinitionIndex = 48561;

class Class_1_C85C4DAB350DD5FC_1 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* _ShowDamageList_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x18
	::Il2CppArray<::Class_1_E8C259E730C95D15*>* _ShowHealList_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x38
	::System::String* _SkillTriggerKey_k__BackingField; // 0x40
	::Il2CppArray<::System::String*>* _LevelUpCostList_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x50
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x78
	::System::Int32 _InitCoolDown_k__BackingField; // 0x80
	::System::UInt32 _LevelUpLevelCond_k__BackingField; // 0x84
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x88
	::System::UInt32 _MaxLevel_k__BackingField; // 0x90
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x94
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x98
	::System::Int32 _CoolDown_k__BackingField; // 0x9C
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0xA0
	::System::UInt32 _LevelUpRankCond_k__BackingField; // 0xA8
	::Struct_2_276321B6B122C69C_1 _Identifier_k__BackingField; // 0xAC
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0xB8

	::System::Void _ctor(::Struct_2_276321B6B122C69C_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_1))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_276321B6B122C69C_1 get_Identifier()
	{
		return ((::Struct_2_276321B6B122C69C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_SkillTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SkillTriggerKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLTRIGGERKEY_OFFSET))(this, a1);
	}

	::System::UInt32 get_LevelUpLevelCond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPLEVELCOND_OFFSET))(this);
	}

	::System::Void set_LevelUpLevelCond(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPLEVELCOND_OFFSET))(this, a1);
	}

	::System::UInt32 get_LevelUpRankCond()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPRANKCOND_OFFSET))(this);
	}

	::System::Void set_LevelUpRankCond(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPRANKCOND_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_LevelUpCostList()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPCOSTLIST_OFFSET))(this);
	}

	::System::Void set_LevelUpCostList(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPCOSTLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWSTANCELIST_OFFSET))(this);
	}

	::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWSTANCELIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* get_ShowDamageList()
	{
		return ((::Il2CppArray<::Class_1_5D31C4140DCE7D34*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWDAMAGELIST_OFFSET))(this);
	}

	::System::Void set_ShowDamageList(::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5D31C4140DCE7D34*>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWDAMAGELIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_E8C259E730C95D15*>* get_ShowHealList()
	{
		return ((::Il2CppArray<::Class_1_E8C259E730C95D15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWHEALLIST_OFFSET))(this);
	}

	::System::Void set_ShowHealList(::Il2CppArray<::Class_1_E8C259E730C95D15*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_E8C259E730C95D15*>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWHEALLIST_OFFSET))(this, a1);
	}

	::System::Int32 get_InitCoolDown()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_INITCOOLDOWN_OFFSET))(this);
	}

	::System::Void set_InitCoolDown(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_INITCOOLDOWN_OFFSET))(this, a1);
	}

	::System::Int32 get_CoolDown()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_COOLDOWN_OFFSET))(this);
	}

	::System::Void set_CoolDown(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_COOLDOWN_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SPADD_OFFSET))(this);
	}

	::System::Void set_SPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SPBASE_OFFSET))(this);
	}

	::System::Void set_SPBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SPBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SPNEED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPMultipleRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SPMULTIPLERATIO_OFFSET))(this);
	}

	::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SPMULTIPLERATIO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_BPNEED_OFFSET))(this);
	}

	::System::Void set_BPNeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_BPNEED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_BPADD_OFFSET))(this);
	}

	::System::Void set_BPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_BPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DelayRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_DELAYRATIO_OFFSET))(this);
	}

	::System::Void set_DelayRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_DELAYRATIO_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_PARAMLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SIMPLEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SIMPLEPARAMLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_StanceDamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_STANCEDAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_STANCEDAMAGETYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackType get_AttackType()
	{
		return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_ATTACKTYPE_OFFSET))(this);
	}

	::System::Void set_AttackType(::RPG::GameCore::AttackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_ATTACKTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillEffect get_SkillEffect()
	{
		return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLEFFECT_OFFSET))(this);
	}

	::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLEFFECT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SkillComboValueDelta()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
	}

	::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, a1);
	}
};
