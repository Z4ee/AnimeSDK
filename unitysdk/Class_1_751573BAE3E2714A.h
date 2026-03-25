#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_751573BAE3E2714A_GET_SLICENB_OFFSET UNITYSDK_OFFSET(0x105C0F20)
#define CLASS_1_751573BAE3E2714A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x105C0F40)
#define CLASS_1_751573BAE3E2714A_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x105C1060)
#define CLASS_1_751573BAE3E2714A_METHOD_1_A0FB610937DDCECC_OFFSET UNITYSDK_OFFSET(0x105C0F90)
#define CLASS_1_751573BAE3E2714A_SET_SLICENB_OFFSET UNITYSDK_OFFSET(0x105C0F30)
#define CLASS_1_751573BAE3E2714A__CTOR_OFFSET UNITYSDK_OFFSET(0x105C10E0)

inline static constexpr unsigned int Class_1_751573BAE3E2714A_TypeDefinitionIndex = 46031;

class Class_1_751573BAE3E2714A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::System::Int32 _SliceNb_k__BackingField; // 0x18
	::System::Boolean Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SliceNb()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A_GET_SLICENB_OFFSET))(this);
	}

	::System::Void set_SliceNb(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A_SET_SLICENB_OFFSET))(this, value);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A0FB610937DDCECC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A_METHOD_1_A0FB610937DDCECC_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_751573BAE3E2714A_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
