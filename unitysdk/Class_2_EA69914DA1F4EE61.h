#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C0259C461ECB54D1.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

#define CLASS_2_EA69914DA1F4EE61_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x145233A0)
#define CLASS_2_EA69914DA1F4EE61_METHOD_2_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0x145232E0)
#define CLASS_2_EA69914DA1F4EE61__CTOR_OFFSET UNITYSDK_OFFSET(0x14523390)

inline static constexpr unsigned int Class_2_EA69914DA1F4EE61_TypeDefinitionIndex = 57113;

class Class_2_EA69914DA1F4EE61 : public ::Class_1_C0259C461ECB54D1
{
public:
	::UnityEngine::NetworkReachability Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA69914DA1F4EE61__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B56B56BFFE4CC00(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA69914DA1F4EE61_METHOD_2_5B56B56BFFE4CC00_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA69914DA1F4EE61_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
