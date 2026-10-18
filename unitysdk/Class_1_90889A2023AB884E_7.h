#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_7_GET_SHOWBG_OFFSET UNITYSDK_OFFSET(0x1655B930)
#define CLASS_1_90889A2023AB884E_7_SET_SHOWBG_OFFSET UNITYSDK_OFFSET(0x1655B940)
#define CLASS_1_90889A2023AB884E_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1655B950)

inline static constexpr unsigned int Class_1_90889A2023AB884E_7_TypeDefinitionIndex = 79136;

class Class_1_90889A2023AB884E_7 : public ::System::Object
{
public:
	::System::Boolean _ShowBg_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_7__CTOR_OFFSET))(this);
	}

	::System::Boolean get_ShowBg()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_7_GET_SHOWBG_OFFSET))(this);
	}

	::System::Void set_ShowBg(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_7_SET_SHOWBG_OFFSET))(this, a1);
	}
};
