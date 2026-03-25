#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A70BCA158503830_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40F70)

inline static constexpr unsigned int Class_1_0A70BCA158503830_1_TypeDefinitionIndex = 33068;

class Class_1_0A70BCA158503830_1 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x14
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A70BCA158503830_1__CTOR_OFFSET))(this);
	}
};
