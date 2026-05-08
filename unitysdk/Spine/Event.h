#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class EventData; }
namespace System { class String; }

#define SPINE_EVENT_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1C4A1770)
#define SPINE_EVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C4A16D0)
#define SPINE_EVENT_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1C4A1710)
#define SPINE_EVENT_GET_INT_OFFSET UNITYSDK_OFFSET(0x1C4A16F0)
#define SPINE_EVENT_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1C4A1730)
#define SPINE_EVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1C4A16E0)
#define SPINE_EVENT_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1C4A1750)
#define SPINE_EVENT_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1C4A1780)
#define SPINE_EVENT_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1C4A1720)
#define SPINE_EVENT_SET_INT_OFFSET UNITYSDK_OFFSET(0x1C4A1700)
#define SPINE_EVENT_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1C4A1740)
#define SPINE_EVENT_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1C4A1760)
#define SPINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4A1820)
#define SPINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A1790)

namespace Spine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 31322;

	class Event : public ::System::Object
	{
	public:
		::System::String* stringValue; // 0x10
		::Spine::EventData* data; // 0x18
		::System::Single time; // 0x20
		::System::Single floatValue; // 0x24
		::System::Single volume; // 0x28
		::System::Single balance; // 0x2C
		::System::Int32 intValue; // 0x30

		::System::Void _ctor(::System::Single time, ::Spine::EventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Spine::EventData*))((::PBYTE)hIl2Cpp + SPINE_EVENT__CTOR_OFFSET))(this, time, data);
		}

		::Spine::EventData* get_Data()
		{
			return ((::Spine::EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_DATA_OFFSET))(this);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_TIME_OFFSET))(this);
		}

		::System::Int32 get_Int()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_INT_OFFSET))(this);
		}

		::System::Void set_Int(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_INT_OFFSET))(this, value);
		}

		::System::Single get_Float()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_FLOAT_OFFSET))(this);
		}

		::System::Void set_Float(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_FLOAT_OFFSET))(this, value);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_STRING_OFFSET))(this, value);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Single get_Balance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_BALANCE_OFFSET))(this);
		}

		::System::Void set_Balance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_BALANCE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_TOSTRING_OFFSET))(this);
		}
	};
}
