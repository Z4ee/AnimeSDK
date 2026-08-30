#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_0_16E4307DCC419505_339;
namespace System { class IDisposable; }

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_1_TypeDefinitionIndex = 50112;

	template <typename TViewModel>
	class BaseSofaWindow_1 : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::IDisposable* _ReactiveBindingDisposable; // 0x0
		::Class_0_16E4307DCC419505_339* _DependencyResolver_k__BackingField; // 0x0
	};
}
