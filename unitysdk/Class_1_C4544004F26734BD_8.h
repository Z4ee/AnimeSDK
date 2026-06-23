#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_225.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_8_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x18D5D960)
#define CLASS_1_C4544004F26734BD_8_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x18D5DD50)
#define CLASS_1_C4544004F26734BD_8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18D5D950)
#define CLASS_1_C4544004F26734BD_8_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18D5DC60)
#define CLASS_1_C4544004F26734BD_8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18D5DC50)
#define CLASS_1_C4544004F26734BD_8__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5D940)

inline static constexpr unsigned int Class_1_C4544004F26734BD_8_TypeDefinitionIndex = 9616;

class Class_1_C4544004F26734BD_8 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_225 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Byte Field_1_3; // 0x31
	::System::Boolean Field_1_2; // 0x32
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_225 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_225, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_8_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
