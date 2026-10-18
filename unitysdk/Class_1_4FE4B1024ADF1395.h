#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DF5F62C68EF718F;

#define CLASS_1_4FE4B1024ADF1395_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA52260)
#define CLASS_1_4FE4B1024ADF1395__CTOR_OFFSET UNITYSDK_OFFSET(0xDA52310)

inline static constexpr unsigned int Class_1_4FE4B1024ADF1395_TypeDefinitionIndex = 56906;

class Class_1_4FE4B1024ADF1395 : public ::System::Object
{
public:
	::Class_1_5DF5F62C68EF718F* MGGPIHGIGPB; // 0x10
	::System::Int32 DCGDPBFBCEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE4B1024ADF1395__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FE4B1024ADF1395_CLEAR_OFFSET))(this);
	}
};
