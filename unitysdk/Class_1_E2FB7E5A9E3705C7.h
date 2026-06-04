#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x136C8D20)
#define CLASS_1_E2FB7E5A9E3705C7_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x136C8CE0)
#define CLASS_1_E2FB7E5A9E3705C7_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x136C8D00)
#define CLASS_1_E2FB7E5A9E3705C7_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x136C8D30)
#define CLASS_1_E2FB7E5A9E3705C7_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x136C8CF0)
#define CLASS_1_E2FB7E5A9E3705C7_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x136C8D10)
#define CLASS_1_E2FB7E5A9E3705C7__CTOR_OFFSET UNITYSDK_OFFSET(0x136C8D40)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_TypeDefinitionIndex = 53735;

class Class_1_E2FB7E5A9E3705C7 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::RPG::Client::TextID _TextID_k__BackingField; // 0x18
	::System::UInt32 _RuntimeID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_SET_TEXTID_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_SET_ICONPATH_OFFSET))(this, a1);
	}
};
