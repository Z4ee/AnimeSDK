#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_194.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_16_METHOD_1_0268A917ABE169E0_OFFSET UNITYSDK_OFFSET(0x1D4597F0)
#define CLASS_1_C4544004F26734BD_16_METHOD_1_51652EAB9A014635_1_OFFSET UNITYSDK_OFFSET(0x1D459B40)
#define CLASS_1_C4544004F26734BD_16_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1D4596B0)
#define CLASS_1_C4544004F26734BD_16_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D459C90)
#define CLASS_1_C4544004F26734BD_16_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1D459CA0)
#define CLASS_1_C4544004F26734BD_16_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D459C80)
#define CLASS_1_C4544004F26734BD_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4596A0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_16_TypeDefinitionIndex = 9419;

class Class_1_C4544004F26734BD_16 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_194 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Field_1_8; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x28
	::System::Int32 Field_1_11; // 0x30
	::System::Int32 Field_1_10; // 0x34
	::System::Int32 Field_1_15; // 0x38
	::System::Boolean Field_1_6; // 0x3C
	::System::Byte Field_1_5; // 0x3D
	::System::Byte Field_1_4; // 0x3E
	::System::Int32 Field_1_9; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_194 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_194, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* Method_1_0268A917ABE169E0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_0268A917ABE169E0_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_51652EAB9A014635_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_16_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
