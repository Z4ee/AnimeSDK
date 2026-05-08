#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_363.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_15_METHOD_1_31B03235195D095F_1_OFFSET UNITYSDK_OFFSET(0x16D9CEA0)
#define CLASS_1_C4544004F26734BD_15_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x16D9CBB0)
#define CLASS_1_C4544004F26734BD_15_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x16D9D290)
#define CLASS_1_C4544004F26734BD_15_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16D9CBA0)
#define CLASS_1_C4544004F26734BD_15_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16D9D190)
#define CLASS_1_C4544004F26734BD_15_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16D9D280)
#define CLASS_1_C4544004F26734BD_15__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9CB90)

inline static constexpr unsigned int Class_1_C4544004F26734BD_15_TypeDefinitionIndex = 10835;

class Class_1_C4544004F26734BD_15 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::Struct_2_3E75877A2888D88A_363 Field_1_0; // 0x28
	::System::Byte Field_1_4; // 0x38
	::System::Byte Field_1_3; // 0x39
	::System::Boolean Field_1_2; // 0x3A
	::System::Byte Field_1_6; // 0x3B
	::System::Int32 Field_1_5; // 0x3C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_363 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_363, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_31B03235195D095F_1_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_15_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
