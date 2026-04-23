#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1239E0A0)
#define CLASS_1_97E659ED8D5D259C_2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1239E0F0)
#define CLASS_1_97E659ED8D5D259C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1239E090)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_2_TypeDefinitionIndex = 52178;

class Class_1_97E659ED8D5D259C_2 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2_GETEVENTTYPE_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_2_GETSOURCERUNTIMEID_OFFSET))(this);
	}
};
