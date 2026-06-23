#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_509.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_36_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1A3BA450)
#define CLASS_1_C4544004F26734BD_36_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1A3BA300)
#define CLASS_1_C4544004F26734BD_36_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A3BA740)
#define CLASS_1_C4544004F26734BD_36_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A3BA750)
#define CLASS_1_C4544004F26734BD_36_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A3BA840)
#define CLASS_1_C4544004F26734BD_36__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BA2F0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_36_TypeDefinitionIndex = 10517;

class Class_1_C4544004F26734BD_36 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_509 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Boolean Field_1_2; // 0x34
	::System::Byte Field_1_3; // 0x35
	::System::Byte Field_1_4; // 0x36
	::System::Byte Field_1_6; // 0x37

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_509 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_509, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_36_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
