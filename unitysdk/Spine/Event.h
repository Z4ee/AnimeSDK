#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class EventData; }
namespace System { class String; }

#define SPINE_EVENT_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1839DB10)
#define SPINE_EVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1839DA70)
#define SPINE_EVENT_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1839DAB0)
#define SPINE_EVENT_GET_INT_OFFSET UNITYSDK_OFFSET(0x1839DA90)
#define SPINE_EVENT_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1839DAD0)
#define SPINE_EVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1839DA80)
#define SPINE_EVENT_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1839DAF0)
#define SPINE_EVENT_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1839DB20)
#define SPINE_EVENT_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1839DAC0)
#define SPINE_EVENT_SET_INT_OFFSET UNITYSDK_OFFSET(0x1839DAA0)
#define SPINE_EVENT_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1839DAE0)
#define SPINE_EVENT_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1839DB00)
#define SPINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1839DBC0)
#define SPINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1839DB30)

namespace Spine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 30710;

	class Event : public ::System::Object
	{
	public:
		::Spine::EventData* data; // 0x10
		::System::String* stringValue; // 0x18
		::System::Single volume; // 0x20
		::System::Single time; // 0x24
		::System::Int32 intValue; // 0x28
		::System::Single floatValue; // 0x2C
		::System::Single balance; // 0x30

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
