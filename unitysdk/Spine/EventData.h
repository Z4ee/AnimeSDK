#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1C291DF0)
#define SPINE_EVENTDATA_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1C291E30)
#define SPINE_EVENTDATA_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1C291DB0)
#define SPINE_EVENTDATA_GET_INT_OFFSET UNITYSDK_OFFSET(0x1C291D90)
#define SPINE_EVENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C291D80)
#define SPINE_EVENTDATA_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1C291DD0)
#define SPINE_EVENTDATA_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1C291E10)
#define SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1C291E00)
#define SPINE_EVENTDATA_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1C291E40)
#define SPINE_EVENTDATA_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1C291DC0)
#define SPINE_EVENTDATA_SET_INT_OFFSET UNITYSDK_OFFSET(0x1C291DA0)
#define SPINE_EVENTDATA_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1C291DE0)
#define SPINE_EVENTDATA_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1C291E20)
#define SPINE_EVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C291EC0)
#define SPINE_EVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C291E50)

namespace Spine
{
	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 31323;

	class EventData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* _AudioPath_k__BackingField; // 0x18
		::System::String* _String_k__BackingField; // 0x20
		::System::Single _Volume_k__BackingField; // 0x28
		::System::Int32 _Int_k__BackingField; // 0x2C
		::System::Single _Balance_k__BackingField; // 0x30
		::System::Single _Float_k__BackingField; // 0x34

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Int()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_INT_OFFSET))(this);
		}

		::System::Void set_Int(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_INT_OFFSET))(this, value);
		}

		::System::Single get_Float()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_FLOAT_OFFSET))(this);
		}

		::System::Void set_Float(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_FLOAT_OFFSET))(this, value);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_STRING_OFFSET))(this, value);
		}

		::System::String* get_AudioPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET))(this);
		}

		::System::Void set_AudioPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET))(this, value);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Single get_Balance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_BALANCE_OFFSET))(this);
		}

		::System::Void set_Balance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_BALANCE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
