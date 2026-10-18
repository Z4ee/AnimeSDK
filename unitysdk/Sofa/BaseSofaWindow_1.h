#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_0_16E4307DCC419505_425;
class Class_1_F41BA62BC88DE172;
namespace System { class IDisposable; }

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_1_TypeDefinitionIndex = 49688;

	template <typename TViewModel>
	class BaseSofaWindow_1 : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::IDisposable* _ReactiveBindingDisposable; // 0x0
		::Class_1_F41BA62BC88DE172* _StagecraftEnvironment; // 0x0
		::Class_0_16E4307DCC419505_425* _DependencyResolver_k__BackingField; // 0x0
	};
}
