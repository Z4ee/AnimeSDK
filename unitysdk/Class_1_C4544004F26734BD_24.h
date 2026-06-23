#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_372.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_1_OFFSET UNITYSDK_OFFSET(0x1369BCF0)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1369B8F0)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1369BBF0)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1369BC00)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1369BBE0)
#define CLASS_1_C4544004F26734BD_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1369B8E0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_24_TypeDefinitionIndex = 10019;

class Class_1_C4544004F26734BD_24 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_372 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_4; // 0x39
	::System::Byte Field_1_3; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_372 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_372, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_1_OFFSET))(this);
	}
};
