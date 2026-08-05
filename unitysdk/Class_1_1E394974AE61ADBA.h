#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B3A4913E940F8399.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_108.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x16FC3F10)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x16FC3D10)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x16FC38D0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16FC3D00)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16FC3E20)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET UNITYSDK_OFFSET(0x16FC3BC0)
#define CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16FC4020)
#define CLASS_1_1E394974AE61ADBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC38C0)

inline static constexpr unsigned int Class_1_1E394974AE61ADBA_TypeDefinitionIndex = 9960;

class Class_1_1E394974AE61ADBA : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_108 Field_1_0; // 0x10
	::System::String* Field_1_10; // 0x20
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x38
	::Enum_3_B3A4913E940F8399 Field_1_8; // 0x40
	::System::Byte Field_1_4; // 0x44
	::System::Boolean Field_1_6; // 0x45
	::System::Byte Field_1_5; // 0x46
	::System::Int32 Field_1_11; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_108 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_108, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::Enum_3_B3A4913E940F8399 Method_1_E03ACF2746079EFA()
	{
		return ((::Enum_3_B3A4913E940F8399(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_E03ACF2746079EFA_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E394974AE61ADBA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
