#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBAFD36E19398E2B_Struct_2_E68D5EB5E5F27FC4.h"
#include "unitysdk/Class_1_EBAFD36E19398E2B_Struct_2_EBD8651C38B9BD70.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_79;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBAFD36E19398E2B_METHOD_1_019DB97BA807C37D_OFFSET UNITYSDK_OFFSET(0x10142AA0)
#define CLASS_1_EBAFD36E19398E2B_METHOD_1_0DCEA278D0AA95BB_OFFSET UNITYSDK_OFFSET(0x101428D0)
#define CLASS_1_EBAFD36E19398E2B_METHOD_1_638979F923BB7B47_OFFSET UNITYSDK_OFFSET(0x10142A00)
#define CLASS_1_EBAFD36E19398E2B_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x101429E0)
#define CLASS_1_EBAFD36E19398E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x10142820)

inline static constexpr unsigned int Class_1_EBAFD36E19398E2B_TypeDefinitionIndex = 52986;

class Class_1_EBAFD36E19398E2B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_79*>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBAFD36E19398E2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0DCEA278D0AA95BB(::System::Int32 a1, ::Class_1_43BD383C98B4C0C5_79* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_43BD383C98B4C0C5_79*))((::PBYTE)hIl2Cpp + CLASS_1_EBAFD36E19398E2B_METHOD_1_0DCEA278D0AA95BB_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBAFD36E19398E2B_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Class_1_EBAFD36E19398E2B_Struct_2_EBD8651C38B9BD70 Method_1_638979F923BB7B47()
	{
		return ((::Class_1_EBAFD36E19398E2B_Struct_2_EBD8651C38B9BD70(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBAFD36E19398E2B_METHOD_1_638979F923BB7B47_OFFSET))(this);
	}

	::Class_1_EBAFD36E19398E2B_Struct_2_E68D5EB5E5F27FC4 Method_1_019DB97BA807C37D(::System::Int32 a1)
	{
		return ((::Class_1_EBAFD36E19398E2B_Struct_2_E68D5EB5E5F27FC4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EBAFD36E19398E2B_METHOD_1_019DB97BA807C37D_OFFSET))(this, a1);
	}
};
