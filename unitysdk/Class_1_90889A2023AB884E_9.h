#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_9_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBD57BA0)
#define CLASS_1_90889A2023AB884E_9_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBD57BB0)
#define CLASS_1_90889A2023AB884E_9__CTOR_OFFSET UNITYSDK_OFFSET(0xBD57BC0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_9_TypeDefinitionIndex = 79781;

class Class_1_90889A2023AB884E_9 : public ::System::Object
{
public:
	::System::Boolean _IsActive_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_9__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_9_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_9_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
