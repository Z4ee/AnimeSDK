#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_152140BAFD2DB102_GetSkillByTagType.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_152140BAFD2DB102_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5BD0A0)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xE5BD740)
#define CLASS_1_152140BAFD2DB102_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xE5BD720)
#define CLASS_1_152140BAFD2DB102_GET_IGNOREASSISTENERGYCOST_OFFSET UNITYSDK_OFFSET(0xE5BEB40)
#define CLASS_1_152140BAFD2DB102_GET_ISASSISTSKILL_OFFSET UNITYSDK_OFFSET(0xE5BEB20)
#define CLASS_1_152140BAFD2DB102_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xE5BD080)
#define CLASS_1_152140BAFD2DB102_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xE5BE950)
#define CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xE5BEB60)
#define CLASS_1_152140BAFD2DB102_GET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xE5BE970)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_1_OFFSET UNITYSDK_OFFSET(0xE5BD960)
#define CLASS_1_152140BAFD2DB102_METHOD_1_0497C5D3794AC6EB_OFFSET UNITYSDK_OFFSET(0xE5BD880)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xE5BD760)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xE5BE480)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE5BE990)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xE5BE1D0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_1F79D9A898101750_OFFSET UNITYSDK_OFFSET(0xE5BECE0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0xE5BE710)
#define CLASS_1_152140BAFD2DB102_METHOD_1_316F73D239B25567_OFFSET UNITYSDK_OFFSET(0xE5BD370)
#define CLASS_1_152140BAFD2DB102_METHOD_1_3A06A9FC6DD7BA4B_OFFSET UNITYSDK_OFFSET(0xE5BDE70)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0xE5BEA60)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xE5BD7D0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_4F9DCB69482DE0FD_OFFSET UNITYSDK_OFFSET(0xE5BD520)
#define CLASS_1_152140BAFD2DB102_METHOD_1_5163051CF20BD386_OFFSET UNITYSDK_OFFSET(0xE5BDAE0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_520976AB3BE1A29A_OFFSET UNITYSDK_OFFSET(0xE5BEFF0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_594727423FD556CD_OFFSET UNITYSDK_OFFSET(0xE5BF110)
#define CLASS_1_152140BAFD2DB102_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0xE5BEC20)
#define CLASS_1_152140BAFD2DB102_METHOD_1_65E7F0F818D1D3C6_OFFSET UNITYSDK_OFFSET(0xE5BED80)
#define CLASS_1_152140BAFD2DB102_METHOD_1_76BAE81A02260DCB_OFFSET UNITYSDK_OFFSET(0xE5BD870)
#define CLASS_1_152140BAFD2DB102_METHOD_1_7904D26DC12671A1_OFFSET UNITYSDK_OFFSET(0xE5BEA00)
#define CLASS_1_152140BAFD2DB102_METHOD_1_7B3DCC75944D31D0_OFFSET UNITYSDK_OFFSET(0xE5BD9C0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_84050C834DAE965F_OFFSET UNITYSDK_OFFSET(0xE5BCE50)
#define CLASS_1_152140BAFD2DB102_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xE5BEB80)
#define CLASS_1_152140BAFD2DB102_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xE5BE680)
#define CLASS_1_152140BAFD2DB102_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xE5BCDF0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_9DABF00CB3BADACE_OFFSET UNITYSDK_OFFSET(0xE5BE160)
#define CLASS_1_152140BAFD2DB102_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0xE5BF200)
#define CLASS_1_152140BAFD2DB102_METHOD_1_C5B80D23AF6CFA39_OFFSET UNITYSDK_OFFSET(0xE5BDB80)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_1_OFFSET UNITYSDK_OFFSET(0xE5BD5C0)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D07833E4014047A4_OFFSET UNITYSDK_OFFSET(0xE5BD420)
#define CLASS_1_152140BAFD2DB102_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0xE5BD8D0)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xE5BD750)
#define CLASS_1_152140BAFD2DB102_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xE5BD730)
#define CLASS_1_152140BAFD2DB102_SET_IGNOREASSISTENERGYCOST_OFFSET UNITYSDK_OFFSET(0xE5BEB50)
#define CLASS_1_152140BAFD2DB102_SET_ISASSISTSKILL_OFFSET UNITYSDK_OFFSET(0xE5BEB30)
#define CLASS_1_152140BAFD2DB102_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xE5BD090)
#define CLASS_1_152140BAFD2DB102_SET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xE5BE960)
#define CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xE5BEB70)
#define CLASS_1_152140BAFD2DB102_SET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xE5BE980)
#define CLASS_1_152140BAFD2DB102__CTOR_OFFSET UNITYSDK_OFFSET(0xE5BEEC0)

inline static constexpr unsigned int Class_1_152140BAFD2DB102_TypeDefinitionIndex = 56416;

