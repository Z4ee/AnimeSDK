#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_24_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x1898C0A0)
#define CLASS_1_97E659ED8D5D259C_24_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1898C0C0)
#define CLASS_1_97E659ED8D5D259C_24_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x1898C0B0)
#define CLASS_1_97E659ED8D5D259C_24_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1898C0D0)
#define CLASS_1_97E659ED8D5D259C_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1898C0E0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_24_TypeDefinitionIndex = 80335;

class Class_1_97E659ED8D5D259C_24 : public ::System::Object
{
public:
	::System::UInt32 _MatchID_k__BackingField; // 0x10
	::System::UInt32 _TrackID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_24__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MatchID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_24_GET_MATCHID_OFFSET))(this);
	}

	::System::Void set_MatchID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_24_SET_MATCHID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TrackID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_24_GET_TRACKID_OFFSET))(this);
	}

	::System::Void set_TrackID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_24_SET_TRACKID_OFFSET))(this, a1);
	}
};
