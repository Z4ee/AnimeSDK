#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LoginType.h"
#include "unitysdk/Foundation/ResourceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int LoginSetting_TypeDefinitionIndex = 8052;

	struct alignas(8) LoginSetting
	{
		::Foundation::LoginType login_type; // 0x10
		::Foundation::ResourceType resource_type; // 0x14
		::System::Collections::Generic::List_1<::System::String*>* dispatch_urls; // 0x18
	};
}
