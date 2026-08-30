#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_BFEF14C428189256;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEWINDOWEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x197D9600)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int SimpleNoticeWindowExample_TypeDefinitionIndex = 50392;

	class SimpleNoticeWindowExample : public ::Sofa::BaseSofaWindow_1<::Class_1_BFEF14C428189256*>
	{
	public:
		::System::Void _ctor(::Class_1_BFEF14C428189256* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BFEF14C428189256*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_SIMPLENOTICEWINDOWEXAMPLE__CTOR_OFFSET))(this, a1);
		}
	};
}
