#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_1_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x16FCBCB0)
#define CLASS_1_90889A2023AB884E_1_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x16FCBCC0)
#define CLASS_1_90889A2023AB884E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCBCD0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_1_TypeDefinitionIndex = 50122;

class Class_1_90889A2023AB884E_1 : public ::System::Object
{
public:
	::System::Boolean _Active_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_SET_ACTIVE_OFFSET))(this, a1);
	}
};
