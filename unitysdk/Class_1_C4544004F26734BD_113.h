#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_886.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_113_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1C02F730)
#define CLASS_1_C4544004F26734BD_113_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C02F720)
#define CLASS_1_C4544004F26734BD_113_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C02FA20)
#define CLASS_1_C4544004F26734BD_113_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C02FB10)
#define CLASS_1_C4544004F26734BD_113__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02F710)

inline static constexpr unsigned int Class_1_C4544004F26734BD_113_TypeDefinitionIndex = 16518;

class Class_1_C4544004F26734BD_113 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::Struct_2_3E75877A2888D88A_886 Field_1_3; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x28
	::System::Byte Field_1_7; // 0x30
	::System::Byte Field_1_0; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_886 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_886, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_113__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_113_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_113_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_113_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_113_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
