#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Object.h"

class Class_1_65B24FDD1B4196C2;
namespace Sofa::Runtime::ReactiveBinding::Example { class ConfirmDialogReactiveExampleWindow; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__WINDOWLIFECYCLEBINDINGOPERATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE9272D0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__WINDOWLIFECYCLEBINDINGOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xE9272C0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ConfirmDialogReactiveExampleWindow__WindowLifecycleBindingOperation_TypeDefinitionIndex = 50369;

	class ConfirmDialogReactiveExampleWindow__WindowLifecycleBindingOperation : public ::System::Object
	{
	public:
		::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveExampleWindow* _Window; // 0x10

		::System::Void _ctor(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveExampleWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveExampleWindow*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__WINDOWLIFECYCLEBINDINGOPERATION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::Struct_2_85C948A9FFE82053<::Class_1_65B24FDD1B4196C2*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_85C948A9FFE82053<::Class_1_65B24FDD1B4196C2*>))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CONFIRMDIALOGREACTIVEEXAMPLEWINDOW__WINDOWLIFECYCLEBINDINGOPERATION_EXECUTE_OFFSET))(this, a1);
		}
	};
}
