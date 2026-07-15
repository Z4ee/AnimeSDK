#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKListModel_1_TypeDefinitionIndex = 44623;

	template <typename T>
	class MiHoYoSDKListModel_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* data; // 0x0
	};
}
