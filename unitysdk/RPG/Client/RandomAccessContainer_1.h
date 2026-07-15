#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class IRandomAccessStrategy_1; }
namespace RPG::Client { template <typename T> class RandomAccessContainer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RandomAccessContainer_1_TypeDefinitionIndex = 57300;

	template <typename T>
	class RandomAccessContainer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Container; // 0x0
		::RPG::Client::IRandomAccessStrategy_1<T>* _Strategy; // 0x0
	};
}
