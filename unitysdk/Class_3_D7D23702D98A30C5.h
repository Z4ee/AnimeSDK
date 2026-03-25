#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8AD7347770446C20.h"

namespace System { class Object; }

#define CLASS_3_D7D23702D98A30C5_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1069DC20)
#define CLASS_3_D7D23702D98A30C5_GET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x1069DC40)
#define CLASS_3_D7D23702D98A30C5_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1069DC30)
#define CLASS_3_D7D23702D98A30C5_SET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x1069DC50)
#define CLASS_3_D7D23702D98A30C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1069DBE0)

inline static constexpr unsigned int Class_3_D7D23702D98A30C5_TypeDefinitionIndex = 61082;

class Class_3_D7D23702D98A30C5 : public ::Class_2_8AD7347770446C20
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x18
	::System::Boolean _SwitchTab_k__BackingField; // 0x19

	::System::Void _ctor(::System::Object* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_SET_CLOSEWINDOW_OFFSET))(this, value);
	}

	::System::Boolean get_SwitchTab()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_GET_SWITCHTAB_OFFSET))(this);
	}

	::System::Void set_SwitchTab(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D7D23702D98A30C5_SET_SWITCHTAB_OFFSET))(this, value);
	}
};
