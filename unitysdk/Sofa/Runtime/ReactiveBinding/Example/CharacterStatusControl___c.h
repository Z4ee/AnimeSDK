#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B958B3729F96B19C;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D6EC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197D6F00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_0_OFFSET UNITYSDK_OFFSET(0x197D6F10)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_1_OFFSET UNITYSDK_OFFSET(0x197D6F30)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_2_OFFSET UNITYSDK_OFFSET(0x197D6F50)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_3_OFFSET UNITYSDK_OFFSET(0x197D6F70)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int CharacterStatusControl___c_TypeDefinitionIndex = 50360;

	class CharacterStatusControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x54C00);
		}
		static ::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x54C08);
		}
		static ::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x54C10);
		}
		static ::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::Class_1_B958B3729F96B19C*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x54C18);
		}
		static ::Sofa::Runtime::ReactiveBinding::Example::CharacterStatusControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::CharacterStatusControl___c**)Il2CppClass::FromTypeDefinitionIndex(CharacterStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x54C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__1_0(::Class_1_B958B3729F96B19C* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_B958B3729F96B19C*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__1_1(::Class_1_B958B3729F96B19C* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_1_B958B3729F96B19C*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__1_2(::Class_1_B958B3729F96B19C* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_B958B3729F96B19C*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__1_3(::Class_1_B958B3729F96B19C* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_B958B3729F96B19C*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL___C___BINDING_B__1_3_OFFSET))(this, a1);
		}
	};
}
