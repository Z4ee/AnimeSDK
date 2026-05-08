#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_54_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x16EA9860)
#define CLASS_1_46FECA8E1D551D46_54_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16EA9850)
#define CLASS_1_46FECA8E1D551D46_54_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16EA9980)
#define CLASS_1_46FECA8E1D551D46_54_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16EA9970)
#define CLASS_1_46FECA8E1D551D46_54__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA9840)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_54_TypeDefinitionIndex = 13855;

class Class_1_46FECA8E1D551D46_54 : public ::System::Object
{
public:
	::Struct_2_0190A9212AD9E688_7 Field_1_0; // 0x10
	::System::String* Field_1_5; // 0x20
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Byte Field_1_3; // 0x31
	::System::Boolean Field_1_2; // 0x32

	::System::Void _ctor(::Struct_2_0190A9212AD9E688_7 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_7, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_54_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_54_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_54_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_54_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
