#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_5F7A0A9ADC0C1B7A_TRIGGER_OFFSET UNITYSDK_OFFSET(0x172AA070)
#define CLASS_1_5F7A0A9ADC0C1B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x172A9FF0)

inline static constexpr unsigned int Class_1_5F7A0A9ADC0C1B7A_TypeDefinitionIndex = 66278;

class Class_1_5F7A0A9ADC0C1B7A : public ::System::Object
{
public:
	::System::UInt32 GKDLFAEOGIN; // 0x10

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5F7A0A9ADC0C1B7A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7A0A9ADC0C1B7A_TRIGGER_OFFSET))(this);
	}
};
