#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0D8C9ED8919282E9_4_GET_ISCHALLENGE_OFFSET UNITYSDK_OFFSET(0xE252800)
#define CLASS_1_0D8C9ED8919282E9_4_GET_ISFIRSTSEASONMATCH_OFFSET UNITYSDK_OFFSET(0xE2527E0)
#define CLASS_1_0D8C9ED8919282E9_4_GET_ISSEASONAGENDA_OFFSET UNITYSDK_OFFSET(0xE2527C0)
#define CLASS_1_0D8C9ED8919282E9_4_GET_MATCHCONFIGID_OFFSET UNITYSDK_OFFSET(0xE252760)
#define CLASS_1_0D8C9ED8919282E9_4_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE252780)
#define CLASS_1_0D8C9ED8919282E9_4_GET_TRACKCONFIGID_OFFSET UNITYSDK_OFFSET(0xE2527A0)
#define CLASS_1_0D8C9ED8919282E9_4_METHOD_1_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0xE2526B0)
#define CLASS_1_0D8C9ED8919282E9_4_SET_ISCHALLENGE_OFFSET UNITYSDK_OFFSET(0xE252810)
#define CLASS_1_0D8C9ED8919282E9_4_SET_ISFIRSTSEASONMATCH_OFFSET UNITYSDK_OFFSET(0xE2527F0)
#define CLASS_1_0D8C9ED8919282E9_4_SET_ISSEASONAGENDA_OFFSET UNITYSDK_OFFSET(0xE2527D0)
#define CLASS_1_0D8C9ED8919282E9_4_SET_MATCHCONFIGID_OFFSET UNITYSDK_OFFSET(0xE252770)
#define CLASS_1_0D8C9ED8919282E9_4_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE252790)
#define CLASS_1_0D8C9ED8919282E9_4_SET_TRACKCONFIGID_OFFSET UNITYSDK_OFFSET(0xE2527B0)
#define CLASS_1_0D8C9ED8919282E9_4__CTOR_OFFSET UNITYSDK_OFFSET(0xE252820)

inline static constexpr unsigned int Class_1_0D8C9ED8919282E9_4_TypeDefinitionIndex = 81683;

class Class_1_0D8C9ED8919282E9_4 : public ::System::Object
{
public:
	::System::UInt32 _SessionId_k__BackingField; // 0x10
	::System::Boolean _IsFirstSeasonMatch_k__BackingField; // 0x14
	::System::Boolean _IsChallenge_k__BackingField; // 0x15
	::System::Boolean _IsSeasonAgenda_k__BackingField; // 0x16
	::System::UInt32 _TrackConfigId_k__BackingField; // 0x18
	::System::UInt32 _MatchConfigId_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_METHOD_1_CD5C08A2521794A0_OFFSET))(this);
	}

	::System::UInt32 get_MatchConfigId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_MATCHCONFIGID_OFFSET))(this);
	}

	::System::Void set_MatchConfigId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_MATCHCONFIGID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SessionId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_SESSIONID_OFFSET))(this);
	}

	::System::Void set_SessionId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_SESSIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TrackConfigId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_TRACKCONFIGID_OFFSET))(this);
	}

	::System::Void set_TrackConfigId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_TRACKCONFIGID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSeasonAgenda()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_ISSEASONAGENDA_OFFSET))(this);
	}

	::System::Void set_IsSeasonAgenda(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_ISSEASONAGENDA_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFirstSeasonMatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_ISFIRSTSEASONMATCH_OFFSET))(this);
	}

	::System::Void set_IsFirstSeasonMatch(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_ISFIRSTSEASONMATCH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsChallenge()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_GET_ISCHALLENGE_OFFSET))(this);
	}

	::System::Void set_IsChallenge(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_4_SET_ISCHALLENGE_OFFSET))(this, a1);
	}
};
