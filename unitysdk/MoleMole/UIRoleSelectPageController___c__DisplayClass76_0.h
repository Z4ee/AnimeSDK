#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass76_0_TypeDefinitionIndex = 39216;

	struct alignas(8) UIRoleSelectPageController___c__DisplayClass76_0
	{
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x18
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x20
		::System::Boolean allowSameName; // 0x28
	};
}
