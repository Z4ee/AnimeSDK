#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_53B7DA6B50203A3E.h"

#define CLASS_3_D228CF1E7224FDC2_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x14577AB0)
#define CLASS_3_D228CF1E7224FDC2__CTOR_OFFSET UNITYSDK_OFFSET(0x14577AA0)

inline static constexpr unsigned int Class_3_D228CF1E7224FDC2_TypeDefinitionIndex = 69840;

class Class_3_D228CF1E7224FDC2 : public ::Class_2_53B7DA6B50203A3E
{
public:
	::System::UInt32 Field_3_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2_METHOD_3_66193B8782064F5D_OFFSET))(this);
	}
};
