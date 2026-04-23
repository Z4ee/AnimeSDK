#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_CE4B842B0E66C88F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x9611470)
#define CLASS_2_CE4B842B0E66C88F__CTOR_OFFSET UNITYSDK_OFFSET(0x9611410)

inline static constexpr unsigned int Class_2_CE4B842B0E66C88F_TypeDefinitionIndex = 63971;

class Class_2_CE4B842B0E66C88F : public ::System::Exception
{
public:
	::System::String* Field_2_0; // 0x88

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE4B842B0E66C88F__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B842B0E66C88F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
