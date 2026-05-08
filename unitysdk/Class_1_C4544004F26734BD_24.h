#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_440.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_1_OFFSET UNITYSDK_OFFSET(0x11FAAA00)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x11FAA710)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11FAADE0)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11FAACF0)
#define CLASS_1_C4544004F26734BD_24_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11FAA700)
#define CLASS_1_C4544004F26734BD_24__CTOR_OFFSET UNITYSDK_OFFSET(0x11FAA6F0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_24_TypeDefinitionIndex = 11007;

class Class_1_C4544004F26734BD_24 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x20
	::Struct_2_3E75877A2888D88A_440 Field_1_0; // 0x28
	::System::Byte Field_1_3; // 0x38
	::System::Boolean Field_1_2; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_440 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_440, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_31B03235195D095F_1_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_24_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
