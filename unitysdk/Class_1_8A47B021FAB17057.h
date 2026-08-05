#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_8A47B021FAB17057_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x1273BEC0)
#define CLASS_1_8A47B021FAB17057__CTOR_OFFSET UNITYSDK_OFFSET(0x1273BEB0)

inline static constexpr unsigned int Class_1_8A47B021FAB17057_TypeDefinitionIndex = 85754;

class Class_1_8A47B021FAB17057 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::Int32 Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x14
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A47B021FAB17057__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A47B021FAB17057_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}
};
