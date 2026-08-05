#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_55230CEF110DAF7B_1.h"
#include "unitysdk/Enum_3_4D319CC539272284.h"

class Class_3_61A5922E5046F385_2;

#define CLASS_4_5C0662A8D140A91D_METHOD_4_004FCCC5408D79A8_OFFSET UNITYSDK_OFFSET(0x140BB220)
#define CLASS_4_5C0662A8D140A91D_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x140BBC70)
#define CLASS_4_5C0662A8D140A91D_METHOD_4_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x140BB1D0)
#define CLASS_4_5C0662A8D140A91D__CTOR_OFFSET UNITYSDK_OFFSET(0x140BB1E0)

inline static constexpr unsigned int Class_4_5C0662A8D140A91D_TypeDefinitionIndex = 64366;

class Class_4_5C0662A8D140A91D : public ::Class_3_55230CEF110DAF7B_1
{
public:
	::System::Single Field_4_2; // 0x10
	::System::Boolean Field_4_5; // 0x14
	::System::Boolean Field_4_7; // 0x15
	::System::Single Field_4_1; // 0x18
	::System::Single Field_4_4; // 0x1C
	::System::Single Field_4_0; // 0x20
	::System::Single Field_4_6; // 0x24

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_5C0662A8D140A91D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_4D319CC539272284 Method_4_A96DCA30C6927810()
	{
		return ((::Enum_3_4D319CC539272284(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5C0662A8D140A91D_METHOD_4_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_4_004FCCC5408D79A8(::Class_3_61A5922E5046F385_2* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_5C0662A8D140A91D_METHOD_4_004FCCC5408D79A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5C0662A8D140A91D_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}
};
