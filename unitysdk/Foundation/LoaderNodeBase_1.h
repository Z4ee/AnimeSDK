#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LoaderNodeStatus.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class LoaderNodeBase_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace Foundation
{
	inline static constexpr unsigned int LoaderNodeBase_1_TypeDefinitionIndex = 7836;

	template <typename T>
	class LoaderNodeBase_1 : public ::System::Object
	{
	public:
		::Foundation::LoaderNodeStatus _Status_k__BackingField; // 0x0
		T value; // 0x0
		::System::Action* callback; // 0x0
		::System::Exception* ex; // 0x0
		::System::Action_1<::Foundation::LoaderNodeBase_1<T>*>* loadedCallBack; // 0x0
		::System::Action_2<::Foundation::LoaderNodeBase_1<T>*, ::System::Exception*>* completeCallBack; // 0x0
	};
}
