#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x18CD75C0)
#define CLASS_1_90889A2023AB884E_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x18CD75D0)
#define CLASS_1_90889A2023AB884E__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD75E0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_TypeDefinitionIndex = 50120;

class Class_1_90889A2023AB884E : public ::System::Object
{
public:
	::System::Boolean _Handled_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Handled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_GET_HANDLED_OFFSET))(this);
	}

	::System::Void set_Handled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_SET_HANDLED_OFFSET))(this, a1);
	}
};
