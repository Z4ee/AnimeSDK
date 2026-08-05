#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_344.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x177018E0)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x177015E0)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x177015D0)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x177014E0)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x177018D0)
#define CLASS_1_D9FAA3DCCFE14DB8_21__CTOR_OFFSET UNITYSDK_OFFSET(0x177014D0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_21_TypeDefinitionIndex = 9821;

class Class_1_D9FAA3DCCFE14DB8_21 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_344 Field_1_3; // 0x10
	::System::String* Field_1_5; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Byte Field_1_0; // 0x3C
	::System::Byte Field_1_7; // 0x3D
	::System::Boolean Field_1_1; // 0x3E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_344 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_344, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
