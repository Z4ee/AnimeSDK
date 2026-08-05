#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_998.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1BE4C680)
#define CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_76391AC1B4F1AE89_OFFSET UNITYSDK_OFFSET(0x1BE4C430)
#define CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BE4C970)
#define CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1BE4C990)
#define CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BE4C980)
#define CLASS_1_D9FAA3DCCFE14DB8_128__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4C420)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_128_TypeDefinitionIndex = 14878;

class Class_1_D9FAA3DCCFE14DB8_128 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x10
	::Struct_2_3E75877A2888D88A_998 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x28
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x30
	::System::Boolean Field_1_6; // 0x38
	::System::Byte Field_1_5; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_998 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_998, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_76391AC1B4F1AE89()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_76391AC1B4F1AE89_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_128_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
