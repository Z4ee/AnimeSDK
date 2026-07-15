#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CLASS_3_0CBFD230D2D93420__CTOR_OFFSET UNITYSDK_OFFSET(0x181B4950)

inline static constexpr unsigned int Class_3_0CBFD230D2D93420_TypeDefinitionIndex = 45645;

class Class_3_0CBFD230D2D93420 : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Single Field_3_0; // 0x10
	::System::Single Field_3_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0CBFD230D2D93420__CTOR_OFFSET))(this, a1, a2);
	}
};
