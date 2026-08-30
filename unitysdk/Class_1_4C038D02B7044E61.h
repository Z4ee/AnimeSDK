#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C038D02B7044E61_GET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x11603910)
#define CLASS_1_4C038D02B7044E61_GET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0x11603850)
#define CLASS_1_4C038D02B7044E61_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x11603790)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x11603950)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0x11603890)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0x11603930)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x11603870)
#define CLASS_1_4C038D02B7044E61_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x116037D0)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x116038D0)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11603810)
#define CLASS_1_4C038D02B7044E61_GET_NAME_OFFSET UNITYSDK_OFFSET(0x116037B0)
#define CLASS_1_4C038D02B7044E61_GET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0x116037F0)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x116038F0)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11603830)
#define CLASS_1_4C038D02B7044E61_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x116038B0)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x11603920)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0x11603860)
#define CLASS_1_4C038D02B7044E61_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x116037A0)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x11603960)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0x116038A0)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0x11603940)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x11603880)
#define CLASS_1_4C038D02B7044E61_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x116037E0)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x116038E0)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11603820)
#define CLASS_1_4C038D02B7044E61_SET_NAME_OFFSET UNITYSDK_OFFSET(0x116037C0)
#define CLASS_1_4C038D02B7044E61_SET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0x11603800)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x11603900)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11603840)
#define CLASS_1_4C038D02B7044E61_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x116038C0)
#define CLASS_1_4C038D02B7044E61__CTOR_OFFSET UNITYSDK_OFFSET(0x11603970)

inline static constexpr unsigned int Class_1_4C038D02B7044E61_TypeDefinitionIndex = 79447;

class Class_1_4C038D02B7044E61 : public ::System::Object
{
public:
	::System::String* _PhotoIconPath_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::RPG::Client::TextID _HouguIntro_k__BackingField; // 0x20
	::RPG::Client::TextID _SubAttribute_k__BackingField; // 0x30
	::RPG::Client::TextID _Name_k__BackingField; // 0x40
	::RPG::Client::TextID _MainAttribute_k__BackingField; // 0x50
	::RPG::Client::TextID _MainAttributeUpdated_k__BackingField; // 0x60
	::RPG::Client::TextID _HouguName_k__BackingField; // 0x70
	::RPG::Client::TextID _HouguIntroUpdated_k__BackingField; // 0x80
	::RPG::Client::TextID _AvatarIntroUpdated_k__BackingField; // 0x90
	::RPG::Client::TextID _SubAttributeUpdated_k__BackingField; // 0xA0
	::RPG::GameCore::FateRinCaseBoardAvatarType _AvatarType_k__BackingField; // 0xB0
	::System::UInt32 _SubMissionID_k__BackingField; // 0xB4
	::RPG::Client::TextID _AvatarIntro_k__BackingField; // 0xB8
	::RPG::Client::TextID _HouguNameUpdated_k__BackingField; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateRinCaseBoardAvatarType get_AvatarType()
	{
		return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_AVATARTYPE_OFFSET))(this);
	}

	::System::Void set_AvatarType(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_AVATARTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_PhotoIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_PHOTOICONPATH_OFFSET))(this);
	}

	::System::Void set_PhotoIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_PHOTOICONPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_MainAttribute()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTE_OFFSET))(this);
	}

	::System::Void set_MainAttribute(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SubAttribute()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTE_OFFSET))(this);
	}

	::System::Void set_SubAttribute(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_AvatarIntro()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_AVATARINTRO_OFFSET))(this);
	}

	::System::Void set_AvatarIntro(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_AVATARINTRO_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_HouguName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_HOUGUNAME_OFFSET))(this);
	}

	::System::Void set_HouguName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_HOUGUNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_HouguIntro()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_HOUGUINTRO_OFFSET))(this);
	}

	::System::Void set_HouguIntro(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_HOUGUINTRO_OFFSET))(this, a1);
	}

	::System::UInt32 get_SubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_SUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_SubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_SUBMISSIONID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_MainAttributeUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTEUPDATED_OFFSET))(this);
	}

	::System::Void set_MainAttributeUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTEUPDATED_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SubAttributeUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTEUPDATED_OFFSET))(this);
	}

	::System::Void set_SubAttributeUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTEUPDATED_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_AvatarIntroUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_AVATARINTROUPDATED_OFFSET))(this);
	}

	::System::Void set_AvatarIntroUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_AVATARINTROUPDATED_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_HouguNameUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_HOUGUNAMEUPDATED_OFFSET))(this);
	}

	::System::Void set_HouguNameUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_HOUGUNAMEUPDATED_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_HouguIntroUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_GET_HOUGUINTROUPDATED_OFFSET))(this);
	}

	::System::Void set_HouguIntroUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4C038D02B7044E61_SET_HOUGUINTROUPDATED_OFFSET))(this, a1);
	}
};
