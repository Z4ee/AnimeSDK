#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_152140BAFD2DB102_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11861670)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x11861A90)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x11861A70)
#define CLASS_1_152140BAFD2DB102_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x11861650)
#define CLASS_1_152140BAFD2DB102_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0x118626C0)
#define CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0x11862830)
#define CLASS_1_152140BAFD2DB102_GET_UICONFIG_OFFSET UNITYSDK_OFFSET(0x118626E0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_1_OFFSET UNITYSDK_OFFSET(0x11861BE0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_OFFSET UNITYSDK_OFFSET(0x11861B30)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x11862B60)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0B351C9F98172C23_OFFSET UNITYSDK_OFFSET(0x11862960)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x11862A90)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0D2950F07429B2A3_OFFSET UNITYSDK_OFFSET(0x11861970)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11861AB0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x11862700)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11861B80)
#define CLASS_1_152140BAFD2DB102_METHOD_1_316F73D239B25567_OFFSET UNITYSDK_OFFSET(0x11861820)
#define CLASS_1_152140BAFD2DB102_METHOD_1_34632499FE9F94E2_OFFSET UNITYSDK_OFFSET(0x11862510)
#define CLASS_1_152140BAFD2DB102_METHOD_1_3A06A9FC6DD7BA4B_OFFSET UNITYSDK_OFFSET(0x11862060)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11862770)
#define CLASS_1_152140BAFD2DB102_METHOD_1_592B8E80B912F0A9_OFFSET UNITYSDK_OFFSET(0x11861C40)
#define CLASS_1_152140BAFD2DB102_METHOD_1_76BAE81A02260DCB_OFFSET UNITYSDK_OFFSET(0x11861B20)
#define CLASS_1_152140BAFD2DB102_METHOD_1_84050C834DAE965F_OFFSET UNITYSDK_OFFSET(0x11861450)
#define CLASS_1_152140BAFD2DB102_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x118613F0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_9DABF00CB3BADACE_OFFSET UNITYSDK_OFFSET(0x11862320)
#define CLASS_1_152140BAFD2DB102_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11862460)
#define CLASS_1_152140BAFD2DB102_METHOD_1_B504A25E7D6681AA_OFFSET UNITYSDK_OFFSET(0x118618D0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_C5B80D23AF6CFA39_OFFSET UNITYSDK_OFFSET(0x11861DA0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11862390)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x11861AA0)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x11861A80)
#define CLASS_1_152140BAFD2DB102_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x11861660)
#define CLASS_1_152140BAFD2DB102_SET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0x118626D0)
#define CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0x11862840)
#define CLASS_1_152140BAFD2DB102_SET_UICONFIG_OFFSET UNITYSDK_OFFSET(0x118626F0)
#define CLASS_1_152140BAFD2DB102__CTOR_OFFSET UNITYSDK_OFFSET(0x11862850)

inline static constexpr unsigned int Class_1_152140BAFD2DB102_TypeDefinitionIndex = 45070;

