#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_268.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0F4E27823F3BE31_METHOD_1_76391AC1B4F1AE89_OFFSET UNITYSDK_OFFSET(0x17F5D350)
#define CLASS_1_D0F4E27823F3BE31_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F5D340)
#define CLASS_1_D0F4E27823F3BE31_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17F5D250)
#define CLASS_1_D0F4E27823F3BE31_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F5D240)
#define CLASS_1_D0F4E27823F3BE31__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5D230)

inline static constexpr unsigned int Class_1_D0F4E27823F3BE31_TypeDefinitionIndex = 15074;

class Class_1_D0F4E27823F3BE31 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x18
	::Struct_2_3E75877A2888D88A_268 Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x30
	::System::Byte Field_1_6; // 0x31
	::System::Byte Field_1_7; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_268 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_268, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_76391AC1B4F1AE89()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_METHOD_1_76391AC1B4F1AE89_OFFSET))(this);
	}
};
