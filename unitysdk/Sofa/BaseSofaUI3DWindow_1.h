#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaUI3DWindow.h"

class Class_0_16E4307DCC419505_338;
namespace System { class IDisposable; }
namespace System { class Object; }

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaUI3DWindow_1_TypeDefinitionIndex = 50117;

	template <typename TViewModel>
	class BaseSofaUI3DWindow_1 : public ::Sofa::BaseSofaUI3DWindow
	{
	public:
		TViewModel _ViewModel; // 0x0
		::Class_0_16E4307DCC419505_338* _Messenger; // 0x0
		::System::IDisposable* _ReactiveBindingDisposable; // 0x0
	};
}
