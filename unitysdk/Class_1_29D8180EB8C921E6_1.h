#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_29D8180EB8C921E6_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x177DE3D0)
#define CLASS_1_29D8180EB8C921E6_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x177DE380)
#define CLASS_1_29D8180EB8C921E6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x177DE420)

inline static constexpr unsigned int Class_1_29D8180EB8C921E6_1_TypeDefinitionIndex = 56835;

class Class_1_29D8180EB8C921E6_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29D8180EB8C921E6_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29D8180EB8C921E6_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29D8180EB8C921E6_1_GETEVENTTYPE_OFFSET))(this);
	}
};
