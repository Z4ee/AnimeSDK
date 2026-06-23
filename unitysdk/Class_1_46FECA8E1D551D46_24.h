#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_516.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_1_46FECA8E1D551D46_24_METHOD_1_883C3A41389A55F9_1_OFFSET UNITYSDK_OFFSET(0x18BA77A0)
#define CLASS_1_46FECA8E1D551D46_24_METHOD_1_883C3A41389A55F9_OFFSET UNITYSDK_OFFSET(0x18BA7590)
#define CLASS_1_46FECA8E1D551D46_24_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18BA79B0)
#define CLASS_1_46FECA8E1D551D46_24_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x18BA7490)
#define CLASS_1_46FECA8E1D551D46_24_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18BA7580)
#define CLASS_1_46FECA8E1D551D46_24__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA7480)

inline static constexpr unsigned int Class_1_46FECA8E1D551D46_24_TypeDefinitionIndex = 13660;

class Class_1_46FECA8E1D551D46_24 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_5; // 0x20
	::Struct_2_3E75877A2888D88A_516 Field_1_0; // 0x28
	::System::Byte Field_1_3; // 0x38
	::System::Byte Field_1_4; // 0x39
	::System::Boolean Field_1_2; // 0x3A

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_516 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_516, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_883C3A41389A55F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24_METHOD_1_883C3A41389A55F9_OFFSET))(this);
	}

	::System::String* Method_1_883C3A41389A55F9_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24_METHOD_1_883C3A41389A55F9_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FECA8E1D551D46_24_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
