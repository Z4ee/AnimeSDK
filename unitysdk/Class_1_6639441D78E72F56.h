#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6639441D78E72F56_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xAA4F1C0)
#define CLASS_1_6639441D78E72F56_GET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xAA4F1E0)
#define CLASS_1_6639441D78E72F56_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xAA4F1D0)
#define CLASS_1_6639441D78E72F56_SET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xAA4F1F0)
#define CLASS_1_6639441D78E72F56__CTOR_OFFSET UNITYSDK_OFFSET(0xAA4F1B0)

inline static constexpr unsigned int Class_1_6639441D78E72F56_TypeDefinitionIndex = 68542;

class Class_1_6639441D78E72F56 : public ::System::Object
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x10
	::System::Boolean _SwitchTab_k__BackingField; // 0x11

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_SET_CLOSEWINDOW_OFFSET))(this, value);
	}

	::System::Boolean get_SwitchTab()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_GET_SWITCHTAB_OFFSET))(this);
	}

	::System::Void set_SwitchTab(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6639441D78E72F56_SET_SWITCHTAB_OFFSET))(this, value);
	}
};
