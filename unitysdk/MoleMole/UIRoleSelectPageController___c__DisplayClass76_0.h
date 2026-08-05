#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass76_0_TypeDefinitionIndex = 47748;

	struct alignas(8) UIRoleSelectPageController___c__DisplayClass76_0
	{
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x20
		::System::Boolean checkReleaseTime; // 0x28
		::System::Boolean allowSameName; // 0x29
	};
}
