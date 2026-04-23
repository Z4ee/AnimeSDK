#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_5AB257DAD7885229_TRIGGER_OFFSET UNITYSDK_OFFSET(0x12886930)
#define CLASS_1_5AB257DAD7885229__CTOR_OFFSET UNITYSDK_OFFSET(0x128869D0)

inline static constexpr unsigned int Class_1_5AB257DAD7885229_TypeDefinitionIndex = 61003;

class Class_1_5AB257DAD7885229 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5AB257DAD7885229__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AB257DAD7885229_TRIGGER_OFFSET))(this);
	}
};
