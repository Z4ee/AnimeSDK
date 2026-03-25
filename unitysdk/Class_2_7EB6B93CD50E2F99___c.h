#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11831720)
#define CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11831760)
#define CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__35_0_OFFSET UNITYSDK_OFFSET(0x11831770)
#define CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__53_1_OFFSET UNITYSDK_OFFSET(0x11831780)
#define CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__55_0_OFFSET UNITYSDK_OFFSET(0x118317C0)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex = 58436;

class Class_2_7EB6B93CD50E2F99___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet___9__35_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x466C0);
	}
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__55_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x466C8);
	}
	static ::System::Comparison_1<::Class_1_52DF42E136544C98*>** StaticGet___9__53_1()
	{
		return (::System::Comparison_1<::Class_1_52DF42E136544C98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x466D0);
	}
	static ::Class_2_7EB6B93CD50E2F99___c** StaticGet___9()
	{
		return (::Class_2_7EB6B93CD50E2F99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EB6B93CD50E2F99___c_TypeDefinitionIndex)->GetStaticField(0x466D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__35_0(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___ONBINDHANDLERS_B__35_0_OFFSET))(this, o);
	}

	::System::Int32 __SetupModifierHints_b__53_1(::Class_1_52DF42E136544C98* a, ::Class_1_52DF42E136544C98* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DF42E136544C98*, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SETUPMODIFIERHINTS_B__53_1_OFFSET))(this, a, b);
	}

	::System::Int32 __SortBuffs_b__55_0(::RPG::GameCore::TurnBasedModifierInstance* a, ::RPG::GameCore::TurnBasedModifierInstance* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C___SORTBUFFS_B__55_0_OFFSET))(this, a, b);
	}
};
