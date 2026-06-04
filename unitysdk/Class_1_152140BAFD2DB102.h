#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_152140BAFD2DB102_GetSkillByTagType.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_152140BAFD2DB102_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEB33E0)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xCEB3990)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xCEB3970)
#define CLASS_1_152140BAFD2DB102_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xCEB33C0)
#define CLASS_1_152140BAFD2DB102_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xCEB46B0)
#define CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xCEB4820)
#define CLASS_1_152140BAFD2DB102_GET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xCEB46D0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_1_OFFSET UNITYSDK_OFFSET(0xCEB3B10)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_OFFSET UNITYSDK_OFFSET(0xCEB3A30)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xCEB39B0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCEB46F0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xCEB4B90)
#define CLASS_1_152140BAFD2DB102_METHOD_1_3035D4433EFE48AC_OFFSET UNITYSDK_OFFSET(0xCEB4970)
#define CLASS_1_152140BAFD2DB102_METHOD_1_316F73D239B25567_OFFSET UNITYSDK_OFFSET(0xCEB35C0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_34632499FE9F94E2_OFFSET UNITYSDK_OFFSET(0xCEB4500)
#define CLASS_1_152140BAFD2DB102_METHOD_1_3A06A9FC6DD7BA4B_OFFSET UNITYSDK_OFFSET(0xCEB3FC0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xCEB4760)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4F9DCB69482DE0FD_OFFSET UNITYSDK_OFFSET(0xCEB3770)
#define CLASS_1_152140BAFD2DB102_METHOD_1_76BAE81A02260DCB_OFFSET UNITYSDK_OFFSET(0xCEB3A20)
#define CLASS_1_152140BAFD2DB102_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xCEB4310)
#define CLASS_1_152140BAFD2DB102_METHOD_1_84050C834DAE965F_OFFSET UNITYSDK_OFFSET(0xCEB31A0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xCEB3140)
#define CLASS_1_152140BAFD2DB102_METHOD_1_9DABF00CB3BADACE_OFFSET UNITYSDK_OFFSET(0xCEB42A0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_A4E49334588ED241_OFFSET UNITYSDK_OFFSET(0xCEB3C70)
#define CLASS_1_152140BAFD2DB102_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCEB4450)
#define CLASS_1_152140BAFD2DB102_METHOD_1_C5B80D23AF6CFA39_OFFSET UNITYSDK_OFFSET(0xCEB3CE0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_1_OFFSET UNITYSDK_OFFSET(0xCEB3810)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_OFFSET UNITYSDK_OFFSET(0xCEB3670)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0xCEB3A80)
#define CLASS_1_152140BAFD2DB102_METHOD_1_F0F3151B754D3D59_OFFSET UNITYSDK_OFFSET(0xCEB3B70)
#define CLASS_1_152140BAFD2DB102_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xCEB4AA0)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xCEB39A0)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xCEB3980)
#define CLASS_1_152140BAFD2DB102_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xCEB33D0)
#define CLASS_1_152140BAFD2DB102_SET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xCEB46C0)
#define CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xCEB4830)
#define CLASS_1_152140BAFD2DB102_SET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xCEB46E0)
#define CLASS_1_152140BAFD2DB102__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB4840)

inline static constexpr unsigned int Class_1_152140BAFD2DB102_TypeDefinitionIndex = 52493;

class Class_1_152140BAFD2DB102 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* _DynamicStrings_k__BackingField; // 0x10
	::RPG::GameCore::SkillData* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* _DynamicValues_k__BackingField; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_1_9; // 0x58
	::RPG::GameCore::JsonEnum* Field_1_10; // 0x60
	::RPG::GameCore::TurnInsertActionUIConfig* _UIConfig_k__BackingField; // 0x68
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_12; // 0x70
	::RPG::GameCore::GameEntity* Field_1_13; // 0x78
	::System::String* Field_1_14; // 0x80
	::System::Int32 Field_1_15; // 0x88
	::System::Boolean Field_1_16; // 0x8C
	::System::Boolean Field_1_17; // 0x8D
	::System::Boolean Field_1_18; // 0x8E
	::System::Boolean Field_1_19; // 0x8F
	::System::Int32 Field_1_20; // 0x90
	::System::Int32 Field_1_21; // 0x94
	::System::Boolean Field_1_22; // 0x98
	::System::Boolean Field_1_23; // 0x99
	::System::Boolean Field_1_24; // 0x9A
	::System::Boolean Field_1_25; // 0x9B
	::RPG::GameCore::ControlSkillType Field_1_26; // 0x9C
	::RPG::GameCore::ControlSkillType Field_1_27; // 0xA0
	::System::Int32 Field_1_28; // 0xA4
	::Class_1_152140BAFD2DB102_GetSkillByTagType Field_1_29; // 0xA8
	::System::Boolean Field_1_30; // 0xAC
	::System::Boolean Field_1_31; // 0xAD
	::System::Boolean Field_1_32; // 0xAE
	::System::Boolean Field_1_33; // 0xAF
	::System::Int32 Field_1_34; // 0xB0
	::System::Boolean Field_1_35; // 0xB4
	::System::Boolean _IsSilence_k__BackingField; // 0xB5
	::System::Boolean Field_1_37; // 0xB6
	::System::Boolean Field_1_38; // 0xB7
	::System::Boolean _IsDisposed_k__BackingField; // 0xB8
	::RPG::GameCore::TurnState Field_1_40; // 0xBC
	::RPG::GameCore::InsertActionType Field_1_41; // 0xC0
	::RPG::GameCore::FixPoint _OverrideElationPoint_k__BackingField; // 0xC8

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

	::System::Void set_IsDisposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_ISDISPOSED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::ControlSkillType Method_1_316F73D239B25567()
	{
		return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_316F73D239B25567_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_D07833E4014047A4()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_D07833E4014047A4_1()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_1_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_4F9DCB69482DE0FD()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_4F9DCB69482DE0FD_OFFSET))(this);
	}

	::RPG::GameCore::SkillData* Method_1_84050C834DAE965F()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_84050C834DAE965F_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* get_DynamicValues()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_DYNAMICVALUES_OFFSET))(this);
	}

	::System::Void set_DynamicValues(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_DYNAMICVALUES_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* get_DynamicStrings()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_DYNAMICSTRINGS_OFFSET))(this);
	}

	::System::Void set_DynamicStrings(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
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

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_0497C5D3794AC6EB_1(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0F3151B754D3D59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_F0F3151B754D3D59_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4E49334588ED241(::RPG::GameCore::JsonEnum* a1, ::Class_1_152140BAFD2DB102_GetSkillByTagType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::Class_1_152140BAFD2DB102_GetSkillByTagType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_A4E49334588ED241_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_82E992240300FB30_OFFSET))(this);
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

	::System::Void set_IsSilence(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_ISSILENCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnInsertActionUIConfig* get_UIConfig()
	{
		return ((::RPG::GameCore::TurnInsertActionUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_UICONFIG_OFFSET))(this);
	}

	::System::Void set_UIConfig(::RPG::GameCore::TurnInsertActionUIConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnInsertActionUIConfig*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_UICONFIG_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_OverrideElationPoint()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET))(this);
	}

	::System::Void set_OverrideElationPoint(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3035D4433EFE48AC(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_3035D4433EFE48AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}
};
