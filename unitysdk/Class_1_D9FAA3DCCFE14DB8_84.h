#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_504.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x165C3910)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x165C3C00)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x165C3900)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x165C3D10)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x165C38F0)
#define CLASS_1_D9FAA3DCCFE14DB8_84__CTOR_OFFSET UNITYSDK_OFFSET(0x165C38E0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_84_TypeDefinitionIndex = 13225;

class Class_1_D9FAA3DCCFE14DB8_84 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_504 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x20
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::String* Field_1_6; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Byte Field_1_3; // 0x3C
	::System::Boolean Field_1_2; // 0x3D
	::System::Byte Field_1_4; // 0x3E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_504 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_504, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
