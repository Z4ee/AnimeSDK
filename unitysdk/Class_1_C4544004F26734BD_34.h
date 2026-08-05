#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_527.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_34_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1694A340)
#define CLASS_1_C4544004F26734BD_34_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1694A630)
#define CLASS_1_C4544004F26734BD_34_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1694A250)
#define CLASS_1_C4544004F26734BD_34_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1694A640)
#define CLASS_1_C4544004F26734BD_34__CTOR_OFFSET UNITYSDK_OFFSET(0x1694A240)

inline static constexpr unsigned int Class_1_C4544004F26734BD_34_TypeDefinitionIndex = 10445;

class Class_1_C4544004F26734BD_34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x18
	::Struct_2_3E75877A2888D88A_527 Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x30
	::System::Byte Field_1_0; // 0x31
	::System::Byte Field_1_7; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_527 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_527, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_34_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_34_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_34_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_34_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
