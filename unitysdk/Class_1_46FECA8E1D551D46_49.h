#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_49_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x18976BE0)
#define CLASS_1_46FECA8E1D551D46_49_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x18976AD0)
#define CLASS_1_46FECA8E1D551D46_49_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18976DF0)
#define CLASS_1_46FECA8E1D551D46_49_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18976D00)
#define CLASS_1_46FECA8E1D551D46_49_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18976CF0)
#define CLASS_1_46FECA8E1D551D46_49__CTOR_OFFSET UNITYSDK_OFFSET(0x18976AC0)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_49_TypeDefinitionIndex = 12339;

class Class_1_46FECA8E1D551D46_49 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Struct_2_0190A9212AD9E688_4 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x28
	::System::String* Field_1_5; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Byte Field_1_3; // 0x39
	::System::Byte Field_1_4; // 0x3A

	::System::Void _ctor(::Struct_2_0190A9212AD9E688_4 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_4, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_49_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
