#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_144_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x11B8E280)
#define CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8E270)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_144_TypeDefinitionIndex = 61746;

class Class_1_43BD383C98B4C0C5_144 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144_TRIGGERACTION_OFFSET))(this);
	}
};
