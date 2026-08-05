#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_396B9E205FC171A6_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x1347ABB0)
#define CLASS_2_396B9E205FC171A6_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x1347AAA0)
#define CLASS_2_396B9E205FC171A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1347AB40)

inline static constexpr unsigned int Class_2_396B9E205FC171A6_TypeDefinitionIndex = 41650;

class Class_2_396B9E205FC171A6 : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x80
	::UnityEngine::Vector3 Field_2_1; // 0x8C
	::UnityEngine::Vector3 Field_2_2; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_396B9E205FC171A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_396B9E205FC171A6_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_396B9E205FC171A6_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
