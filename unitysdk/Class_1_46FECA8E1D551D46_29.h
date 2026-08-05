#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_559.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_29_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x14C52300)
#define CLASS_1_46FECA8E1D551D46_29_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14C52410)
#define CLASS_1_46FECA8E1D551D46_29_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14C52420)
#define CLASS_1_46FECA8E1D551D46_29_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14C52510)
#define CLASS_1_46FECA8E1D551D46_29__CTOR_OFFSET UNITYSDK_OFFSET(0x14C522F0)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_29_TypeDefinitionIndex = 10590;

class Class_1_46FECA8E1D551D46_29 : public ::System::Object
{
public:
	::System::String* Field_1_11; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x18
	::Struct_2_3E75877A2888D88A_559 Field_1_0; // 0x20
	::System::Boolean Field_1_6; // 0x30
	::System::Byte Field_1_4; // 0x31
	::System::Byte Field_1_5; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_559 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_559, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_29_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_29_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_29_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_29_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
