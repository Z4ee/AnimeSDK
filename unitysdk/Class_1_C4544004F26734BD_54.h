#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_743.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_54_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x1710A870)
#define CLASS_1_C4544004F26734BD_54_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1710AB60)
#define CLASS_1_C4544004F26734BD_54_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1710AB80)
#define CLASS_1_C4544004F26734BD_54_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1710AB70)
#define CLASS_1_C4544004F26734BD_54__CTOR_OFFSET UNITYSDK_OFFSET(0x1710A860)

inline static constexpr unsigned int Class_1_C4544004F26734BD_54_TypeDefinitionIndex = 12814;

class Class_1_C4544004F26734BD_54 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_743 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Boolean Field_1_2; // 0x30
	::System::Byte Field_1_4; // 0x31
	::System::Byte Field_1_3; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_743 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_743, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_54_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_54_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_54_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_54_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
