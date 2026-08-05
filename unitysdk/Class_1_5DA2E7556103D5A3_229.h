#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_17.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_163.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DA2E7556103D5A3_229_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x1AFA6130)
#define CLASS_1_5DA2E7556103D5A3_229_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1AFA6480)
#define CLASS_1_5DA2E7556103D5A3_229_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AFA6110)
#define CLASS_1_5DA2E7556103D5A3_229_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1AFA65C0)
#define CLASS_1_5DA2E7556103D5A3_229_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AFA6120)
#define CLASS_1_5DA2E7556103D5A3_229__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA6100)

inline static constexpr unsigned int Class_1_5DA2E7556103D5A3_229_TypeDefinitionIndex = 17954;

class Class_1_5DA2E7556103D5A3_229 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_15; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_17>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x28
	::Struct_2_58DF5669875F2C66_163 Field_1_2; // 0x30
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x48
	::System::String* Field_1_11; // 0x50
	::System::String* Field_1_10; // 0x58
	::System::Int32 Field_1_9; // 0x60
	::System::Int32 Field_1_5; // 0x64
	::System::Byte Field_1_6; // 0x68
	::System::Byte Field_1_7; // 0x69
	::System::Boolean Field_1_0; // 0x6A
	::System::Byte Field_1_13; // 0x6B

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_163 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_163, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_17>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_17>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DA2E7556103D5A3_229_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
