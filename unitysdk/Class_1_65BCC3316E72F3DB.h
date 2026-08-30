#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define CLASS_1_65BCC3316E72F3DB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C116DD0)
#define CLASS_1_65BCC3316E72F3DB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C116FD0)
#define CLASS_1_65BCC3316E72F3DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C117190)

inline static constexpr unsigned int Class_1_65BCC3316E72F3DB_TypeDefinitionIndex = 36182;

class Class_1_65BCC3316E72F3DB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65BCC3316E72F3DB__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_65BCC3316E72F3DB_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_65BCC3316E72F3DB_GETHASHCODE_OFFSET))(this, a1);
	}
};
