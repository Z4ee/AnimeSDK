#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_79A9FCF3464BF732.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_252.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E394974AE61ADBA_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1710A0F0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x1710A5F0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x1710A4E0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1710A4D0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1710A3E0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x1710A710)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1710A700)
#define CLASS_1_1E394974AE61ADBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1710A0E0)

inline static constexpr unsigned int Class_1_1E394974AE61ADBA_TypeDefinitionIndex = 16194;

class Class_1_1E394974AE61ADBA : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Struct_2_3E75877A2888D88A_252 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::String* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::Enum_3_79A9FCF3464BF732 Field_1_8; // 0x44
	::System::Byte Field_1_4; // 0x48
	::System::Boolean Field_1_2; // 0x49
	::System::Byte Field_1_3; // 0x4A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_252 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_252, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_79A9FCF3464BF732 Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_79A9FCF3464BF732(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}
};
