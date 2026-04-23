#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_019938BC9C50B169_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D4714BA97EC5BBC2_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x12376EA0)
#define CLASS_1_D4714BA97EC5BBC2_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x12376E00)
#define CLASS_1_D4714BA97EC5BBC2_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x12376DE0)
#define CLASS_1_D4714BA97EC5BBC2_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x12376E20)
#define CLASS_1_D4714BA97EC5BBC2_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x12376D20)
#define CLASS_1_D4714BA97EC5BBC2_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12376CD0)
#define CLASS_1_D4714BA97EC5BBC2_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12376CE0)
#define CLASS_1_D4714BA97EC5BBC2_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x12376E40)
#define CLASS_1_D4714BA97EC5BBC2_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x12376D40)
#define CLASS_1_D4714BA97EC5BBC2_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12376E60)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x12376EE0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x12376EC0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12376D00)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x12376D60)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x12376D80)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x12376DC0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x12376DA0)
#define CLASS_1_D4714BA97EC5BBC2_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x12376E80)
#define CLASS_1_D4714BA97EC5BBC2_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x12376EB0)
#define CLASS_1_D4714BA97EC5BBC2_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x12376E10)
#define CLASS_1_D4714BA97EC5BBC2_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x12376DF0)
#define CLASS_1_D4714BA97EC5BBC2_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x12376E30)
#define CLASS_1_D4714BA97EC5BBC2_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x12376D30)
#define CLASS_1_D4714BA97EC5BBC2_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12376CF0)
#define CLASS_1_D4714BA97EC5BBC2_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x12376E50)
#define CLASS_1_D4714BA97EC5BBC2_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x12376D50)
#define CLASS_1_D4714BA97EC5BBC2_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12376E70)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x12376EF0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x12376ED0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12376D10)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x12376D70)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x12376D90)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x12376DD0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x12376DB0)
#define CLASS_1_D4714BA97EC5BBC2_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x12376E90)
#define CLASS_1_D4714BA97EC5BBC2__CTOR_OFFSET UNITYSDK_OFFSET(0x12376F00)

inline static constexpr unsigned int Class_1_D4714BA97EC5BBC2_TypeDefinitionIndex = 47946;

class Class_1_D4714BA97EC5BBC2 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x18
	::System::String* _SkillTriggerKey_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x60
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x68
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x6C
	::System::UInt32 _MaxLevel_k__BackingField; // 0x70
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x74
	::Struct_2_019938BC9C50B169_3 _Identifier_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x88

	::System::Void _ctor(::Struct_2_019938BC9C50B169_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_3 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::String* get_SkillTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SkillTriggerKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLTRIGGERKEY_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_EXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SHOWSTANCELIST_OFFSET))(this);
	}

	::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SHOWSTANCELIST_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPADD_OFFSET))(this);
	}

	::System::Void set_SPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPBASE_OFFSET))(this);
	}

	::System::Void set_SPBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPMultipleRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPMULTIPLERATIO_OFFSET))(this);
	}

	::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPMULTIPLERATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_BPNEED_OFFSET))(this);
	}

	::System::Void set_BPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_BPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_BPADD_OFFSET))(this);
	}

	::System::Void set_BPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_BPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DelayRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_DELAYRATIO_OFFSET))(this);
	}

	::System::Void set_DelayRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_DELAYRATIO_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_PARAMLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SIMPLEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SIMPLEPARAMLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackDamageType get_StanceDamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_STANCEDAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_STANCEDAMAGETYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackType get_AttackType()
	{
		return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_ATTACKTYPE_OFFSET))(this);
	}

	::System::Void set_AttackType(::RPG::GameCore::AttackType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_ATTACKTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::SkillEffect get_SkillEffect()
	{
		return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLEFFECT_OFFSET))(this);
	}

	::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLEFFECT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SkillComboValueDelta()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
	}

	::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, value);
	}
};
