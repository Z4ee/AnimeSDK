#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_0AF57C9DBD7ECFC0_OFFSET UNITYSDK_OFFSET(0x147358D0)
#define CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x147354E0)
#define CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14735B10)
#define CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x147357D0)
#define CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x147358C0)
#define CLASS_1_D9FAA3DCCFE14DB8_87__CTOR_OFFSET UNITYSDK_OFFSET(0x147354D0)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_87_TypeDefinitionIndex = 14334;

class Class_1_D9FAA3DCCFE14DB8_87 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_796 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x28
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_3; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_796 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_796, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_0AF57C9DBD7ECFC0()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_0AF57C9DBD7ECFC0_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_87_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
