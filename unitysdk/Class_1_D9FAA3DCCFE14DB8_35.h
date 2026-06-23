#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_387.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x14B31450)
#define CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x14B31250)
#define CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14B31750)
#define CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14B31360)
#define CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14B31740)
#define CLASS_1_D9FAA3DCCFE14DB8_35__CTOR_OFFSET UNITYSDK_OFFSET(0x14B31240)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_35_TypeDefinitionIndex = 11196;

class Class_1_D9FAA3DCCFE14DB8_35 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x20
	::Struct_2_3E75877A2888D88A_387 Field_1_0; // 0x28
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_3; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_387 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_387, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_35_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
