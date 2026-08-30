#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_021CB433CF10B390;
class Class_1_B8836451EE3130C0;
class Class_1_B8FF829EFDD29B81;
class Class_1_DA581C745E06616F;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace System { class String; }

#define CLASS_1_33B3767CFAB8BF13_CLEAR_OFFSET UNITYSDK_OFFSET(0x18515790)
#define CLASS_1_33B3767CFAB8BF13_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0x18516380)
#define CLASS_1_33B3767CFAB8BF13_GET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x185163A0)
#define CLASS_1_33B3767CFAB8BF13_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x18516400)
#define CLASS_1_33B3767CFAB8BF13_GET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x18516420)
#define CLASS_1_33B3767CFAB8BF13_GET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x18516460)
#define CLASS_1_33B3767CFAB8BF13_GET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x18516440)
#define CLASS_1_33B3767CFAB8BF13_GET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x185163C0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x18515D90)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x18515C60)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18515AA0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x18515B00)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_717BB26CA29468F0_OFFSET UNITYSDK_OFFSET(0x18515CC0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_7269FF885AF7BCF1_OFFSET UNITYSDK_OFFSET(0x185158A0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x18515DF0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_8C90C775EAE86885_OFFSET UNITYSDK_OFFSET(0x18516260)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x185163E0)
#define CLASS_1_33B3767CFAB8BF13_METHOD_1_DF2186C51E25C1BB_OFFSET UNITYSDK_OFFSET(0x18516100)
#define CLASS_1_33B3767CFAB8BF13_SET_ABILITY_OFFSET UNITYSDK_OFFSET(0x18516390)
#define CLASS_1_33B3767CFAB8BF13_SET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x185163B0)
#define CLASS_1_33B3767CFAB8BF13_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x18516410)
#define CLASS_1_33B3767CFAB8BF13_SET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x18516430)
#define CLASS_1_33B3767CFAB8BF13_SET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x18516470)
#define CLASS_1_33B3767CFAB8BF13_SET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x18516450)
#define CLASS_1_33B3767CFAB8BF13_SET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x185163D0)
#define CLASS_1_33B3767CFAB8BF13__CTOR_OFFSET UNITYSDK_OFFSET(0x18515780)

inline static constexpr unsigned int Class_1_33B3767CFAB8BF13_TypeDefinitionIndex = 77395;

class Class_1_33B3767CFAB8BF13 : public ::System::Object
{
public:
	::Class_1_B8836451EE3130C0* _Ability_k__BackingField; // 0x10
	::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* _ConditionConfig_k__BackingField; // 0x18
	::Class_1_B8FF829EFDD29B81* _Context_k__BackingField; // 0x20
	::Class_1_DA581C745E06616F* PGPNHINPDBF; // 0x28
	::Class_1_021CB433CF10B390* CBPLMLPCCGB; // 0x30
	::RPG::GameCore::FixPoint _CurrentCDTime_k__BackingField; // 0x38
	::System::Boolean _IsCastBefore_k__BackingField; // 0x40
	::System::Boolean _IsReleasedOnlyOnce_k__BackingField; // 0x41
	::System::Int32 _SkillUID_k__BackingField; // 0x44
	::RPG::GameCore::FixPoint MCPHHDMBKEJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_7269FF885AF7BCF1(::Class_1_B8FF829EFDD29B81* a1, ::RPG::GameCore::ChenLingAbilityConfig* a2, ::Class_3_543326C044264182* a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8FF829EFDD29B81*, ::RPG::GameCore::ChenLingAbilityConfig*, ::Class_3_543326C044264182*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_7269FF885AF7BCF1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_8C90C775EAE86885(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_8C90C775EAE86885_OFFSET))(this, a1);
	}

	::Class_1_B8836451EE3130C0* get_Ability()
	{
		return ((::Class_1_B8836451EE3130C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_ABILITY_OFFSET))(this);
	}

	::System::Void set_Ability(::Class_1_B8836451EE3130C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8836451EE3130C0*))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_ABILITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* get_ConditionConfig()
	{
		return ((::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_CONDITIONCONFIG_OFFSET))(this);
	}

	::System::Void set_ConditionConfig(::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_CONDITIONCONFIG_OFFSET))(this, a1);
	}

	::System::Int32 get_SkillUID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_SKILLUID_OFFSET))(this);
	}

	::System::Void set_SkillUID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_SKILLUID_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Class_1_B8FF829EFDD29B81* get_Context()
	{
		return ((::Class_1_B8FF829EFDD29B81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_CONTEXT_OFFSET))(this);
	}

	::System::Void set_Context(::Class_1_B8FF829EFDD29B81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_CONTEXT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurrentCDTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_CURRENTCDTIME_OFFSET))(this);
	}

	::System::Void set_CurrentCDTime(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_CURRENTCDTIME_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_717BB26CA29468F0()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_717BB26CA29468F0_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_1_DF2186C51E25C1BB()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_DF2186C51E25C1BB_OFFSET))(this);
	}

	::System::Boolean get_IsReleasedOnlyOnce()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_ISRELEASEDONLYONCE_OFFSET))(this);
	}

	::System::Void set_IsReleasedOnlyOnce(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_ISRELEASEDONLYONCE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean get_IsCastBefore()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_GET_ISCASTBEFORE_OFFSET))(this);
	}

	::System::Void set_IsCastBefore(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33B3767CFAB8BF13_SET_ISCASTBEFORE_OFFSET))(this, a1);
	}
};
