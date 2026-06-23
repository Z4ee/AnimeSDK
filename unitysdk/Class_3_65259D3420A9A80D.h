#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F5EA751E57657302.h"
#include "unitysdk/Class_3_65259D3420A9A80D_Struct_2_1E898A3A854F2C77.h"

class Class_1_7807B2B04302CD7B_11;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_65259D3420A9A80D_METHOD_3_707FBCDCB7E58989_1_OFFSET UNITYSDK_OFFSET(0xF7DD5E0)
#define CLASS_3_65259D3420A9A80D_METHOD_3_707FBCDCB7E58989_OFFSET UNITYSDK_OFFSET(0xF7DD030)
#define CLASS_3_65259D3420A9A80D_METHOD_3_C9D0123A0E55D14F_OFFSET UNITYSDK_OFFSET(0xF7DD640)
#define CLASS_3_65259D3420A9A80D_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xF7DD2B0)
#define CLASS_3_65259D3420A9A80D_METHOD_3_EB7E47243627862C_OFFSET UNITYSDK_OFFSET(0xF7DD090)
#define CLASS_3_65259D3420A9A80D_METHOD_3_F67E13B59A5D6477_OFFSET UNITYSDK_OFFSET(0xF7DD250)
#define CLASS_3_65259D3420A9A80D__CTOR_OFFSET UNITYSDK_OFFSET(0xF7DCF20)

inline static constexpr unsigned int Class_3_65259D3420A9A80D_TypeDefinitionIndex = 83201;

class Class_3_65259D3420A9A80D : public ::Class_2_F5EA751E57657302<::Class_3_65259D3420A9A80D*>
{
public:
	::Class_1_7807B2B04302CD7B_11* Field_3_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_3; // 0x18
	::System::Collections::Generic::List_1<::Class_3_65259D3420A9A80D_Struct_2_1E898A3A854F2C77>* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_707FBCDCB7E58989(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_707FBCDCB7E58989_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_EB7E47243627862C(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_EB7E47243627862C_OFFSET))(this, a1);
	}

	::System::Void Method_3_F67E13B59A5D6477(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_F67E13B59A5D6477_OFFSET))(this, a1);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_3_707FBCDCB7E58989_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_707FBCDCB7E58989_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C9D0123A0E55D14F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_65259D3420A9A80D_METHOD_3_C9D0123A0E55D14F_OFFSET))(this, a1);
	}
};
