#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_BEC5D8EEC9856D94_1;
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE929220)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE9294A0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int SimpleNoticeFooterControl_TypeDefinitionIndex = 50390;

	class SimpleNoticeFooterControl : public ::Sofa::BaseSofaControl_1<::Class_1_BEC5D8EEC9856D94_1*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_BEC5D8EEC9856D94_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_BEC5D8EEC9856D94_1*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEFOOTERCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
