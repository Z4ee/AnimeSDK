#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_75BDD231A764223E_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x160A7120)
#define CLASS_1_75BDD231A764223E__CTOR_OFFSET UNITYSDK_OFFSET(0x160A71A0)

inline static constexpr unsigned int Class_1_75BDD231A764223E_TypeDefinitionIndex = 70041;

class Class_1_75BDD231A764223E : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75BDD231A764223E__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_75BDD231A764223E_GETCONTEXT_OFFSET))(this, a1);
	}
};
