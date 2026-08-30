#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_BFFAD1993DCC0C23_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15280370)
#define CLASS_1_BFFAD1993DCC0C23_METHOD_1_B10263E1D29F744E_OFFSET UNITYSDK_OFFSET(0x1526EB20)
#define CLASS_1_BFFAD1993DCC0C23__CTOR_OFFSET UNITYSDK_OFFSET(0x15280360)

inline static constexpr unsigned int Class_1_BFFAD1993DCC0C23_TypeDefinitionIndex = 68226;

class Class_1_BFFAD1993DCC0C23 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFFAD1993DCC0C23__CTOR_OFFSET))(this);
	}

	static ::Class_1_BFFAD1993DCC0C23* Method_1_B10263E1D29F744E(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_BFFAD1993DCC0C23*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BFFAD1993DCC0C23_METHOD_1_B10263E1D29F744E_OFFSET))(a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFFAD1993DCC0C23_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
