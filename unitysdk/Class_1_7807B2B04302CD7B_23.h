#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_23_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x13406C50)
#define CLASS_1_7807B2B04302CD7B_23_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x13406CA0)
#define CLASS_1_7807B2B04302CD7B_23__CTOR_OFFSET UNITYSDK_OFFSET(0x13406D10)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_23_TypeDefinitionIndex = 67149;

class Class_1_7807B2B04302CD7B_23 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_23__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_23_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_23_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
