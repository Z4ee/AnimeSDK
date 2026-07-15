#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D172BCC3F0CDFD0_GET_SLICENB_OFFSET UNITYSDK_OFFSET(0x16880DA0)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16880DC0)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16880EE0)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_A0FB610937DDCECC_OFFSET UNITYSDK_OFFSET(0x16880E10)
#define CLASS_1_0D172BCC3F0CDFD0_SET_SLICENB_OFFSET UNITYSDK_OFFSET(0x16880DB0)
#define CLASS_1_0D172BCC3F0CDFD0__CTOR_OFFSET UNITYSDK_OFFSET(0x16880F60)

inline static constexpr unsigned int Class_1_0D172BCC3F0CDFD0_TypeDefinitionIndex = 54608;

class Class_1_0D172BCC3F0CDFD0 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0
	::Il2CppArray<::System::Single>* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 _SliceNb_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SliceNb()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0_GET_SLICENB_OFFSET))(this);
	}

	::System::Void set_SliceNb(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0_SET_SLICENB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A0FB610937DDCECC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0_METHOD_1_A0FB610937DDCECC_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0D172BCC3F0CDFD0_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
