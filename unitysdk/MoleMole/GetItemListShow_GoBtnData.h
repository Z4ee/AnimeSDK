#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListShow_GoBtnData_TypeDefinitionIndex = 84353;

	struct alignas(8) GetItemListShow_GoBtnData
	{
		::System::String* goText; // 0x10
		::System::Action* goCallback; // 0x18
		::System::Boolean showGoBtn; // 0x20
		::System::Func_1<::System::Boolean>* showGoPredicate; // 0x28
	};
}
