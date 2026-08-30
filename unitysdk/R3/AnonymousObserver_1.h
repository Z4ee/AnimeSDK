#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int AnonymousObserver_1_TypeDefinitionIndex = 35243;

	template <typename T>
	class AnonymousObserver_1 : public ::R3::Observer_1<T>
	{
	public:
		::System::Action_1<T>* _onNext_P; // 0x0
		::System::Action_1<::System::Exception*>* _onErrorResume_P; // 0x0
		::System::Action_1<::R3::Result>* _onCompleted_P; // 0x0
	};
}
