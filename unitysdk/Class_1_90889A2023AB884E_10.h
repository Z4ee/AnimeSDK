#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_10_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB9F29E0)
#define CLASS_1_90889A2023AB884E_10_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB9F29F0)
#define CLASS_1_90889A2023AB884E_10__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F29D0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_10_TypeDefinitionIndex = 78954;

class Class_1_90889A2023AB884E_10 : public ::System::Object
{
public:
	::System::Boolean _CloseWindow_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_CloseWindow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10_GET_CLOSEWINDOW_OFFSET))(this);
	}

	::System::Void set_CloseWindow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10_SET_CLOSEWINDOW_OFFSET))(this, a1);
	}
};
