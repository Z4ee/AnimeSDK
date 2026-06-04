#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_4_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4A32B0)
#define CLASS_1_97E659ED8D5D259C_4_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA4A3300)
#define CLASS_1_97E659ED8D5D259C_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A32A0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_4_TypeDefinitionIndex = 52876;

class Class_1_97E659ED8D5D259C_4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4_GETEVENTTYPE_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4_GETSOURCERUNTIMEID_OFFSET))(this);
	}
};
