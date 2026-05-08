#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_98338EBAB58D3D5B_METHOD_1_C1AC1804358FDDE3_OFFSET UNITYSDK_OFFSET(0xFB7E160)
#define CLASS_1_98338EBAB58D3D5B__CTOR_OFFSET UNITYSDK_OFFSET(0xFB7E150)

inline static constexpr unsigned int Class_1_98338EBAB58D3D5B_TypeDefinitionIndex = 39308;

class Class_1_98338EBAB58D3D5B : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Enum_3_0FC69F51F876980B Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98338EBAB58D3D5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C1AC1804358FDDE3(::Enum_3_0FC69F51F876980B a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0FC69F51F876980B, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_98338EBAB58D3D5B_METHOD_1_C1AC1804358FDDE3_OFFSET))(this, a1, a2, a3);
	}
};
