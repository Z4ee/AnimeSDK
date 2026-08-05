#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_864.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x11F07420)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11F07770)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x11F07040)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11F07890)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11F07330)
#define CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11F07880)
#define CLASS_1_D9FAA3DCCFE14DB8_84__CTOR_OFFSET UNITYSDK_OFFSET(0x11F07030)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_84_TypeDefinitionIndex = 18311;

class Class_1_D9FAA3DCCFE14DB8_84 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_864 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x28
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x30
	::System::String* Field_1_11; // 0x38
	::System::Byte Field_1_5; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::Byte Field_1_4; // 0x42

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_864 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_864, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_84_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