class Class_1_152140BAFD2DB102 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_11; // 0x10
	::RPG::GameCore::SkillData* Field_1_21; // 0x18
	::RPG::GameCore::GameEntity* Field_1_8; // 0x20
	::RPG::GameCore::GameEntity* Field_1_17; // 0x28
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* _DynamicValues_k__BackingField; // 0x30
	::System::String* Field_1_37; // 0x38
	::System::String* Field_1_4; // 0x40
	::RPG::GameCore::TurnInsertActionUIConfig* _UIConfig_k__BackingField; // 0x48
	::RPG::GameCore::GameEntity* Field_1_7; // 0x50
	::Class_3_5775A4FEC79026BC* Field_1_12; // 0x58
	::System::String* Field_1_1; // 0x60
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* _DynamicStrings_k__BackingField; // 0x68
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_31; // 0x70
	::System::Boolean Field_1_28; // 0x78
	::System::Boolean Field_1_38; // 0x79
	::System::Boolean Field_1_34; // 0x7A
	::System::Int32 Field_1_20; // 0x7C
	::System::Int32 Field_1_25; // 0x80
	::RPG::GameCore::ControlSkillType Field_1_27; // 0x84
	::RPG::GameCore::FixPoint _OverrideElationPoint_k__BackingField; // 0x88
	::System::Boolean Field_1_22; // 0x90
	::System::Boolean Field_1_33; // 0x91
	::System::Int32 Field_1_9; // 0x94
	::System::Boolean Field_1_5; // 0x98
	::System::Boolean Field_1_6; // 0x99
	::System::Boolean Field_1_35; // 0x9A
	::System::Boolean Field_1_32; // 0x9B
	::RPG::GameCore::InsertActionType Field_1_0; // 0x9C
	::System::Int32 Field_1_18; // 0xA0
	::RPG::GameCore::ControlSkillType Field_1_19; // 0xA4
	::System::Boolean Field_1_10; // 0xA8
	::System::Boolean _IsDisposed_k__BackingField; // 0xA9
	::System::Boolean _IsSilence_k__BackingField; // 0xAA
	::System::Boolean Field_1_26; // 0xAB
	::RPG::GameCore::TurnState Field_1_15; // 0xAC
	::System::Boolean Field_1_2; // 0xB0
	::System::Boolean Field_1_13; // 0xB1
	::System::Boolean Field_1_16; // 0xB2
	::System::Boolean Field_1_3; // 0xB3

	::System::Void _ctor(::RPG::GameCore::InsertActionType a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ControlSkillType a3, ::System::Int32 a4, ::System::String* a5, ::System::Int32 a6, ::System::Boolean a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InsertActionType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean get_IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_ISDISPOSED_OFFSET))(this);
	}

	::System::Void set_IsDisposed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_ISDISPOSED_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_316F73D239B25567()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_316F73D239B25567_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_B504A25E7D6681AA()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_B504A25E7D6681AA_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_0D2950F07429B2A3()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0D2950F07429B2A3_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_84050C834DAE965F()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_84050C834DAE965F_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* get_DynamicValues()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_DYNAMICVALUES_OFFSET))(this);
	}

	::System::Void set_DynamicValues(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_DYNAMICVALUES_OFFSET))(this, value);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* get_DynamicStrings()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_DYNAMICSTRINGS_OFFSET))(this);
	}

	::System::Void set_DynamicStrings(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_DYNAMICSTRINGS_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_76BAE81A02260DCB()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_76BAE81A02260DCB_OFFSET))(this);
	}

	::System::Void Method_1_0497C5D3794AC6EB(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_0497C5D3794AC6EB_1(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_592B8E80B912F0A9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_592B8E80B912F0A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5B80D23AF6CFA39(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_C5B80D23AF6CFA39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3A06A9FC6DD7BA4B(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_3A06A9FC6DD7BA4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DABF00CB3BADACE(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_9DABF00CB3BADACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_34632499FE9F94E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_34632499FE9F94E2_OFFSET))(this);
	}

	::System::Boolean get_IsSilence()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_ISSILENCE_OFFSET))(this);
	}

	::System::Void set_IsSilence(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_ISSILENCE_OFFSET))(this, value);
	}

	::RPG::GameCore::TurnInsertActionUIConfig* get_UIConfig()
	{
		return ((::RPG::GameCore::TurnInsertActionUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_UICONFIG_OFFSET))(this);
	}

	::System::Void set_UIConfig(::RPG::GameCore::TurnInsertActionUIConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnInsertActionUIConfig*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_UICONFIG_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_OverrideElationPoint()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET))(this);
	}

	::System::Void set_OverrideElationPoint(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET))(this, value);
	}

	::System::Int32 Method_1_0B351C9F98172C23(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0B351C9F98172C23_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}
};
