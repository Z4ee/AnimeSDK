#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D8C9ED8919282E9_3_GET_ISDEEPBUFF_OFFSET UNITYSDK_OFFSET(0x179177D0)
#define CLASS_1_0D8C9ED8919282E9_3_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x179177B0)
#define CLASS_1_0D8C9ED8919282E9_3_SET_ISDEEPBUFF_OFFSET UNITYSDK_OFFSET(0x179177E0)
#define CLASS_1_0D8C9ED8919282E9_3_SET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x179177C0)
#define CLASS_1_0D8C9ED8919282E9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x179177F0)

inline static constexpr unsigned int Class_1_0D8C9ED8919282E9_3_TypeDefinitionIndex = 79693;

class Class_1_0D8C9ED8919282E9_3 : public ::System::Object
{
public:
	::System::UInt32 _MazeBuffID_k__BackingField; // 0x10
	::System::Boolean _IsDeepBuff_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MazeBuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_3_GET_MAZEBUFFID_OFFSET))(this);
	}

	::System::Void set_MazeBuffID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_3_SET_MAZEBUFFID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDeepBuff()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_3_GET_ISDEEPBUFF_OFFSET))(this);
	}

	::System::Void set_IsDeepBuff(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_3_SET_ISDEEPBUFF_OFFSET))(this, a1);
	}
};
