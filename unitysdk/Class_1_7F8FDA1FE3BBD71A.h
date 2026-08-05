#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10B364F53107673D.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7F8FDA1FE3BBD71A_METHOD_1_7E66F6FC862DCAC4_OFFSET UNITYSDK_OFFSET(0x1559AA70)

inline static constexpr unsigned int Class_1_7F8FDA1FE3BBD71A_TypeDefinitionIndex = 82540;

class Class_1_7F8FDA1FE3BBD71A : public ::System::Object
{
public:
	static ::RootMotion::Axis Method_1_7E66F6FC862DCAC4(::Enum_3_10B364F53107673D a1)
	{
		return ((::RootMotion::Axis(*)(::Enum_3_10B364F53107673D))((::PBYTE)hIl2Cpp + CLASS_1_7F8FDA1FE3BBD71A_METHOD_1_7E66F6FC862DCAC4_OFFSET))(a1);
	}
};
