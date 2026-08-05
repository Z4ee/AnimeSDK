#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EXPRESSIONTESTCASE_ABILITYEXPRESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int ExpressionTestCase_AbilityExpressionInfo_TypeDefinitionIndex = 58912;

struct alignas(8) ExpressionTestCase_AbilityExpressionInfo
{
	::System::String* abilityName; // 0x10
	::System::String* expression; // 0x18

	::System::Void _ctor(::System::String* name, ::System::String* expr)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EXPRESSIONTESTCASE_ABILITYEXPRESSIONINFO__CTOR_OFFSET))(this, name, expr);
	}
};
