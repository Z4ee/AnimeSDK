#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_123BCFE5A4B6F768__CTOR_OFFSET UNITYSDK_OFFSET(0x1398E000)

inline static constexpr unsigned int Class_2_123BCFE5A4B6F768_TypeDefinitionIndex = 56515;

class Class_2_123BCFE5A4B6F768 : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_123BCFE5A4B6F768__CTOR_OFFSET))(this, a1);
	}
};
