#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_82A6E5ACA7A501CB.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_47.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E394974AE61ADBA_METHOD_1_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0x16A2DD20)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_1_OFFSET UNITYSDK_OFFSET(0x16A2DA80)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_2_OFFSET UNITYSDK_OFFSET(0x16A2DBD0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_3_OFFSET UNITYSDK_OFFSET(0x16A2E010)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x16A2D920)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16A2DA70)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16A2E160)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x16A2E250)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16A2E3A0)
#define CLASS_1_1E394974AE61ADBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2D910)

inline static constexpr unsigned int Class_1_1E394974AE61ADBA_TypeDefinitionIndex = 8979;

class Class_1_1E394974AE61ADBA : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x18
	::Struct_2_3E75877A2888D88A_47 Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::System::Boolean Field_1_2; // 0x3C
	::System::Byte Field_1_4; // 0x3D
	::System::Byte Field_1_3; // 0x3E
	::System::Int32 Field_1_5; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Int32 Field_1_10; // 0x48
	::Enum_3_82A6E5ACA7A501CB Field_1_11; // 0x4C
	::System::Int32 Field_1_9; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_47 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_47, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_1_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_31B03235195D095F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_31B03235195D095F_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_51652EAB9A014635_3_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::Enum_3_82A6E5ACA7A501CB Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_82A6E5ACA7A501CB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
