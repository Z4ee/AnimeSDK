#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_23.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_432.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x181D1840)
#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_75D0422F760341EE_1_OFFSET UNITYSDK_OFFSET(0x181D1BA0)
#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x181D1450)
#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181D1740)
#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x181D1750)
#define CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181D1B90)
#define CLASS_1_D9FAA3DCCFE14DB8_32__CTOR_OFFSET UNITYSDK_OFFSET(0x181D1440)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_32_TypeDefinitionIndex = 15755;

class Class_1_D9FAA3DCCFE14DB8_32 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x10
	::System::String* Field_1_14; // 0x18
	::Struct_2_3E75877A2888D88A_432 Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x30
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_23>* Field_1_15; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x48
	::System::Boolean Field_1_7; // 0x50
	::System::Byte Field_1_5; // 0x51
	::System::Byte Field_1_6; // 0x52
	::System::Int32 Field_1_4; // 0x54
	::System::Int32 Field_1_11; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_432 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_432, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_23>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_23>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_32_METHOD_1_75D0422F760341EE_1_OFFSET))(this);
	}
};
