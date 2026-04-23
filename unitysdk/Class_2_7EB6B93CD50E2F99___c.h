#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96F9BF0)
#define CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96F9C30)
#define CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__36_0_OFFSET UNITYSDK_OFFSET(0x96F9C40)
#define CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__55_1_OFFSET UNITYSDK_OFFSET(0x96F9C50)
#define CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__57_0_OFFSET UNITYSDK_OFFSET(0x96F9C90)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex = 65730;

class Class_2_7EB6B93CD50E2F99___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_52DF42E136544C98*>** StaticGet___9__55_1()
	{
		return (::System::Comparison_1<::Class_1_52DF42E136544C98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x68690);
	}
	static ::Class_2_7EB6B93CD50E2F99___c** StaticGet___9()
	{
		return (::Class_2_7EB6B93CD50E2F99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x68698);
	}
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__57_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x686A0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__36_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x686A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__36_0(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__36_0_OFFSET))(this, o);
	}

	::System::Int32 __SetupModifierHints_b__55_1(::Class_1_52DF42E136544C98* a, ::Class_1_52DF42E136544C98* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DF42E136544C98*, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__55_1_OFFSET))(this, a, b);
	}

	::System::Int32 __SortBuffs_b__57_0(::RPG::GameCore::TurnBasedModifierInstance* a, ::RPG::GameCore::TurnBasedModifierInstance* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__57_0_OFFSET))(this, a, b);
	}
};
