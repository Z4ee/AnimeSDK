#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_55230CEF110DAF7B_1.h"
#include "unitysdk/Enum_3_4D319CC539272284.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_2;

#define CLASS_4_CAEAB400BA2051D7_METHOD_4_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x187780B0)
#define CLASS_4_CAEAB400BA2051D7_METHOD_4_E56A70C0013C7BF3_OFFSET UNITYSDK_OFFSET(0x18778100)
#define CLASS_4_CAEAB400BA2051D7__CTOR_OFFSET UNITYSDK_OFFSET(0x187780C0)

inline static constexpr unsigned int Class_4_CAEAB400BA2051D7_TypeDefinitionIndex = 49050;

class Class_4_CAEAB400BA2051D7 : public ::Class_3_55230CEF110DAF7B_1
{
public:
	::UnityEngine::Vector3 Field_4_1; // 0x10
	::UnityEngine::Vector3 Field_4_0; // 0x1C
	::UnityEngine::Vector3 Field_4_2; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_CAEAB400BA2051D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_4D319CC539272284 Method_4_A96DCA30C6927810()
	{
		return ((::Enum_3_4D319CC539272284(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CAEAB400BA2051D7_METHOD_4_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_4_E56A70C0013C7BF3(::Class_3_61A5922E5046F385_2* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_CAEAB400BA2051D7_METHOD_4_E56A70C0013C7BF3_OFFSET))(this, a1, a2);
	}
};
