#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_65B24FDD1B4196C2;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x197D7330)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ConfirmDialogReactiveExampleWindow_TypeDefinitionIndex = 50367;

	class ConfirmDialogReactiveExampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_1_65B24FDD1B4196C2*>
	{
	public:
		::System::Void _ctor(::Class_1_65B24FDD1B4196C2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_65B24FDD1B4196C2*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}
