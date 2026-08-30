#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC5D8EEC9856D94;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE927180)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9271C0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE9271D0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ChildDetailControl___c_TypeDefinitionIndex = 50385;

	class ChildDetailControl___c : public ::System::Object
	{
	public:
		static ::Sofa::Runtime::ReactiveBinding::Example::ChildDetailControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::ChildDetailControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChildDetailControl___c_TypeDefinitionIndex)->GetStaticField(0x45780);
		}
		static ::System::Func_2<::Class_1_BEC5D8EEC9856D94*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_1_BEC5D8EEC9856D94*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChildDetailControl___c_TypeDefinitionIndex)->GetStaticField(0x45788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_0(::Class_1_BEC5D8EEC9856D94* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_BEC5D8EEC9856D94*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}
	};
}
