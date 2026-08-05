#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_829.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_116_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x19A46DB0)
#define CLASS_1_C4544004F26734BD_116_METHOD_1_75D0422F760341EE_1_OFFSET UNITYSDK_OFFSET(0x19A469D0)
#define CLASS_1_C4544004F26734BD_116_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x19A466E0)
#define CLASS_1_C4544004F26734BD_116_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A46EF0)
#define CLASS_1_C4544004F26734BD_116_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19A46CC0)
#define CLASS_1_C4544004F26734BD_116_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A46F00)
#define CLASS_1_C4544004F26734BD_116__CTOR_OFFSET UNITYSDK_OFFSET(0x19A466D0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_116_TypeDefinitionIndex = 16797;

class Class_1_C4544004F26734BD_116 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x20
	::Struct_2_3E75877A2888D88A_829 Field_1_3; // 0x28
	::System::Boolean Field_1_1; // 0x38
	::System::Byte Field_1_7; // 0x39
	::System::Byte Field_1_0; // 0x3A
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_829 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_829, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_75D0422F760341EE_1_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_116_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
