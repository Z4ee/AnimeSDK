#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_54254A0D4D720717_1_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x9E3AB60)
#define CLASS_1_54254A0D4D720717_1_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x9E3AB70)
#define CLASS_1_54254A0D4D720717_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9E3AB50)

inline static constexpr unsigned int Class_1_54254A0D4D720717_1_TypeDefinitionIndex = 68540;

class Class_1_54254A0D4D720717_1 : public ::System::Object
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_1_SET_CLOSEWINDOW_OFFSET))(this, value);
	}
};
