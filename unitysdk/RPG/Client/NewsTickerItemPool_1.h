#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class INewsTickerPoolableItemCreator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTickerItemPool_1_TypeDefinitionIndex = 65929;

	template <typename T>
	class NewsTickerItemPool_1 : public ::System::Object
	{
	public:
		::RPG::Client::INewsTickerPoolableItemCreator_1<T>* _Creator; // 0x0
		::System::Collections::Generic::List_1<T>* _Pool; // 0x0
	};
}
