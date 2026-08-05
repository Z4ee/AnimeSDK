#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_16.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_47.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x1A1A1DF0)
#define CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1A1A1B00)
#define CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A1A1AF0)
#define CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A1A1A00)
#define CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A1A19F0)
#define CLASS_1_D9FAA3DCCFE14DB8_129__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A19E0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_129_TypeDefinitionIndex = 15020;

class Class_1_D9FAA3DCCFE14DB8_129 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_47 Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* Field_1_11; // 0x38
	::System::Byte Field_1_7; // 0x40
	::System::Boolean Field_1_1; // 0x41
	::System::Byte Field_1_0; // 0x42
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_47 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_47, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_129_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}
};
