#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_35AF32FA9765700C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF2B20)

inline static constexpr unsigned int Class_1_35AF32FA9765700C_TypeDefinitionIndex = 38850;

class Class_1_35AF32FA9765700C : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_1; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35AF32FA9765700C__CTOR_OFFSET))(this);
	}
};
