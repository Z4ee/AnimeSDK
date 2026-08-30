#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07_EQUALS_OFFSET UNITYSDK_OFFSET(0x16361710)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16361820)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07__CTOR_OFFSET UNITYSDK_OFFSET(0x16361700)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07_TypeDefinitionIndex = 70647;

class Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07 : public ::System::Object
{
public:
	::UnityEngine::Vector3 LPHFNPNCLMC; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_99864A5AECFC1D07_GETHASHCODE_OFFSET))(this);
	}
};
