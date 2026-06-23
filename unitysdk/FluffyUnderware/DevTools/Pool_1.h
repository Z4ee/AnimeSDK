#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::DevTools { class PoolSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int Pool_1_TypeDefinitionIndex = 28349;

	template <typename T>
	class Pool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* mObjects; // 0x0
		::System::String* _Identifier_k__BackingField; // 0x0
		::FluffyUnderware::DevTools::PoolSettings* _Settings_k__BackingField; // 0x0
		::System::Double mLastTime; // 0x0
		::System::Double mDeltaTime; // 0x0
	};
}
