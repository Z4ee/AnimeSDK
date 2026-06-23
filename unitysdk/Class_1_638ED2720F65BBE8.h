#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_638ED2720F65BBE8_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x11D2C860)
#define CLASS_1_638ED2720F65BBE8_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x11D2C870)
#define CLASS_1_638ED2720F65BBE8__CTOR_OFFSET UNITYSDK_OFFSET(0x11D2C850)

inline static constexpr unsigned int Class_1_638ED2720F65BBE8_TypeDefinitionIndex = 76301;

class Class_1_638ED2720F65BBE8 : public ::System::Object
{
public:
	::System::UInt64 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_638ED2720F65BBE8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_638ED2720F65BBE8_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_638ED2720F65BBE8_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}
};
