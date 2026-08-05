#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_203.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0F4E27823F3BE31_3_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x19E1AF80)
#define CLASS_1_D0F4E27823F3BE31_3_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x19E1B2D0)
#define CLASS_1_D0F4E27823F3BE31_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19E1B3E0)
#define CLASS_1_D0F4E27823F3BE31_3_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19E1B400)
#define CLASS_1_D0F4E27823F3BE31_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19E1B3F0)
#define CLASS_1_D0F4E27823F3BE31_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1AF70)

inline static constexpr unsigned int Class_1_D0F4E27823F3BE31_3_TypeDefinitionIndex = 11965;

class Class_1_D0F4E27823F3BE31_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x18
	::Struct_2_58DF5669875F2C66_203 Field_1_1; // 0x20
	::System::String* Field_1_11; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Byte Field_1_6; // 0x39
	::System::Byte Field_1_5; // 0x3A

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_203 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_203, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_7>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_3_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
