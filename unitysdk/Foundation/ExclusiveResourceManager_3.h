#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/Foundation/ExclusiveResourceManager.h"
#include "unitysdk/Foundation/ExclusiveResourceManager_3_TickState.h"

namespace Foundation { template <typename T1, typename T2> class IDefaultResourceConstructor_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_3_TypeDefinitionIndex = 9019;

	template <typename TResource, typename TDefault, typename TRequest>
	class ExclusiveResourceManager_3 : public ::Foundation::ExclusiveResourceManager
	{
	public:
		TDefault _defaultResource; // 0x0
		TResource _activeResource; // 0x0
		TRequest _activeRequest; // 0x0
		TRequest _transientRequest; // 0x0
		::System::Boolean _isTicking; // 0x0
		::System::Collections::Generic::List_1<TRequest>* _requestsToRemoveInTicking; // 0x0
		::System::Collections::Generic::List_1<TRequest>* _requests; // 0x0
		::System::Collections::Generic::IComparer_1<TRequest>* _comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TRequest>* _equalityComparer; // 0x0
	};
}
