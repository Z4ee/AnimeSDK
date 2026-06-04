#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_276321B6B122C69C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C85C4DAB350DD5FC_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x14542220)
#define CLASS_1_C85C4DAB350DD5FC_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x14542180)
#define CLASS_1_C85C4DAB350DD5FC_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x14542160)
#define CLASS_1_C85C4DAB350DD5FC_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x145421A0)
#define CLASS_1_C85C4DAB350DD5FC_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x145420A0)
#define CLASS_1_C85C4DAB350DD5FC_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x14542050)
#define CLASS_1_C85C4DAB350DD5FC_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x14542060)
#define CLASS_1_C85C4DAB350DD5FC_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x145421C0)
#define CLASS_1_C85C4DAB350DD5FC_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x145420C0)
#define CLASS_1_C85C4DAB350DD5FC_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x145421E0)
#define CLASS_1_C85C4DAB350DD5FC_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x14542260)
#define CLASS_1_C85C4DAB350DD5FC_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x14542240)
#define CLASS_1_C85C4DAB350DD5FC_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x14542080)
#define CLASS_1_C85C4DAB350DD5FC_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x145420E0)
#define CLASS_1_C85C4DAB350DD5FC_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x14542100)
#define CLASS_1_C85C4DAB350DD5FC_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x14542140)
#define CLASS_1_C85C4DAB350DD5FC_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x14542120)
#define CLASS_1_C85C4DAB350DD5FC_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x14542200)
#define CLASS_1_C85C4DAB350DD5FC_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x14542230)
#define CLASS_1_C85C4DAB350DD5FC_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x14542190)
#define CLASS_1_C85C4DAB350DD5FC_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x14542170)
#define CLASS_1_C85C4DAB350DD5FC_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x145421B0)
#define CLASS_1_C85C4DAB350DD5FC_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x145420B0)
#define CLASS_1_C85C4DAB350DD5FC_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x14542070)
#define CLASS_1_C85C4DAB350DD5FC_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x145421D0)
#define CLASS_1_C85C4DAB350DD5FC_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x145420D0)
#define CLASS_1_C85C4DAB350DD5FC_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x145421F0)
#define CLASS_1_C85C4DAB350DD5FC_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x14542270)
#define CLASS_1_C85C4DAB350DD5FC_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x14542250)
#define CLASS_1_C85C4DAB350DD5FC_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x14542090)
#define CLASS_1_C85C4DAB350DD5FC_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x145420F0)
#define CLASS_1_C85C4DAB350DD5FC_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x14542110)
#define CLASS_1_C85C4DAB350DD5FC_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x14542150)
#define CLASS_1_C85C4DAB350DD5FC_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x14542130)
#define CLASS_1_C85C4DAB350DD5FC_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x14542210)
#define CLASS_1_C85C4DAB350DD5FC__CTOR_OFFSET UNITYSDK_OFFSET(0x14542280)

inline static constexpr unsigned int Class_1_C85C4DAB350DD5FC_TypeDefinitionIndex = 48559;

class Class_1_C85C4DAB350DD5FC : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x18
	::System::String* _SkillTriggerKey_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x48
	::Struct_2_276321B6B122C69C _Identifier_k__BackingField; // 0x50
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x58
	::System::UInt32 _MaxLevel_k__BackingField; // 0x5C
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x78
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x80
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x84
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x88

	::System::Void _ctor(::Struct_2_276321B6B122C69C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_276321B6B122C69C get_Identifier()
	{
		return ((::Struct_2_276321B6B122C69C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_SkillTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SKILLTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SkillTriggerKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SKILLTRIGGERKEY_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SHOWSTANCELIST_OFFSET))(this);
	}

	::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SHOWSTANCELIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SPADD_OFFSET))(this);
	}

	::System::Void set_SPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SPBASE_OFFSET))(this);
	}

	::System::Void set_SPBase(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SPBASE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SPNEED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPMultipleRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SPMULTIPLERATIO_OFFSET))(this);
	}

	::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SPMULTIPLERATIO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_BPNEED_OFFSET))(this);
	}

	::System::Void set_BPNeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_BPNEED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_BPADD_OFFSET))(this);
	}

	::System::Void set_BPAdd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_BPADD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DelayRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_DELAYRATIO_OFFSET))(this);
	}

	::System::Void set_DelayRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_DELAYRATIO_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_PARAMLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SIMPLEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SIMPLEPARAMLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_StanceDamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_STANCEDAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_STANCEDAMAGETYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackType get_AttackType()
	{
		return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_ATTACKTYPE_OFFSET))(this);
	}

	::System::Void set_AttackType(::RPG::GameCore::AttackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_ATTACKTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillEffect get_SkillEffect()
	{
		return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SKILLEFFECT_OFFSET))(this);
	}

	::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SKILLEFFECT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SkillComboValueDelta()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
	}

	::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, a1);
	}
};
