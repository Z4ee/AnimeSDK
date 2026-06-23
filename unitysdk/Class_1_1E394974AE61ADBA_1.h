#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B3A4913E940F8399.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_271.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x19E7A120)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_883C3A41389A55F9_1_OFFSET UNITYSDK_OFFSET(0x19E79E40)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_883C3A41389A55F9_OFFSET UNITYSDK_OFFSET(0x19E79CB0)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19E79C90)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19E79BA0)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x19E79FD0)
#define CLASS_1_1E394974AE61ADBA_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19E79CA0)
#define CLASS_1_1E394974AE61ADBA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E79B90)

inline static constexpr unsigned int Class_1_1E394974AE61ADBA_1_TypeDefinitionIndex = 16612;

class Class_1_1E394974AE61ADBA_1 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x18
	::Struct_2_3E75877A2888D88A_271 Field_1_0; // 0x20
	::System::String* Field_1_9; // 0x30
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x38
	::Enum_3_B3A4913E940F8399 Field_1_8; // 0x40
	::System::Byte Field_1_3; // 0x44
	::System::Byte Field_1_4; // 0x45
	::System::Boolean Field_1_2; // 0x46
	::System::Int32 Field_1_5; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_271 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_271, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_883C3A41389A55F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_883C3A41389A55F9_OFFSET))(this);
	}

	::System::String* Method_1_883C3A41389A55F9_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_883C3A41389A55F9_1_OFFSET))(this);
	}

	::Enum_3_B3A4913E940F8399 Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_B3A4913E940F8399(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_1_METHOD_1_31B03235195D095F_OFFSET))(this);
	}
};
