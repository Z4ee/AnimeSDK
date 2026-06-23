#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_12_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16598D10)
#define CLASS_1_7807B2B04302CD7B_12_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16598D60)
#define CLASS_1_7807B2B04302CD7B_12__CTOR_OFFSET UNITYSDK_OFFSET(0x16598DD0)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_12_TypeDefinitionIndex = 44609;

class Class_1_7807B2B04302CD7B_12 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_12__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_12_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_12_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
