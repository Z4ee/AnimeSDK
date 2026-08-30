#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2FB7E5A9E3705C7_4_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD7E5EC0)
#define CLASS_1_E2FB7E5A9E3705C7_4_GET_CONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xD7E5EA0)
#define CLASS_1_E2FB7E5A9E3705C7_4_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xD7E5E80)
#define CLASS_1_E2FB7E5A9E3705C7_4_GET_TRID_OFFSET UNITYSDK_OFFSET(0xD7E5E60)
#define CLASS_1_E2FB7E5A9E3705C7_4_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0xD7E5EE0)
#define CLASS_1_E2FB7E5A9E3705C7_4_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD7E5ED0)
#define CLASS_1_E2FB7E5A9E3705C7_4_SET_CONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xD7E5EB0)
#define CLASS_1_E2FB7E5A9E3705C7_4_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xD7E5E90)
#define CLASS_1_E2FB7E5A9E3705C7_4_SET_TRID_OFFSET UNITYSDK_OFFSET(0xD7E5E70)
#define CLASS_1_E2FB7E5A9E3705C7_4_SET_VOICEID_OFFSET UNITYSDK_OFFSET(0xD7E5EF0)
#define CLASS_1_E2FB7E5A9E3705C7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E5F00)

inline static constexpr unsigned int Class_1_E2FB7E5A9E3705C7_4_TypeDefinitionIndex = 80394;

class Class_1_E2FB7E5A9E3705C7_4 : public ::System::Object
{
public:
	::System::String* _AvatarIconPath_k__BackingField; // 0x10
	::System::UInt32 _VoiceID_k__BackingField; // 0x18
	::System::UInt32 _TrID_k__BackingField; // 0x1C
	::RPG::Client::TextID _TitleText_k__BackingField; // 0x20
	::RPG::Client::TextID _ContentText_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_TrID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_GET_TRID_OFFSET))(this);
	}

	::System::Void set_TrID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_SET_TRID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_TitleText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_GET_TITLETEXT_OFFSET))(this);
	}

	::System::Void set_TitleText(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_SET_TITLETEXT_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ContentText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_GET_CONTENTTEXT_OFFSET))(this);
	}

	::System::Void set_ContentText(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_SET_CONTENTTEXT_OFFSET))(this, a1);
	}

	::System::String* get_AvatarIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_GET_AVATARICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_SET_AVATARICONPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_VoiceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_GET_VOICEID_OFFSET))(this);
	}

	::System::Void set_VoiceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2FB7E5A9E3705C7_4_SET_VOICEID_OFFSET))(this, a1);
	}
};
