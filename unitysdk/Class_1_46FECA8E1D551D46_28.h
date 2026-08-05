#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_151.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_28_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x18F78810)
#define CLASS_1_46FECA8E1D551D46_28_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18F78920)
#define CLASS_1_46FECA8E1D551D46_28_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18F78940)
#define CLASS_1_46FECA8E1D551D46_28_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18F78930)
#define CLASS_1_46FECA8E1D551D46_28__CTOR_OFFSET UNITYSDK_OFFSET(0x18F78800)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_28_TypeDefinitionIndex = 10526;

class Class_1_46FECA8E1D551D46_28 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::Struct_2_3E75877A2888D88A_151 Field_1_1; // 0x20
	::System::Byte Field_1_5; // 0x30
	::System::Boolean Field_1_7; // 0x31
	::System::Byte Field_1_6; // 0x32

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_151 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_151, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_28_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_28_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_28_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_28_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
