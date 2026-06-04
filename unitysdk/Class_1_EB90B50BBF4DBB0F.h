#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_EB90B50BBF4DBB0F_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13721C30)
#define CLASS_1_EB90B50BBF4DBB0F__CTOR_OFFSET UNITYSDK_OFFSET(0x13721C20)

inline static constexpr unsigned int Class_1_EB90B50BBF4DBB0F_TypeDefinitionIndex = 61925;

class Class_1_EB90B50BBF4DBB0F : public ::System::Object
{
public:
	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_EB90B50BBF4DBB0F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB90B50BBF4DBB0F_TRIGGER_OFFSET))(this);
	}
};
