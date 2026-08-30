#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C973A0AE523EBAC;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE920F80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE920FC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE920FD0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE920FF0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int AllBindingSemanticsChildControl___c_TypeDefinitionIndex = 50353;

	class AllBindingSemanticsChildControl___c : public ::System::Object
	{
	public:
		static ::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsChildControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsChildControl___c**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsChildControl___c_TypeDefinitionIndex)->GetStaticField(0x44B10);
		}
		static ::System::Func_2<::Class_1_7C973A0AE523EBAC*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_1_7C973A0AE523EBAC*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsChildControl___c_TypeDefinitionIndex)->GetStaticField(0x44B18);
		}
		static ::System::Func_2<::Class_1_7C973A0AE523EBAC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_1_7C973A0AE523EBAC*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsChildControl___c_TypeDefinitionIndex)->GetStaticField(0x44B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__2_0(::Class_1_7C973A0AE523EBAC* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_7C973A0AE523EBAC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_1(::Class_1_7C973A0AE523EBAC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_7C973A0AE523EBAC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}
	};
}
