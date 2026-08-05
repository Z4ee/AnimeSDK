#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9E1D7255BC19A59A.h"
#include "unitysdk/Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77.h"

class Class_1_7807B2B04302CD7B_3;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D74D6808E2680550_METHOD_3_6DB0CBC8B59AD1F4_OFFSET UNITYSDK_OFFSET(0xD86AB90)
#define CLASS_3_D74D6808E2680550_METHOD_3_707FBCDCB7E58989_1_OFFSET UNITYSDK_OFFSET(0xD86ABF0)
#define CLASS_3_D74D6808E2680550_METHOD_3_707FBCDCB7E58989_OFFSET UNITYSDK_OFFSET(0xD86AB30)
#define CLASS_3_D74D6808E2680550_METHOD_3_94936E05BA708C33_OFFSET UNITYSDK_OFFSET(0xD86B130)
#define CLASS_3_D74D6808E2680550_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xD86AE10)
#define CLASS_3_D74D6808E2680550_METHOD_3_EB7E47243627862C_OFFSET UNITYSDK_OFFSET(0xD86AC50)
#define CLASS_3_D74D6808E2680550__CTOR_OFFSET UNITYSDK_OFFSET(0xD86AA20)

inline static constexpr unsigned int Class_3_D74D6808E2680550_TypeDefinitionIndex = 54370;

class Class_3_D74D6808E2680550 : public ::Class_2_9E1D7255BC19A59A<::Class_3_D74D6808E2680550*>
{
public:
	::Class_1_7807B2B04302CD7B_3* Field_3_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_6; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_7; // 0x20
	::System::Collections::Generic::List_1<::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_707FBCDCB7E58989(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_707FBCDCB7E58989_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6DB0CBC8B59AD1F4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_6DB0CBC8B59AD1F4_OFFSET))(this, a1);
	}

	::System::Void Method_3_707FBCDCB7E58989_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_707FBCDCB7E58989_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_EB7E47243627862C(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_EB7E47243627862C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_3_94936E05BA708C33(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_METHOD_3_94936E05BA708C33_OFFSET))(this, a1);
	}
};
