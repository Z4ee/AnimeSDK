#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class EventData; }
namespace System { class String; }

#define SPINE_EVENT_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1E5DB270)
#define SPINE_EVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E5DB1D0)
#define SPINE_EVENT_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1E5DB210)
#define SPINE_EVENT_GET_INT_OFFSET UNITYSDK_OFFSET(0x1E5DB1F0)
#define SPINE_EVENT_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1E5DB230)
#define SPINE_EVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1E5DB1E0)
#define SPINE_EVENT_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1E5DB250)
#define SPINE_EVENT_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1E5DB280)
#define SPINE_EVENT_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1E5DB220)
#define SPINE_EVENT_SET_INT_OFFSET UNITYSDK_OFFSET(0x1E5DB200)
#define SPINE_EVENT_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1E5DB240)
#define SPINE_EVENT_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1E5DB260)
#define SPINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5DB320)
#define SPINE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB290)

namespace Spine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 38371;

	class Event : public ::System::Object
	{
	public:
		::Spine::EventData* data; // 0x10
		::System::String* stringValue; // 0x18
		::System::Int32 intValue; // 0x20
		::System::Single time; // 0x24
		::System::Single volume; // 0x28
		::System::Single balance; // 0x2C
		::System::Single floatValue; // 0x30

		::System::Void _ctor(::System::Single a1, ::Spine::EventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Spine::EventData*))((::PBYTE)hIl2Cpp + SPINE_EVENT__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void set_Int(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_INT_OFFSET))(this, a1);
		}

		::System::Single get_Float()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_FLOAT_OFFSET))(this);
		}

		::System::Void set_Float(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_FLOAT_OFFSET))(this, a1);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_STRING_OFFSET))(this, a1);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Single get_Balance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_BALANCE_OFFSET))(this);
		}

		::System::Void set_Balance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_BALANCE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_TOSTRING_OFFSET))(this);
		}
	};
}
