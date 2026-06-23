#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D1FACC9D75D67F38.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7F8FDA1FE3BBD71A_METHOD_1_7E66F6FC862DCAC4_OFFSET UNITYSDK_OFFSET(0x151F11D0)

inline static constexpr unsigned int Class_1_7F8FDA1FE3BBD71A_TypeDefinitionIndex = 56969;

class Class_1_7F8FDA1FE3BBD71A : public ::System::Object
{
public:
	static ::RootMotion::Axis Method_1_7E66F6FC862DCAC4(::Enum_3_D1FACC9D75D67F38 a1)
	{
		return ((::RootMotion::Axis(*)(::Enum_3_D1FACC9D75D67F38))((::PBYTE)hIl2Cpp + CLASS_1_7F8FDA1FE3BBD71A_METHOD_1_7E66F6FC862DCAC4_OFFSET))(a1);
	}
};
