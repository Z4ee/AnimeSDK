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

#define CLASS_1_C85C4DAB350DD5FC_1_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x15FC0620)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x15FC0580)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x15FC0560)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x15FC04C0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x15FC05A0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x15FC0420)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15FC0370)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x15FC04A0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x15FC0400)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x15FC03C0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x15FC03E0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x15FC0380)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15FC05C0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x15FC0460)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x15FC0480)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x15FC0440)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x15FC05E0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x15FC0660)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x15FC0640)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x15FC03A0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x15FC04E0)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x15FC0500)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x15FC0540)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x15FC0520)
#define CLASS_1_C85C4DAB350DD5FC_1_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15FC0600)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x15FC0630)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x15FC0590)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x15FC0570)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x15FC04D0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x15FC05B0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x15FC0430)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x15FC04B0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0x15FC0410)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0x15FC03D0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0x15FC03F0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x15FC0390)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15FC05D0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0x15FC0470)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0x15FC0490)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x15FC0450)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x15FC05F0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x15FC0670)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x15FC0650)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x15FC03B0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x15FC04F0)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x15FC0510)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x15FC0550)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x15FC0530)
#define CLASS_1_C85C4DAB350DD5FC_1_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15FC0610)
#define CLASS_1_C85C4DAB350DD5FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC0680)

inline static constexpr unsigned int Class_1_C85C4DAB350DD5FC_1_TypeDefinitionIndex = 49574;

class Class_1_C85C4DAB350DD5FC_1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x18
	::Il2CppArray<::System::String*>* _LevelUpCostList_k__BackingField; // 0x20
	::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* _ShowDamageList_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x38
	::Il2CppArray<::Class_1_E8C259E730C95D15*>* _ShowHealList_k__BackingField; // 0x40
	::System::String* _SkillTriggerKey_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x50
	::System::Int32 _InitCoolDown_k__BackingField; // 0x58
	::System::Int32 _CoolDown_k__BackingField; // 0x5C
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x68
	::System::UInt32 _LevelUpRankCond_k__BackingField; // 0x70
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x74
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x78
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x80
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x84
	::System::UInt32 _MaxLevel_k__BackingField; // 0x88
	::System::UInt32 _LevelUpLevelCond_k__BackingField; // 0x8C
	::Struct_2_276321B6B122C69C_1 _Identifier_k__BackingField; // 0x90
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x98
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0xA0
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0xA8
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0xB0

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
