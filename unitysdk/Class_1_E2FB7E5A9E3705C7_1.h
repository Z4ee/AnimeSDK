#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_1_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x179A7330)
#define CLASS_1_E2FB7E5A9E3705C7_1_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x179A7310)
#define CLASS_1_E2FB7E5A9E3705C7_1_GET_BOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x179A7350)
#define CLASS_1_E2FB7E5A9E3705C7_1_GET_COMMONTALK_OFFSET UNITYSDK_OFFSET(0x179A7390)
#define CLASS_1_E2FB7E5A9E3705C7_1_GET_STARTTALK_OFFSET UNITYSDK_OFFSET(0x179A73B0)
#define CLASS_1_E2FB7E5A9E3705C7_1_GET_VICTORYTALK_OFFSET UNITYSDK_OFFSET(0x179A7370)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x179A7340)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x179A7320)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_BOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x179A7360)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_COMMONTALK_OFFSET UNITYSDK_OFFSET(0x179A73A0)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_STARTTALK_OFFSET UNITYSDK_OFFSET(0x179A73C0)
#define CLASS_1_E2FB7E5A9E3705C7_1_SET_VICTORYTALK_OFFSET UNITYSDK_OFFSET(0x179A7380)
#define CLASS_1_E2FB7E5A9E3705C7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179A73D0)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_1_TypeDefinitionIndex = 63902;

class Class_1_E2FB7E5A9E3705C7_1 : public ::System::Object
{
public:
	::System::String* _AvatarIconPath_k__BackingField; // 0x10
	::System::String* _BoardAvatarIconPath_k__BackingField; // 0x18
	::System::UInt32 _AvatarID_k__BackingField; // 0x20
	::RPG::Client::TextID _VictoryTalk_k__BackingField; // 0x28
	::RPG::Client::TextID _StartTalk_k__BackingField; // 0x38
	::RPG::Client::TextID _CommonTalk_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::String* get_AvatarIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_AVATARICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_AVATARICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_BoardAvatarIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_BOARDAVATARICONPATH_OFFSET))(this);
	}

	::System::Void set_BoardAvatarIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_BOARDAVATARICONPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_VictoryTalk()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_VICTORYTALK_OFFSET))(this);
	}

	::System::Void set_VictoryTalk(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_VICTORYTALK_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_CommonTalk()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_COMMONTALK_OFFSET))(this);
	}

	::System::Void set_CommonTalk(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_COMMONTALK_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_StartTalk()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_GET_STARTTALK_OFFSET))(this);
	}

	::System::Void set_StartTalk(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_1_SET_STARTTALK_OFFSET))(this, a1);
	}
};
