#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;

#define CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11ECC340)
#define CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1_METHOD_1_62D819C5C8DC8A25_OFFSET UNITYSDK_OFFSET(0x11ECBD70)
#define CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11ECBD60)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Class_1_0DFB2C0A6BD54BBA_1_TypeDefinitionIndex = 76701;

class Class_2_3CC769D284A54927_Class_1_0DFB2C0A6BD54BBA_1 : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_62D819C5C8DC8A25(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1_METHOD_1_62D819C5C8DC8A25_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_0DFB2C0A6BD54BBA_1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
