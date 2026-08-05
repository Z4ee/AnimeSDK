#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_501.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_32_METHOD_1_75D0422F760341EE_1_OFFSET UNITYSDK_OFFSET(0x1C37BDC0)
#define CLASS_1_C4544004F26734BD_32_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1C37B9C0)
#define CLASS_1_C4544004F26734BD_32_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C37BCB0)
#define CLASS_1_C4544004F26734BD_32_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C37BCC0)
#define CLASS_1_C4544004F26734BD_32_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C37BDB0)
#define CLASS_1_C4544004F26734BD_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37B9B0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_32_TypeDefinitionIndex = 10339;

class Class_1_C4544004F26734BD_32 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x10
	::Struct_2_3E75877A2888D88A_501 Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x30
	::System::Byte Field_1_7; // 0x38
	::System::Byte Field_1_0; // 0x39
	::System::Boolean Field_1_1; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_501 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_501, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_32_METHOD_1_75D0422F760341EE_1_OFFSET))(this);
	}
};
