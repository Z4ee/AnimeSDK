#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_13_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15B276D0)
#define CLASS_1_90889A2023AB884E_13__CTOR_OFFSET UNITYSDK_OFFSET(0x15B276C0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_13_TypeDefinitionIndex = 79392;

class Class_1_90889A2023AB884E_13 : public ::System::Object
{
public:
	::System::Boolean _Enabled_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_13__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_Enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_13_GET_ENABLED_OFFSET))(this);
	}
};
