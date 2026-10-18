#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_22_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15CF4860)
#define CLASS_1_97E659ED8D5D259C_22_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x15CF4880)
#define CLASS_1_97E659ED8D5D259C_22_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15CF4870)
#define CLASS_1_97E659ED8D5D259C_22_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x15CF4890)
#define CLASS_1_97E659ED8D5D259C_22__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF48A0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_22_TypeDefinitionIndex = 79033;

class Class_1_97E659ED8D5D259C_22 : public ::System::Object
{
public:
	::System::UInt32 _QuestID_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_22__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_22_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_22_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_QuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_22_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_22_SET_QUESTID_OFFSET))(this, a1);
	}
};
