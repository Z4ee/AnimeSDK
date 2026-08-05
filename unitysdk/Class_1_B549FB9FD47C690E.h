#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1005B9479049BC5A;
class Class_2_6DE5FBED45BCAC88;

#define CLASS_1_B549FB9FD47C690E_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x14A4CAF0)
#define CLASS_1_B549FB9FD47C690E__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4CAE0)

inline static constexpr unsigned int Class_1_B549FB9FD47C690E_TypeDefinitionIndex = 70520;

class Class_1_B549FB9FD47C690E : public ::System::Object
{
public:
	::Class_2_6DE5FBED45BCAC88* Field_1_0; // 0x10
	::Class_1_1005B9479049BC5A* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B549FB9FD47C690E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B549FB9FD47C690E_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}
};
