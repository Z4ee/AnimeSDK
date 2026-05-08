#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/Struct_2_BBCABD6DD9BDFC49.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_ABBDBB7B60DE9902_METHOD_2_2605F0751F5E30D5_OFFSET UNITYSDK_OFFSET(0x753960)
#define STRUCT_2_ABBDBB7B60DE9902_METHOD_2_7CE29E791A6BAC06_OFFSET UNITYSDK_OFFSET(0x753B30)
#define STRUCT_2_ABBDBB7B60DE9902_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x396A90)
#define STRUCT_2_ABBDBB7B60DE9902_METHOD_2_FC4D88BEF78643FE_OFFSET UNITYSDK_OFFSET(0x753B00)
#define STRUCT_2_ABBDBB7B60DE9902__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A395C0)
#define STRUCT_2_ABBDBB7B60DE9902__CTOR_OFFSET UNITYSDK_OFFSET(0x2E1100)

inline static constexpr unsigned int Struct_2_ABBDBB7B60DE9902_TypeDefinitionIndex = 81100;

struct alignas(8) Struct_2_ABBDBB7B60DE9902
{
	static ::Struct_2_ABBDBB7B60DE9902* StaticGet_Field_2_1()
	{
		return (::Struct_2_ABBDBB7B60DE9902*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_ABBDBB7B60DE9902_TypeDefinitionIndex)->GetStaticField(0xAA10);
	}
	::Foundation::NameValueSortedArray_1<::Struct_2_BBCABD6DD9BDFC49> Field_2_0; // 0x10

	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::Struct_2_BBCABD6DD9BDFC49> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::Struct_2_BBCABD6DD9BDFC49>))((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Method_2_2605F0751F5E30D5(::Foundation::Unreal::FName a1, ::Struct_2_BBCABD6DD9BDFC49& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::Struct_2_BBCABD6DD9BDFC49&))((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902_METHOD_2_2605F0751F5E30D5_OFFSET))(this, a1, a2);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_FC4D88BEF78643FE(::Foundation::Unreal::FName a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902_METHOD_2_FC4D88BEF78643FE_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::NativeMemoryRefEnumerator_1<::Struct_2_BBCABD6DD9BDFC49> Method_2_7CE29E791A6BAC06()
	{
		return ((::Foundation::NativeMemoryRefEnumerator_1<::Struct_2_BBCABD6DD9BDFC49>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ABBDBB7B60DE9902_METHOD_2_7CE29E791A6BAC06_OFFSET))(this);
	}
	*/
};
