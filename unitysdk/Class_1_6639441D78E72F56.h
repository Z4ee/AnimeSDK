#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6639441D78E72F56_GET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xBA66FE0)
#define CLASS_1_6639441D78E72F56_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xBA66FC0)
#define CLASS_1_6639441D78E72F56_SET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xBA66FF0)
#define CLASS_1_6639441D78E72F56_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xBA66FD0)
#define CLASS_1_6639441D78E72F56__CTOR_OFFSET UNITYSDK_OFFSET(0xBA66FB0)

inline static constexpr unsigned int Class_1_6639441D78E72F56_TypeDefinitionIndex = 78956;

class Class_1_6639441D78E72F56 : public ::System::Object
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x10
	::System::Boolean _CloseFullScreen_k__BackingField; // 0x11

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_SET_CLOSEWINDOW_OFFSET))(this, a1);
	}

	::System::Boolean get_CloseFullScreen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_GET_CLOSEFULLSCREEN_OFFSET))(this);
	}

	::System::Void set_CloseFullScreen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_SET_CLOSEFULLSCREEN_OFFSET))(this, a1);
	}
};
