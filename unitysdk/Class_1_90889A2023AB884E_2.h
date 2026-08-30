#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_2_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x15843820)
#define CLASS_1_90889A2023AB884E_2_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x15843830)
#define CLASS_1_90889A2023AB884E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15843840)

inline static constexpr unsigned int Class_1_90889A2023AB884E_2_TypeDefinitionIndex = 52213;

class Class_1_90889A2023AB884E_2 : public ::System::Object
{
public:
	::System::Boolean _IsDisplayOnly_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsDisplayOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_GET_ISDISPLAYONLY_OFFSET))(this);
	}

	::System::Void set_IsDisplayOnly(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_2_SET_ISDISPLAYONLY_OFFSET))(this, a1);
	}
};
