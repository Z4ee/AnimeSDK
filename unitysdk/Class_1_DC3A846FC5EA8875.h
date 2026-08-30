#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DC3A846FC5EA8875_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB992E00)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_5E56D540C935C2B2_OFFSET UNITYSDK_OFFSET(0xB992DB0)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xB992E90)
#define CLASS_1_DC3A846FC5EA8875_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB992E20)
#define CLASS_1_DC3A846FC5EA8875_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB992E10)
#define CLASS_1_DC3A846FC5EA8875__CTOR_OFFSET UNITYSDK_OFFSET(0xB992F00)

inline static constexpr unsigned int Class_1_DC3A846FC5EA8875_TypeDefinitionIndex = 72027;

class Class_1_DC3A846FC5EA8875 : public ::System::Object
{
public:
	// static const ::System::String* AIJHCIALLEJ; // 0x0
	// static const ::System::String* LGJFGLBHJAN; // 0x0
	// static const ::System::String* CLHAAOAGIEH; // 0x0
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

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC3A846FC5EA8875_METHOD_1_88B60F3B95FAA4F1_1_OFFSET))(this);
	}
};
