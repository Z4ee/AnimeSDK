#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom
{
	inline static constexpr unsigned int MemberAttributes_TypeDefinitionIndex = 4057;

	enum class MemberAttributes : ::System::Int32
	{
		Abstract = 1,
		AccessMask = 61440,
		Assembly = 4096,
		Const = 5,
		Family = 12288,
		FamilyAndAssembly = 8192,
		FamilyOrAssembly = 16384,
		Final = 2,
		New = 16,
		Overloaded = 256,
		Override = 4,
		Private = 20480,
		Public = 24576,
		ScopeMask = 15,
		Static = 3,
		VTableMask = 240,
	};
}
