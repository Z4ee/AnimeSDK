#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_021CB433CF10B390;
class Class_1_36006FC25F5DDC69;
class Class_1_70D81EDD3AB1C837;
class Class_1_A02AD12DCED9B766;
class Class_2_181A7F9409C60DBC;
class Class_3_543326C044264182;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace System { class String; }

#define CLASS_1_13692FC46527EC83_CLEAR_OFFSET UNITYSDK_OFFSET(0x1189BA00)
#define CLASS_1_13692FC46527EC83_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0x1189C3E0)
#define CLASS_1_13692FC46527EC83_GET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1189C400)
#define CLASS_1_13692FC46527EC83_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1189C460)
#define CLASS_1_13692FC46527EC83_GET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x1189C480)
#define CLASS_1_13692FC46527EC83_GET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x1189C4C0)
#define CLASS_1_13692FC46527EC83_GET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x1189C4A0)
#define CLASS_1_13692FC46527EC83_GET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x1189C420)
#define CLASS_1_13692FC46527EC83_METHOD_1_0A3B90148BF9AF74_OFFSET UNITYSDK_OFFSET(0x1189C250)
#define CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1189BF80)
#define CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1189BD20)
#define CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1189BBE0)
#define CLASS_1_13692FC46527EC83_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x1189BC40)
#define CLASS_1_13692FC46527EC83_METHOD_1_4CF84453C16B2690_OFFSET UNITYSDK_OFFSET(0x1189C340)
#define CLASS_1_13692FC46527EC83_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x1189BFE0)
#define CLASS_1_13692FC46527EC83_METHOD_1_BC8857A31E97FC16_OFFSET UNITYSDK_OFFSET(0x1189BD80)
#define CLASS_1_13692FC46527EC83_METHOD_1_CE2BD801E9F2C0FE_OFFSET UNITYSDK_OFFSET(0x1189BA80)
#define CLASS_1_13692FC46527EC83_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x1189C440)
#define CLASS_1_13692FC46527EC83_SET_ABILITY_OFFSET UNITYSDK_OFFSET(0x1189C3F0)
#define CLASS_1_13692FC46527EC83_SET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1189C410)
#define CLASS_1_13692FC46527EC83_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1189C470)
#define CLASS_1_13692FC46527EC83_SET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x1189C490)
#define CLASS_1_13692FC46527EC83_SET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x1189C4D0)
#define CLASS_1_13692FC46527EC83_SET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x1189C4B0)
#define CLASS_1_13692FC46527EC83_SET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x1189C430)
#define CLASS_1_13692FC46527EC83__CTOR_OFFSET UNITYSDK_OFFSET(0x1189B9F0)

inline static constexpr unsigned int Class_1_13692FC46527EC83_TypeDefinitionIndex = 71364;

class Class_1_13692FC46527EC83 : public ::System::Object
{
public:
	::Class_1_70D81EDD3AB1C837* Field_1_8; // 0x10
	::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* _ConditionConfig_k__BackingField; // 0x18
	::Class_1_36006FC25F5DDC69* _Context_k__BackingField; // 0x20
	::Class_1_A02AD12DCED9B766* _Ability_k__BackingField; // 0x28
	::Class_1_021CB433CF10B390* Field_1_9; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint _CurrentCDTime_k__BackingField; // 0x40
	::System::Int32 _SkillUID_k__BackingField; // 0x48
	::System::Boolean _IsReleasedOnlyOnce_k__BackingField; // 0x4C
	::System::Boolean _IsCastBefore_k__BackingField; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CE2BD801E9F2C0FE(::Class_1_36006FC25F5DDC69* a1, ::RPG::GameCore::ChenLingAbilityConfig* a2, ::Class_3_543326C044264182* a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36006FC25F5DDC69*, ::RPG::GameCore::ChenLingAbilityConfig*, ::Class_3_543326C044264182*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_CE2BD801E9F2C0FE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_1_4CF84453C16B2690(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_4CF84453C16B2690_OFFSET))(this, a1);
	}

	::Class_1_A02AD12DCED9B766* get_Ability()
	{
		return ((::Class_1_A02AD12DCED9B766*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_ABILITY_OFFSET))(this);
	}

	::System::Void set_Ability(::Class_1_A02AD12DCED9B766* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A02AD12DCED9B766*))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_ABILITY_OFFSET))(this, value);
	}

	::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* get_ConditionConfig()
	{
		return ((::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_CONDITIONCONFIG_OFFSET))(this);
	}

	::System::Void set_ConditionConfig(::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_CONDITIONCONFIG_OFFSET))(this, value);
	}

	::System::Int32 get_SkillUID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_SKILLUID_OFFSET))(this);
	}

	::System::Void set_SkillUID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_SKILLUID_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Class_1_36006FC25F5DDC69* get_Context()
	{
		return ((::Class_1_36006FC25F5DDC69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_CONTEXT_OFFSET))(this);
	}

	::System::Void set_Context(::Class_1_36006FC25F5DDC69* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_CONTEXT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CurrentCDTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_CURRENTCDTIME_OFFSET))(this);
	}

	::System::Void set_CurrentCDTime(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_CURRENTCDTIME_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_BC8857A31E97FC16()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_BC8857A31E97FC16_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_1_0A3B90148BF9AF74()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_0A3B90148BF9AF74_OFFSET))(this);
	}

	::System::Boolean get_IsReleasedOnlyOnce()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_ISRELEASEDONLYONCE_OFFSET))(this);
	}

	::System::Void set_IsReleasedOnlyOnce(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_ISRELEASEDONLYONCE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean get_IsCastBefore()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_GET_ISCASTBEFORE_OFFSET))(this);
	}

	::System::Void set_IsCastBefore(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13692FC46527EC83_SET_ISCASTBEFORE_OFFSET))(this, value);
	}
};
