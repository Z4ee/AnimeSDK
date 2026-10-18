#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C038D02B7044E61_GET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156B0)
#define CLASS_1_4C038D02B7044E61_GET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0xC0155F0)
#define CLASS_1_4C038D02B7044E61_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC015530)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156F0)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0xC015630)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156D0)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0xC015610)
#define CLASS_1_4C038D02B7044E61_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC015570)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0xC015670)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xC0155B0)
#define CLASS_1_4C038D02B7044E61_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC015550)
#define CLASS_1_4C038D02B7044E61_GET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0xC015590)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0xC015690)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xC0155D0)
#define CLASS_1_4C038D02B7044E61_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC015650)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156C0)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0xC015600)
#define CLASS_1_4C038D02B7044E61_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC015540)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0xC015700)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0xC015640)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156E0)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0xC015620)
#define CLASS_1_4C038D02B7044E61_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC015580)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0xC015680)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xC0155C0)
#define CLASS_1_4C038D02B7044E61_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC015560)
#define CLASS_1_4C038D02B7044E61_SET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0xC0155A0)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0xC0156A0)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xC0155E0)
#define CLASS_1_4C038D02B7044E61_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC015660)
#define CLASS_1_4C038D02B7044E61__CTOR_OFFSET UNITYSDK_OFFSET(0xC015710)

inline static constexpr unsigned int Class_1_4C038D02B7044E61_TypeDefinitionIndex = 80772;

class Class_1_4C038D02B7044E61 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::String* _PhotoIconPath_k__BackingField; // 0x18
	::RPG::Client::TextID _SubAttributeUpdated_k__BackingField; // 0x20
	::RPG::Client::TextID _HouguIntro_k__BackingField; // 0x30
	::RPG::Client::TextID _MainAttribute_k__BackingField; // 0x40
	::System::UInt32 _SubMissionID_k__BackingField; // 0x50
	::RPG::GameCore::FateRinCaseBoardAvatarType _AvatarType_k__BackingField; // 0x54
	::RPG::Client::TextID _SubAttribute_k__BackingField; // 0x58
	::RPG::Client::TextID _HouguName_k__BackingField; // 0x68
	::RPG::Client::TextID _AvatarIntro_k__BackingField; // 0x78
	::RPG::Client::TextID _HouguNameUpdated_k__BackingField; // 0x88
	::RPG::Client::TextID _MainAttributeUpdated_k__BackingField; // 0x98
	::RPG::Client::TextID _AvatarIntroUpdated_k__BackingField; // 0xA8
	::RPG::Client::TextID _Name_k__BackingField; // 0xB8
	::RPG::Client::TextID _HouguIntroUpdated_k__BackingField; // 0xC8

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
