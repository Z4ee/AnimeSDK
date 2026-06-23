#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_403.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1AB0F380)
#define CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AB0F680)
#define CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1AB0F290)
#define CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AB0F670)
#define CLASS_1_D9FAA3DCCFE14DB8_132__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0F280)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_132_TypeDefinitionIndex = 17060;

class Class_1_D9FAA3DCCFE14DB8_132 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x28
	::Struct_2_3E75877A2888D88A_403 Field_1_0; // 0x30
	::System::Boolean Field_1_7; // 0x40
	::System::Byte Field_1_3; // 0x41
	::System::Boolean Field_1_2; // 0x42
	::System::Byte Field_1_4; // 0x43
	::System::Int32 Field_1_5; // 0x44
	::System::Int32 Field_1_10; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_403 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_403, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_132__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_132_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
