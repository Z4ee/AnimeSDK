#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_54254A0D4D720717_2_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xA7AF590)
#define CLASS_1_54254A0D4D720717_2_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xA7AF5A0)
#define CLASS_1_54254A0D4D720717_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AF580)

inline static constexpr unsigned int Class_1_54254A0D4D720717_2_TypeDefinitionIndex = 68539;

class Class_1_54254A0D4D720717_2 : public ::System::Object
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2_SET_CLOSEWINDOW_OFFSET))(this, value);
	}
};
