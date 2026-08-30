#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB66E39D32BF42FF_3_GET_ID_OFFSET UNITYSDK_OFFSET(0x158D1B50)
#define CLASS_1_CB66E39D32BF42FF_3_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x158D1B90)
#define CLASS_1_CB66E39D32BF42FF_3_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1B70)
#define CLASS_1_CB66E39D32BF42FF_3_SET_ID_OFFSET UNITYSDK_OFFSET(0x158D1B60)
#define CLASS_1_CB66E39D32BF42FF_3_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x158D1BA0)
#define CLASS_1_CB66E39D32BF42FF_3_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1B80)
#define CLASS_1_CB66E39D32BF42FF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x158D1BB0)

inline static constexpr unsigned int Class_1_CB66E39D32BF42FF_3_TypeDefinitionIndex = 79451;

class Class_1_CB66E39D32BF42FF_3 : public ::System::Object
{
public:
	::System::String* _JsonPath_k__BackingField; // 0x10
	::System::UInt32 _SubMissionID_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_GET_SUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_SubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_SET_SUBMISSIONID_OFFSET))(this, a1);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_SET_JSONPATH_OFFSET))(this, a1);
	}
};
