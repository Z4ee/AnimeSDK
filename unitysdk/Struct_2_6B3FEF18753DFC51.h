#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/Struct_2_BCA142A597102245.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6B3FEF18753DFC51_METHOD_2_B3725C8DD86BB06D_OFFSET UNITYSDK_OFFSET(0x702EF0)
#define STRUCT_2_6B3FEF18753DFC51_METHOD_2_CADC6C4AB8366DDC_OFFSET UNITYSDK_OFFSET(0x702F00)
#define STRUCT_2_6B3FEF18753DFC51_METHOD_2_CC4D685A21CDBA98_OFFSET UNITYSDK_OFFSET(0x703060)
#define STRUCT_2_6B3FEF18753DFC51_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x396A90)
#define STRUCT_2_6B3FEF18753DFC51__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C3AA00)
#define STRUCT_2_6B3FEF18753DFC51__CTOR_OFFSET UNITYSDK_OFFSET(0x2E1100)

inline static constexpr unsigned int Struct_2_6B3FEF18753DFC51_TypeDefinitionIndex = 53940;

struct alignas(8) Struct_2_6B3FEF18753DFC51
{
	static ::Struct_2_6B3FEF18753DFC51* StaticGet_Field_2_1()
	{
		return (::Struct_2_6B3FEF18753DFC51*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6B3FEF18753DFC51_TypeDefinitionIndex)->GetStaticField(0xCCF0);
	}
	::Foundation::NameValueSortedArray_1<::Struct_2_BCA142A597102245> Field_2_0; // 0x10

	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::Struct_2_BCA142A597102245> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::Struct_2_BCA142A597102245>))((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B3725C8DD86BB06D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51_METHOD_2_B3725C8DD86BB06D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::System::Void Method_2_CADC6C4AB8366DDC(::Foundation::Unreal::FName a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51_METHOD_2_CADC6C4AB8366DDC_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::System::Single Method_2_CC4D685A21CDBA98(::Foundation::Unreal::FName a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6B3FEF18753DFC51_METHOD_2_CC4D685A21CDBA98_OFFSET))(this, a1, a2);
	}
	*/
};
