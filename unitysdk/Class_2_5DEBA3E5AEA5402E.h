#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F77E1501D42BF4A.h"

namespace System { class String; }

#define CLASS_2_5DEBA3E5AEA5402E_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11961150)
#define CLASS_2_5DEBA3E5AEA5402E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11961970)
#define CLASS_2_5DEBA3E5AEA5402E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x119619D0)
#define CLASS_2_5DEBA3E5AEA5402E_METHOD_2_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x119611E0)
#define CLASS_2_5DEBA3E5AEA5402E__CTOR_OFFSET UNITYSDK_OFFSET(0x11961950)

inline static constexpr unsigned int Class_2_5DEBA3E5AEA5402E_TypeDefinitionIndex = 56350;

class Class_2_5DEBA3E5AEA5402E : public ::Class_1_6F77E1501D42BF4A
{
public:
	::System::String* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DEBA3E5AEA5402E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DEBA3E5AEA5402E_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_D643BAC787BFCBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DEBA3E5AEA5402E_METHOD_2_D643BAC787BFCBDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DEBA3E5AEA5402E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DEBA3E5AEA5402E_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
