#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpInfoChildWindowController_UIViewInfo_TypeDefinitionIndex = 90870;

	struct alignas(8) UICpInfoChildWindowController_UIViewInfo
	{
		::System::String* name; // 0x10
		::System::Single num; // 0x18
		::System::String* desc; // 0x20
		::System::String* icon; // 0x28
		::System::Int32 rare; // 0x30
		::System::String* goodTipsIcon; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* Tagss; // 0x40
	};
}
