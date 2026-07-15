#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x167183E0)
#define CLASS_1_97E659ED8D5D259C_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x167183F0)
#define CLASS_1_97E659ED8D5D259C__CTOR_OFFSET UNITYSDK_OFFSET(0x16718400)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_TypeDefinitionIndex = 49552;

class Class_1_97E659ED8D5D259C : public ::System::Object
{
public:
	::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_AdventurePlayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_GET_ADVENTUREPLAYERID_OFFSET))(this);
	}

	::System::Void set_AdventurePlayerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
	}
};
