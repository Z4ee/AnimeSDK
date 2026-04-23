#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7DF949025FBCD1DE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x11DC65B0)
#define CLASS_1_7DF949025FBCD1DE_GET_REASON_OFFSET UNITYSDK_OFFSET(0x11DC6590)
#define CLASS_1_7DF949025FBCD1DE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x11DC65C0)
#define CLASS_1_7DF949025FBCD1DE_SET_REASON_OFFSET UNITYSDK_OFFSET(0x11DC65A0)
#define CLASS_1_7DF949025FBCD1DE__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC65D0)

inline static constexpr unsigned int Class_1_7DF949025FBCD1DE_TypeDefinitionIndex = 71344;

class Class_1_7DF949025FBCD1DE : public ::System::Object
{
public:
	::System::String* _Reason_k__BackingField; // 0x10
	::System::Int64 _Count_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF949025FBCD1DE__CTOR_OFFSET))(this);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF949025FBCD1DE_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DF949025FBCD1DE_SET_REASON_OFFSET))(this, value);
	}

	::System::Int64 get_Count()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF949025FBCD1DE_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7DF949025FBCD1DE_SET_COUNT_OFFSET))(this, value);
	}
};
