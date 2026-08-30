#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C0259C461ECB54D1.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

#define CLASS_2_005D093BBE616C11_METHOD_2_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0x16DA8BF0)
#define CLASS_2_005D093BBE616C11__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA8CA0)

inline static constexpr unsigned int Class_2_005D093BBE616C11_TypeDefinitionIndex = 61198;

class Class_2_005D093BBE616C11 : public ::Class_1_C0259C461ECB54D1
{
public:
	::UnityEngine::NetworkReachability MEPFOEEGBEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005D093BBE616C11__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B56B56BFFE4CC00(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_005D093BBE616C11_METHOD_2_5B56B56BFFE4CC00_OFFSET))(this, a1);
	}
};
