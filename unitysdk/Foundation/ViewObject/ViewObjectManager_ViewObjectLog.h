#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_VOLogID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ViewObjectLog_TypeDefinitionIndex = 66392;

	struct alignas(8) ViewObjectManager_ViewObjectLog
	{
		::System::Int32 time; // 0x10
		::System::String* Log; // 0x18
		::System::String* Category; // 0x20
		::System::Boolean compact; // 0x28
		::Foundation::ViewObject::ViewObjectManager_VOLogID LogID; // 0x2C
		::System::UInt32 gorupID; // 0x30
		::System::UInt32 configID; // 0x34
		::System::Int32 graphID; // 0x38
		::System::Int32 nodeID; // 0x3C
		::System::Int32 portID; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* paramIntList; // 0x48
	};
}
