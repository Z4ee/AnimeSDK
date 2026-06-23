#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SMapGroupMemberAnimParam.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateExConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberStateConfigControl_TypeDefinitionIndex = 71406;

	struct alignas(8) SMapGroupMemberStateConfigControl
	{
		::System::String* StateName; // 0x10
		::System::Int32 StateValue; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberAnimParam>* Params; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberStateExConfig>* ExConfigs; // 0x28
	};
}
