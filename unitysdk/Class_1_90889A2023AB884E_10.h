#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_10_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1643CEB0)
#define CLASS_1_90889A2023AB884E_10_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1643CEC0)
#define CLASS_1_90889A2023AB884E_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1643CED0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_10_TypeDefinitionIndex = 79677;

class Class_1_90889A2023AB884E_10 : public ::System::Object
{
public:
	::System::Boolean _IsActive_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_10_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
