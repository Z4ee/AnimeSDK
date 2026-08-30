#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int Do_1_TypeDefinitionIndex = 35261;

	template <typename T>
	class Do_1 : public ::R3::Observable_1<T>
	{
	public:
		::R3::Observable_1<T>* _source_P; // 0x0
		::System::Action_1<T>* _onNext_P; // 0x0
		::System::Action_1<::System::Exception*>* _onErrorResume_P; // 0x0
		::System::Action_1<::R3::Result>* _onCompleted_P; // 0x0
		::System::Action* _onDispose_P; // 0x0
		::System::Action* _onSubscribe_P; // 0x0
	};
}
