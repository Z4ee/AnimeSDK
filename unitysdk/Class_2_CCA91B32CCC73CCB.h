#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_20A193958CD38A4D_OFFSET UNITYSDK_OFFSET(0x13A4DAD0)
#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13A4DA40)
#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A4DB60)
#define CLASS_2_CCA91B32CCC73CCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4D9C0)
#define CLASS_2_CCA91B32CCC73CCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4DA30)

inline static constexpr unsigned int Class_2_CCA91B32CCC73CCB_TypeDefinitionIndex = 62728;

class Class_2_CCA91B32CCC73CCB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x52; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_20A193958CD38A4D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_20A193958CD38A4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
