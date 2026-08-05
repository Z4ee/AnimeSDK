#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6B3FEF18753DFC51.h"
#include "unitysdk/System/ValueType.h"

class Class_2_7F95F273DDBFD8DA;

#define STRUCT_2_E521CB413C09680F_METHOD_2_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x7B38A0)
#define STRUCT_2_E521CB413C09680F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define STRUCT_2_E521CB413C09680F__CTOR_OFFSET UNITYSDK_OFFSET(0x31EB80)

inline static constexpr unsigned int Struct_2_E521CB413C09680F_TypeDefinitionIndex = 83424;

struct alignas(8) Struct_2_E521CB413C09680F
{
	::Struct_2_6B3FEF18753DFC51 Field_2_0; // 0x10

	/*
	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::Struct_2_BCA142A597102245> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::Struct_2_BCA142A597102245>))((::PBYTE)hIl2Cpp + STRUCT_2_E521CB413C09680F__CTOR_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E521CB413C09680F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_B9EC3F44C1BFC5EF(::Class_2_7F95F273DDBFD8DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7F95F273DDBFD8DA*))((::PBYTE)hIl2Cpp + STRUCT_2_E521CB413C09680F_METHOD_2_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}
};
