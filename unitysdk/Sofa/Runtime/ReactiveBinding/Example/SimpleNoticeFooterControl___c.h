#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC5D8EEC9856D94_1;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9294E0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE929520)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C___BINDING_B__0_0_OFFSET UNITYSDK_OFFSET(0xE929530)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int SimpleNoticeFooterControl___c_TypeDefinitionIndex = 50391;

	class SimpleNoticeFooterControl___c : public ::System::Object
	{
	public:
		static ::Sofa::Runtime::ReactiveBinding::Example::SimpleNoticeFooterControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::SimpleNoticeFooterControl___c**)Il2CppClass::FromTypeDefinitionIndex(SimpleNoticeFooterControl___c_TypeDefinitionIndex)->GetStaticField(0x459A0);
		}
		static ::System::Func_2<::Class_1_BEC5D8EEC9856D94_1*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_BEC5D8EEC9856D94_1*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleNoticeFooterControl___c_TypeDefinitionIndex)->GetStaticField(0x459A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__0_0(::Class_1_BEC5D8EEC9856D94_1* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_BEC5D8EEC9856D94_1*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL___C___BINDING_B__0_0_OFFSET))(this, a1);
		}
	};
}
