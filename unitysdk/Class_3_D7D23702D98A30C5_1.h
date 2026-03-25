#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8AD7347770446C20.h"

namespace System { class Object; }

#define CLASS_3_D7D23702D98A30C5_1_GET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x104A56C0)
#define CLASS_3_D7D23702D98A30C5_1_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x104A56A0)
#define CLASS_3_D7D23702D98A30C5_1_SET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x104A56D0)
#define CLASS_3_D7D23702D98A30C5_1_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x104A56B0)
#define CLASS_3_D7D23702D98A30C5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x104A5660)

inline static constexpr unsigned int Class_3_D7D23702D98A30C5_1_TypeDefinitionIndex = 61081;

class Class_3_D7D23702D98A30C5_1 : public ::Class_2_8AD7347770446C20
{
public:
	::System::Boolean _CloseFullScreen_k__BackingField; // 0x18
	::System::Boolean _CloseWindow_k__BackingField; // 0x19

	::System::Void _ctor(::System::Object* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_1_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_1_SET_CLOSEWINDOW_OFFSET))(this, value);
	}

	::System::Boolean get_CloseFullScreen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_1_GET_CLOSEFULLSCREEN_OFFSET))(this);
	}

	::System::Void set_CloseFullScreen(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_1_SET_CLOSEFULLSCREEN_OFFSET))(this, value);
	}
};
