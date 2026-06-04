#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1AC55880)
#define SPINE_EVENTDATA_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1AC558C0)
#define SPINE_EVENTDATA_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1AC55840)
#define SPINE_EVENTDATA_GET_INT_OFFSET UNITYSDK_OFFSET(0x1AC55820)
#define SPINE_EVENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC55810)
#define SPINE_EVENTDATA_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1AC55860)
#define SPINE_EVENTDATA_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1AC558A0)
#define SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1AC55890)
#define SPINE_EVENTDATA_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x1AC558D0)
#define SPINE_EVENTDATA_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x1AC55850)
#define SPINE_EVENTDATA_SET_INT_OFFSET UNITYSDK_OFFSET(0x1AC55830)
#define SPINE_EVENTDATA_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1AC55870)
#define SPINE_EVENTDATA_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1AC558B0)
#define SPINE_EVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC55950)
#define SPINE_EVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC558E0)

namespace Spine
{
	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 36731;

	class EventData : public ::System::Object
	{
	public:
		::System::String* _String_k__BackingField; // 0x10
		::System::String* _AudioPath_k__BackingField; // 0x18
		::System::String* name; // 0x20
		::System::Single _Float_k__BackingField; // 0x28
		::System::Single _Volume_k__BackingField; // 0x2C
		::System::Single _Balance_k__BackingField; // 0x30
		::System::Int32 _Int_k__BackingField; // 0x34

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Int()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_INT_OFFSET))(this);
		}

		::System::Void set_Int(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_INT_OFFSET))(this, a1);
		}

		::System::Single get_Float()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_FLOAT_OFFSET))(this);
		}

		::System::Void set_Float(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_FLOAT_OFFSET))(this, a1);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_STRING_OFFSET))(this, a1);
		}

		::System::String* get_AudioPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET))(this);
		}

		::System::Void set_AudioPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET))(this, a1);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Single get_Balance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_BALANCE_OFFSET))(this);
		}

		::System::Void set_Balance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_BALANCE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
