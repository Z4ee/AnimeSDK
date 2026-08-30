#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_6_GET_LOADINGTRANSITION_OFFSET UNITYSDK_OFFSET(0x18E3FDE0)
#define CLASS_1_90889A2023AB884E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3FDF0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_6_TypeDefinitionIndex = 75582;

class Class_1_90889A2023AB884E_6 : public ::System::Object
{
public:
	::System::Boolean _LoadingTransition_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_LoadingTransition()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_6_GET_LOADINGTRANSITION_OFFSET))(this);
	}
};
