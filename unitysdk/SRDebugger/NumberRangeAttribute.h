#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_NUMBERRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9DE40)

namespace SRDebugger
{
	inline static constexpr unsigned int NumberRangeAttribute_TypeDefinitionIndex = 37266;

	class NumberRangeAttribute : public ::System::Attribute
	{
	public:
		::System::Double Max; // 0x10
		::System::Double Min; // 0x18

		::System::Void _ctor(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SRDEBUGGER_NUMBERRANGEATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
