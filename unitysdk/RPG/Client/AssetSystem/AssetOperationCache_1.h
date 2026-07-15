#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetOperationCache_1_TypeDefinitionIndex = 39411;

	template <typename T>
	class AssetOperationCache_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Stack_1<T>*>* _Cache; // 0x0
		::System::Boolean _IsEnable; // 0x0
		::System::UInt32 _MaxCacheCount; // 0x0
		::System::UInt32 _CurCacheCount; // 0x0
	};
}
