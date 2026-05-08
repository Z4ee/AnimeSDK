#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C18F998324203B33_COMPARE_OFFSET UNITYSDK_OFFSET(0x117DDBF0)
#define CLASS_1_C18F998324203B33__CTOR_OFFSET UNITYSDK_OFFSET(0x117DDDA0)

inline static constexpr unsigned int Class_1_C18F998324203B33_TypeDefinitionIndex = 67383;

class Class_1_C18F998324203B33 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C18F998324203B33__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C18F998324203B33_COMPARE_OFFSET))(this, a1, a2);
	}
};
