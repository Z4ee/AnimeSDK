#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_EB90B50BBF4DBB0F_3_TRIGGER_OFFSET UNITYSDK_OFFSET(0xE895E10)
#define CLASS_1_EB90B50BBF4DBB0F_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE895E00)

inline static constexpr unsigned int Class_1_EB90B50BBF4DBB0F_3_TypeDefinitionIndex = 66286;

class Class_1_EB90B50BBF4DBB0F_3 : public ::System::Object
{
public:
	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_EB90B50BBF4DBB0F_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB90B50BBF4DBB0F_3_TRIGGER_OFFSET))(this);
	}
};
