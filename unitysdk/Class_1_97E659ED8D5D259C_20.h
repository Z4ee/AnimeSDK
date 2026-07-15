#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_20_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x162170A0)
#define CLASS_1_97E659ED8D5D259C_20_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x162170C0)
#define CLASS_1_97E659ED8D5D259C_20_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x162170B0)
#define CLASS_1_97E659ED8D5D259C_20_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x162170D0)
#define CLASS_1_97E659ED8D5D259C_20__CTOR_OFFSET UNITYSDK_OFFSET(0x162170E0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_20_TypeDefinitionIndex = 75064;

class Class_1_97E659ED8D5D259C_20 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _QuestID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_QuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_SET_QUESTID_OFFSET))(this, a1);
	}
};
