#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E4E5AFB9A71CC38.h"
#include "unitysdk/Enum_3_22DDD7B50F316EE2.h"

namespace System { class String; }

#define CLASS_2_B2BFFA39FF19B1C3_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1584D0F0)
#define CLASS_2_B2BFFA39FF19B1C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1584D100)
#define CLASS_2_B2BFFA39FF19B1C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1584D140)

inline static constexpr unsigned int Class_2_B2BFFA39FF19B1C3_TypeDefinitionIndex = 57212;

class Class_2_B2BFFA39FF19B1C3 : public ::Class_1_2E4E5AFB9A71CC38
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2BFFA39FF19B1C3__CTOR_OFFSET))(this);
	}

	::Enum_3_22DDD7B50F316EE2 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_22DDD7B50F316EE2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2BFFA39FF19B1C3_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2BFFA39FF19B1C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
