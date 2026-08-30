#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA952E0)
#define CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFA95320)
#define CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__45_0_OFFSET UNITYSDK_OFFSET(0xFA95330)
#define CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__64_1_OFFSET UNITYSDK_OFFSET(0xFA95340)
#define CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__69_0_OFFSET UNITYSDK_OFFSET(0xFA95380)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex = 71278;

class Class_2_7EB6B93CD50E2F99___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_52DF42E136544C98*>** StaticGet___9__64_1()
	{
		return (::System::Comparison_1<::Class_1_52DF42E136544C98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x1AF00);
	}
	static ::Class_2_7EB6B93CD50E2F99___c** StaticGet___9()
	{
		return (::Class_2_7EB6B93CD50E2F99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x1AF08);
	}
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__69_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x1AF10);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__45_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x1AF18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__45_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__45_0_OFFSET))(this, a1);
	}

	::System::Int32 __SetupModifierHints_b__64_1(::Class_1_52DF42E136544C98* a1, ::Class_1_52DF42E136544C98* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DF42E136544C98*, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__64_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 __SortBuffs_b__69_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__69_0_OFFSET))(this, a1, a2);
	}
};
