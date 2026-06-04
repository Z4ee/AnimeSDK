#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A70BCA158503830_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D026E0)

inline static constexpr unsigned int Class_1_0A70BCA158503830_1_TypeDefinitionIndex = 39626;

class Class_1_0A70BCA158503830_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A70BCA158503830_1__CTOR_OFFSET))(this);
	}
};
