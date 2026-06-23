#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_635.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_0AF57C9DBD7ECFC0_OFFSET UNITYSDK_OFFSET(0x184B7950)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x184B7C90)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x184B7F90)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x184B7840)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x184B7C80)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x184B7B90)
#define CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x184B7F80)
#define CLASS_1_D9FAA3DCCFE14DB8_69__CTOR_OFFSET UNITYSDK_OFFSET(0x184B7830)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_69_TypeDefinitionIndex = 15662;

class Class_1_D9FAA3DCCFE14DB8_69 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_635 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x30
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x38
	::System::Byte Field_1_4; // 0x40
	::System::Byte Field_1_3; // 0x41
	::System::Boolean Field_1_2; // 0x42
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_635 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_635, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_0AF57C9DBD7ECFC0()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_0AF57C9DBD7ECFC0_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_69_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
