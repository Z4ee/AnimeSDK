#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_711.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_99_METHOD_1_51652EAB9A014635_1_OFFSET UNITYSDK_OFFSET(0x1AFBB010)
#define CLASS_1_C4544004F26734BD_99_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1AFBAED0)
#define CLASS_1_C4544004F26734BD_99_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1AFBABE0)
#define CLASS_1_C4544004F26734BD_99_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AFBB160)
#define CLASS_1_C4544004F26734BD_99_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1AFBB170)
#define CLASS_1_C4544004F26734BD_99_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AFBB150)
#define CLASS_1_C4544004F26734BD_99__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBABD0)

inline static constexpr unsigned int Class_1_C4544004F26734BD_99_TypeDefinitionIndex = 15084;

class Class_1_C4544004F26734BD_99 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x18
	::Struct_2_3E75877A2888D88A_711 Field_1_1; // 0x20
	::System::Int32 Field_1_10; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Boolean Field_1_7; // 0x38
	::System::Byte Field_1_6; // 0x39
	::System::Byte Field_1_5; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_711 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_711, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_51652EAB9A014635_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_99_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
