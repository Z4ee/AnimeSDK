#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_146.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x16BD0FE0)
#define CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16BD13D0)
#define CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16BD12E0)
#define CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16BD12D0)
#define CLASS_1_D9FAA3DCCFE14DB8_11__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD0FD0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_11_TypeDefinitionIndex = 12836;

class Class_1_D9FAA3DCCFE14DB8_11 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_146 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x20
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::String* Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Byte Field_1_4; // 0x41
	::System::Boolean Field_1_2; // 0x42
	::System::Byte Field_1_3; // 0x43
	::System::Int32 Field_1_5; // 0x44
	::System::Int32 Field_1_10; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_146 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_146, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_11_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
