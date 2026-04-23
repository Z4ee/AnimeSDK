#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }

#define CLASS_2_D9C7126D649DD75F_METHOD_2_5C1CF9D00411B85D_OFFSET UNITYSDK_OFFSET(0x90D4700)
#define CLASS_2_D9C7126D649DD75F__CTOR_OFFSET UNITYSDK_OFFSET(0x90D48E0)

inline static constexpr unsigned int Class_2_D9C7126D649DD75F_TypeDefinitionIndex = 70112;

class Class_2_D9C7126D649DD75F : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9C7126D649DD75F__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_5C1CF9D00411B85D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D9C7126D649DD75F_METHOD_2_5C1CF9D00411B85D_OFFSET))(this, a1, a2);
	}
};
