#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_123BCFE5A4B6F768_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF0B6690)
#define CLASS_2_123BCFE5A4B6F768_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B6610)

inline static constexpr unsigned int Class_2_123BCFE5A4B6F768_1_TypeDefinitionIndex = 70565;

class Class_2_123BCFE5A4B6F768_1 : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123BCFE5A4B6F768_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_123BCFE5A4B6F768_1__CTOR_1_OFFSET))(this, a1);
	}
};
