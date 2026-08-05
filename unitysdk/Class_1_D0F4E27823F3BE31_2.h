#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_667.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0F4E27823F3BE31_2_METHOD_1_76391AC1B4F1AE89_OFFSET UNITYSDK_OFFSET(0x1C34C9D0)
#define CLASS_1_D0F4E27823F3BE31_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C34CC30)
#define CLASS_1_D0F4E27823F3BE31_2_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1C34C8E0)
#define CLASS_1_D0F4E27823F3BE31_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C34CC20)
#define CLASS_1_D0F4E27823F3BE31_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C34C8D0)

inline static constexpr unsigned int Class_1_D0F4E27823F3BE31_2_TypeDefinitionIndex = 18595;

class Class_1_D0F4E27823F3BE31_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x18
	::Struct_2_3E75877A2888D88A_667 Field_1_2; // 0x20
	::System::Byte Field_1_6; // 0x30
	::System::Byte Field_1_7; // 0x31
	::System::Boolean Field_1_0; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_667 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_667, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_2_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_76391AC1B4F1AE89()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_2_METHOD_1_76391AC1B4F1AE89_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
