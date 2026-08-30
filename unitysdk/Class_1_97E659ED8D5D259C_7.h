#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_7_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x1160DA50)
#define CLASS_1_97E659ED8D5D259C_7_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x1160DA60)
#define CLASS_1_97E659ED8D5D259C_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1160DA70)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_7_TypeDefinitionIndex = 62670;

class Class_1_97E659ED8D5D259C_7 : public ::System::Object
{
public:
	::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_AdventurePlayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_7_GET_ADVENTUREPLAYERID_OFFSET))(this);
	}

	::System::Void set_AdventurePlayerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_7_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
	}
};
