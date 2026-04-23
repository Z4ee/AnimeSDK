#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DC3A846FC5EA8875_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1237CC00)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1237CC60)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1237CC20)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_5E56D540C935C2B2_OFFSET UNITYSDK_OFFSET(0x1237CBB0)
#define CLASS_1_DC3A846FC5EA8875_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1237CC10)
#define CLASS_1_DC3A846FC5EA8875__CTOR_OFFSET UNITYSDK_OFFSET(0x1237CCA0)

inline static constexpr unsigned int Class_1_DC3A846FC5EA8875_TypeDefinitionIndex = 66422;

class Class_1_DC3A846FC5EA8875 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E56D540C935C2B2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_METHOD_1_5E56D540C935C2B2_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_SET_DAMAGETYPE_OFFSET))(this, value);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_METHOD_1_128774387667156B_1_OFFSET))(this);
	}
};
