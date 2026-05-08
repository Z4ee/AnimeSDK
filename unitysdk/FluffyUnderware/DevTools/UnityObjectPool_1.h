#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::DevTools { class PoolManager; }
namespace FluffyUnderware::DevTools { class PoolSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int UnityObjectPool_1_TypeDefinitionIndex = 25900;

	template <typename T>
	class UnityObjectPool_1 : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<T>* pooledObjects; // 0x0
		::FluffyUnderware::DevTools::PoolSettings* m_Settings; // 0x0
		::System::Double lastProcessingTime; // 0x0
		::System::Double unprocessedDuration; // 0x0
	};
}
