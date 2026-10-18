#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_AB297CA5B397D10B_METHOD_1_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x1EBEC1A0)
#define CLASS_1_AB297CA5B397D10B_METHOD_1_BF93C93F570E4D30_OFFSET UNITYSDK_OFFSET(0x1EBEBD30)
#define CLASS_1_AB297CA5B397D10B__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEC6D0)

inline static constexpr unsigned int Class_1_AB297CA5B397D10B_TypeDefinitionIndex = 35290;

class Class_1_AB297CA5B397D10B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB297CA5B397D10B__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_BF93C93F570E4D30(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AB297CA5B397D10B_METHOD_1_BF93C93F570E4D30_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_06618C2A694360FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB297CA5B397D10B_METHOD_1_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}
};
