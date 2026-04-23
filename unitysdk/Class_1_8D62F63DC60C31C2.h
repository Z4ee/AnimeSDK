#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8D62F63DC60C31C2_METHOD_1_C6671CC5462266FB_OFFSET UNITYSDK_OFFSET(0x1A4F4A30)
#define CLASS_1_8D62F63DC60C31C2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A4F4A50)
#define CLASS_1_8D62F63DC60C31C2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A4F4A40)

inline static constexpr unsigned int Class_1_8D62F63DC60C31C2_TypeDefinitionIndex = 5534;

class Class_1_8D62F63DC60C31C2 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C6671CC5462266FB(::System::Int32 timeoutMillisecond)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D62F63DC60C31C2_METHOD_1_C6671CC5462266FB_OFFSET))(timeoutMillisecond);
	}

	static ::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D62F63DC60C31C2_METHOD_1_CE81D059476B1F49_OFFSET))();
	}

	static ::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D62F63DC60C31C2_METHOD_1_C74CF020AA42ED85_OFFSET))();
	}
};
