#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_3_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16A9C9E0)
#define CLASS_1_97E659ED8D5D259C_3_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16A9CA30)
#define CLASS_1_97E659ED8D5D259C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9C9D0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_3_TypeDefinitionIndex = 54087;

class Class_1_97E659ED8D5D259C_3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_3__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_3_GETEVENTTYPE_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_3_GETSOURCERUNTIMEID_OFFSET))(this);
	}
};
