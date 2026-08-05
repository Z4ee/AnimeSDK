#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateExConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberStateExConfigRecruse_TypeDefinitionIndex = 50076;

	struct alignas(8) SMapGroupMemberStateExConfigRecruse
	{
		::System::Int32 GroupId; // 0x10
		::System::Int32 MemberId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 StateValue; // 0x20
		::System::Boolean Inverse; // 0x24
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberStateExConfig>* ExConfigs; // 0x28
	};
}
