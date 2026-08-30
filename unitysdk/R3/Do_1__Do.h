#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int Do_1__Do_TypeDefinitionIndex = 35262;

	template <typename T>
	class Do_1__Do : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		::System::Action_1<T>* _onNext_P; // 0x0
		::System::Action_1<::System::Exception*>* _onErrorResume_P; // 0x0
		::System::Action_1<::R3::Result>* _onCompleted_P; // 0x0
		::System::Action* _onDispose_P; // 0x0
	};
}
