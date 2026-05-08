#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_34.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C789C481D6AE87FA_METHOD_2_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0xFEF5D80)
#define CLASS_2_C789C481D6AE87FA_METHOD_2_D5D89BA20043C0A8_OFFSET UNITYSDK_OFFSET(0xFEF5C10)
#define CLASS_2_C789C481D6AE87FA_METHOD_2_ED0F9522B40DA43F_OFFSET UNITYSDK_OFFSET(0xFEF5CC0)
#define CLASS_2_C789C481D6AE87FA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFEF5B50)
#define CLASS_2_C789C481D6AE87FA__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF5AE0)

inline static constexpr unsigned int Class_2_C789C481D6AE87FA_TypeDefinitionIndex = 39796;

class Class_2_C789C481D6AE87FA : public ::Class_1_43BD383C98B4C0C5_34
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C789C481D6AE87FA__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C789C481D6AE87FA__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D5D89BA20043C0A8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C789C481D6AE87FA_METHOD_2_D5D89BA20043C0A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ED0F9522B40DA43F(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C789C481D6AE87FA_METHOD_2_ED0F9522B40DA43F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C789C481D6AE87FA_METHOD_2_28141171CE1C76E0_OFFSET))(this, a1);
	}
};
