#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_217BBF64891C4D7A_GET_MAPPATH_OFFSET UNITYSDK_OFFSET(0xA3CD9C0)
#define CLASS_1_217BBF64891C4D7A_GET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xA3CD9E0)
#define CLASS_1_217BBF64891C4D7A_GET_STARTMAPID_OFFSET UNITYSDK_OFFSET(0xA3CDA00)
#define CLASS_1_217BBF64891C4D7A_SET_MAPPATH_OFFSET UNITYSDK_OFFSET(0xA3CD9D0)
#define CLASS_1_217BBF64891C4D7A_SET_STARTCELLID_OFFSET UNITYSDK_OFFSET(0xA3CD9F0)
#define CLASS_1_217BBF64891C4D7A_SET_STARTMAPID_OFFSET UNITYSDK_OFFSET(0xA3CDA10)
#define CLASS_1_217BBF64891C4D7A__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CDA20)

inline static constexpr unsigned int Class_1_217BBF64891C4D7A_TypeDefinitionIndex = 70545;

class Class_1_217BBF64891C4D7A : public ::System::Object
{
public:
	::System::String* _MapPath_k__BackingField; // 0x10
	::System::UInt32 _StartCellID_k__BackingField; // 0x18
	::System::UInt32 _StartMapID_k__BackingField; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_MapPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_GET_MAPPATH_OFFSET))(this);
	}

	::System::Void set_MapPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_SET_MAPPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_StartCellID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_GET_STARTCELLID_OFFSET))(this);
	}

	::System::Void set_StartCellID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_SET_STARTCELLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StartMapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_GET_STARTMAPID_OFFSET))(this);
	}

	::System::Void set_StartMapID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_217BBF64891C4D7A_SET_STARTMAPID_OFFSET))(this, a1);
	}
};
