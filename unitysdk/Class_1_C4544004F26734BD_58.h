#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_822.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_58_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x14C351B0)
#define CLASS_1_C4544004F26734BD_58_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x14C34EC0)
#define CLASS_1_C4544004F26734BD_58_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14C35600)
#define CLASS_1_C4544004F26734BD_58_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14C35500)
#define CLASS_1_C4544004F26734BD_58_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14C355F0)
#define CLASS_1_C4544004F26734BD_58__CTOR_OFFSET UNITYSDK_OFFSET(0x14C34EB0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_58_TypeDefinitionIndex = 12072;

class Class_1_C4544004F26734BD_58 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_6; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::Struct_2_3E75877A2888D88A_822 Field_1_3; // 0x28
	::System::Byte Field_1_7; // 0x38
	::System::Byte Field_1_0; // 0x39
	::System::Boolean Field_1_1; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_822 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_822, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_58_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
