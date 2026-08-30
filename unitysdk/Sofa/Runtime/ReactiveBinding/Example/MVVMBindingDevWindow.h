#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_577C41D199C6C68E;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x197D8A00)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int MVVMBindingDevWindow_TypeDefinitionIndex = 50381;

	class MVVMBindingDevWindow : public ::Sofa::BaseSofaWindow_1<::Class_1_577C41D199C6C68E*>
	{
	public:
		::System::Void _ctor(::Class_1_577C41D199C6C68E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_577C41D199C6C68E*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}
