#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_12_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x13D15620)
#define CLASS_1_97E659ED8D5D259C_12_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x13D155B0)
#define CLASS_1_97E659ED8D5D259C_12__CTOR_OFFSET UNITYSDK_OFFSET(0x13D155A0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_12_TypeDefinitionIndex = 62697;

class Class_1_97E659ED8D5D259C_12 : public ::System::Object
{
public:
	::System::UInt32 _AvatarID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_12_GET_AVATARID_OFFSET))(this);
	}
};
