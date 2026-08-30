#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_25_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1AF39C00)
#define CLASS_1_97E659ED8D5D259C_25_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x1AF39C20)
#define CLASS_1_97E659ED8D5D259C_25_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1AF39C40)
#define CLASS_1_97E659ED8D5D259C_25_SET_DAY_OFFSET UNITYSDK_OFFSET(0x1AF39C10)
#define CLASS_1_97E659ED8D5D259C_25_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x1AF39C30)
#define CLASS_1_97E659ED8D5D259C_25_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1AF39C50)
#define CLASS_1_97E659ED8D5D259C_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF39C60)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_25_TypeDefinitionIndex = 80337;

class Class_1_97E659ED8D5D259C_25 : public ::System::Object
{
public:
	::System::UInt32 _Day_k__BackingField; // 0x10
	::System::UInt32 _TrackID_k__BackingField; // 0x14
	::System::UInt32 _MatchID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_GET_DAY_OFFSET))(this);
	}

	::System::Void set_Day(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_SET_DAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_MatchID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_GET_MATCHID_OFFSET))(this);
	}

	::System::Void set_MatchID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_SET_MATCHID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TrackID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_GET_TRACKID_OFFSET))(this);
	}

	::System::Void set_TrackID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_25_SET_TRACKID_OFFSET))(this, a1);
	}
};
