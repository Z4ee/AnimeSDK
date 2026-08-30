#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D172BCC3F0CDFD0_GET_SLICENB_OFFSET UNITYSDK_OFFSET(0x15287850)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15287870)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15287990)
#define CLASS_1_0D172BCC3F0CDFD0_METHOD_1_A0FB610937DDCECC_OFFSET UNITYSDK_OFFSET(0x152878C0)
#define CLASS_1_0D172BCC3F0CDFD0_SET_SLICENB_OFFSET UNITYSDK_OFFSET(0x15287860)
#define CLASS_1_0D172BCC3F0CDFD0__CTOR_OFFSET UNITYSDK_OFFSET(0x15287A10)

inline static constexpr unsigned int Class_1_0D172BCC3F0CDFD0_TypeDefinitionIndex = 57329;

class Class_1_0D172BCC3F0CDFD0 : public ::System::Object
{
public:
	// static const ::System::Int32 PHJNBDMOOEI = 0x5; // 0x0
	::Il2CppArray<::System::Single>* EFMDDNNMAAB; // 0x10
	::System::Int32 _SliceNb_k__BackingField; // 0x18
	::System::Boolean IHFIFLGIHIM; // 0x1C

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
