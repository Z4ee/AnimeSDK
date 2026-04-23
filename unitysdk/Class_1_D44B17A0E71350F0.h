#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D44B17A0E71350F0_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x8FD9960)
#define CLASS_1_D44B17A0E71350F0_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x8FD9920)
#define CLASS_1_D44B17A0E71350F0_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x8FD9940)
#define CLASS_1_D44B17A0E71350F0_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x8FD9970)
#define CLASS_1_D44B17A0E71350F0_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x8FD9930)
#define CLASS_1_D44B17A0E71350F0_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x8FD9950)
#define CLASS_1_D44B17A0E71350F0__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD9980)

inline static constexpr unsigned int Class_1_D44B17A0E71350F0_TypeDefinitionIndex = 53025;

class Class_1_D44B17A0E71350F0 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _RuntimeID_k__BackingField; // 0x18
	::RPG::Client::TextID _TextID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_SET_RUNTIMEID_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_SET_TEXTID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D44B17A0E71350F0_SET_ICONPATH_OFFSET))(this, value);
	}
};