class Class_1_152140BAFD2DB102 : public ::System::Object
{
public:
	::System::String* BCKBHPNAMKJ; // 0x10
	::RPG::GameCore::GameEntity* CKKCCHDAKFC; // 0x18
	::Class_3_07C3C4D2990C49EE* BEEAIJDOAAA; // 0x20
	::RPG::GameCore::GameEntity* COBOHFLFEMI; // 0x28
	::Class_1_5F51D4049EA87B7B* OBFDONOPIEE; // 0x30
	::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x38
	::RPG::GameCore::SkillData* JNIIOPDOJLG; // 0x40
	::Il2CppArray<::System::String*>* PJGLPMGOLPK; // 0x48
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* _DynamicStrings_k__BackingField; // 0x50
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x58
	::RPG::GameCore::JsonEnum* IOAMLPELAOA; // 0x60
	::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x68
	::RPG::GameCore::TurnInsertActionUIConfig* _UIConfig_k__BackingField; // 0x70
	::System::String* LCIJHGBJDGK; // 0x78
	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* _DynamicValues_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _OverrideElationPoint_k__BackingField; // 0x88
	::RPG::GameCore::TurnState EHLFPNOBDHO; // 0x90
	::Class_1_152140BAFD2DB102_GetSkillByTagType JHLGIHOECLB; // 0x94
	::RPG::GameCore::ControlSkillType ODPKFPOJEEL; // 0x98
	::RPG::GameCore::ControlSkillType KBKCFAJKBBA; // 0x9C
	::System::Int32 GBFHFCCAAJB; // 0xA0
	::System::Boolean IGMHDHIKJIP; // 0xA4
	::System::Boolean JEKMHGMNELB; // 0xA5
	::System::Boolean _IgnoreAssistEnergyCost_k__BackingField; // 0xA6
	::System::Boolean PCDINPEGBIL; // 0xA7
	::System::Boolean LGKDFBLIOBP; // 0xA8
	::System::Boolean KANPLAPEDHM; // 0xA9
	::System::Boolean _IsAssistSkill_k__BackingField; // 0xAA
	::System::Boolean OJOMABNPKJC; // 0xAB
	::System::Int32 NALMBOOCCIN; // 0xAC
	::RPG::GameCore::BoolEx CBGBCMLJDEM; // 0xB0
	::System::Int32 AGDHGODFHAN; // 0xB4
	::System::Int32 OOODLFAEFDI; // 0xB8
	::System::Boolean IFAHIIPOEMM; // 0xBC
	::System::Boolean JDJOOOOANKL; // 0xBD
	::System::Boolean ADGJOMOGKJI; // 0xBE
	::System::Boolean JNGGFOGHJLG; // 0xBF
	::System::Int32 IKDHBIGOPCJ; // 0xC0
	::System::Boolean _IsSilence_k__BackingField; // 0xC4
	::System::Boolean BJNADCAFFKC; // 0xC5
	::System::Boolean OPKADIKKNMC; // 0xC6
	::System::Boolean CNBELANOFKP; // 0xC7
	::RPG::GameCore::InsertActionType EOFPHIPDLHB; // 0xC8
	::System::Boolean HALEDPBPGBK; // 0xCC
	::System::Boolean BAPOPGAEDCO; // 0xCD
	::System::Boolean KHADFIMEIHC; // 0xCE
	::System::Boolean _IsDisposed_k__BackingField; // 0xCF

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

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
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

	::System::Void Method_1_7B3DCC75944D31D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_7B3DCC75944D31D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_5163051CF20BD386(::RPG::GameCore::JsonEnum* a1, ::Class_1_152140BAFD2DB102_GetSkillByTagType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::Class_1_152140BAFD2DB102_GetSkillByTagType))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_5163051CF20BD386_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Boolean Method_1_20139550C8206D50()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_20139550C8206D50_OFFSET))(this);
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

	::RPG::GameCore::ActionBarUIConfig* Method_1_7904D26DC12671A1()
	{
		return ((::RPG::GameCore::ActionBarUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_7904D26DC12671A1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_4DA6D4A624E42CAB_1_OFFSET))(this);
	}

	::System::Boolean get_IsAssistSkill()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_ISASSISTSKILL_OFFSET))(this);
	}

	::System::Void set_IsAssistSkill(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_ISASSISTSKILL_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreAssistEnergyCost()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_IGNOREASSISTENERGYCOST_OFFSET))(this);
	}

	::System::Void set_IgnoreAssistEnergyCost(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_IGNOREASSISTENERGYCOST_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_OverrideElationPoint()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_GET_OVERRIDEELATIONPOINT_OFFSET))(this);
	}

	::System::Void set_OverrideElationPoint(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_SET_OVERRIDEELATIONPOINT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1F79D9A898101750(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_1F79D9A898101750_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65E7F0F818D1D3C6(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_65E7F0F818D1D3C6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_520976AB3BE1A29A(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_520976AB3BE1A29A_OFFSET))(this, a1);
	}

	::System::Void Method_1_594727423FD556CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_594727423FD556CD_OFFSET))(this);
	}

	::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152140BAFD2DB102_METHOD_1_AF9B73C9965C6444_OFFSET))(this);
	}
};
