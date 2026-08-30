#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_3_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD7FA560)
#define CLASS_1_E2FB7E5A9E3705C7_3_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD7FA580)
#define CLASS_1_E2FB7E5A9E3705C7_3_GET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xD7FA520)
#define CLASS_1_E2FB7E5A9E3705C7_3_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD7FA540)
#define CLASS_1_E2FB7E5A9E3705C7_3_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xD7FA570)
#define CLASS_1_E2FB7E5A9E3705C7_3_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD7FA590)
#define CLASS_1_E2FB7E5A9E3705C7_3_SET_LIVERYID_OFFSET UNITYSDK_OFFSET(0xD7FA530)
#define CLASS_1_E2FB7E5A9E3705C7_3_SET_NAME_OFFSET UNITYSDK_OFFSET(0xD7FA550)
#define CLASS_1_E2FB7E5A9E3705C7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FA5A0)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_3_TypeDefinitionIndex = 80365;

class Class_1_E2FB7E5A9E3705C7_3 : public ::System::Object
{
public:
	::System::String* _AssetPath_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::UInt32 _LiveryID_k__BackingField; // 0x20
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LiveryID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_GET_LIVERYID_OFFSET))(this);
	}

	::System::Void set_LiveryID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_SET_LIVERYID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_AssetPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_GET_ASSETPATH_OFFSET))(this);
	}

	::System::Void set_AssetPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_SET_ASSETPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_3_SET_ICONPATH_OFFSET))(this, a1);
	}
};
