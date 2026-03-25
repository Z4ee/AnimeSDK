#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_AEFE11C237891E0C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3E10)

inline static constexpr unsigned int Class_2_AEFE11C237891E0C_1_TypeDefinitionIndex = 51712;

class Class_2_AEFE11C237891E0C_1 : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AEFE11C237891E0C_1__CTOR_OFFSET))(this, a1);
	}
};
