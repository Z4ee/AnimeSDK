#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C038D02B7044E61_GET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E30)
#define CLASS_1_4C038D02B7044E61_GET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0x177D2D70)
#define CLASS_1_4C038D02B7044E61_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x177D2CB0)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E70)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0x177D2DB0)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E50)
#define CLASS_1_4C038D02B7044E61_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x177D2D90)
#define CLASS_1_4C038D02B7044E61_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x177D2CF0)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2DF0)
#define CLASS_1_4C038D02B7044E61_GET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177D2D30)
#define CLASS_1_4C038D02B7044E61_GET_NAME_OFFSET UNITYSDK_OFFSET(0x177D2CD0)
#define CLASS_1_4C038D02B7044E61_GET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0x177D2D10)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E10)
#define CLASS_1_4C038D02B7044E61_GET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177D2D50)
#define CLASS_1_4C038D02B7044E61_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x177D2DD0)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E40)
#define CLASS_1_4C038D02B7044E61_SET_AVATARINTRO_OFFSET UNITYSDK_OFFSET(0x177D2D80)
#define CLASS_1_4C038D02B7044E61_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x177D2CC0)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTROUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E80)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUINTRO_OFFSET UNITYSDK_OFFSET(0x177D2DC0)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAMEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E60)
#define CLASS_1_4C038D02B7044E61_SET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x177D2DA0)
#define CLASS_1_4C038D02B7044E61_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x177D2D00)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E00)
#define CLASS_1_4C038D02B7044E61_SET_MAINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177D2D40)
#define CLASS_1_4C038D02B7044E61_SET_NAME_OFFSET UNITYSDK_OFFSET(0x177D2CE0)
#define CLASS_1_4C038D02B7044E61_SET_PHOTOICONPATH_OFFSET UNITYSDK_OFFSET(0x177D2D20)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTEUPDATED_OFFSET UNITYSDK_OFFSET(0x177D2E20)
#define CLASS_1_4C038D02B7044E61_SET_SUBATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x177D2D60)
#define CLASS_1_4C038D02B7044E61_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x177D2DE0)
#define CLASS_1_4C038D02B7044E61__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2E90)

inline static constexpr unsigned int Class_1_4C038D02B7044E61_TypeDefinitionIndex = 75814;

class Class_1_4C038D02B7044E61 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::String* _PhotoIconPath_k__BackingField; // 0x18
	::RPG::Client::TextID _MainAttribute_k__BackingField; // 0x20
	::RPG::Client::TextID _HouguName_k__BackingField; // 0x30
	::RPG::Client::TextID _SubAttributeUpdated_k__BackingField; // 0x40
	::RPG::Client::TextID _Name_k__BackingField; // 0x50
	::RPG::Client::TextID _HouguNameUpdated_k__BackingField; // 0x60
	::RPG::GameCore::FateRinCaseBoardAvatarType _AvatarType_k__BackingField; // 0x70
	::System::UInt32 _SubMissionID_k__BackingField; // 0x74
	::RPG::Client::TextID _AvatarIntroUpdated_k__BackingField; // 0x78
	::RPG::Client::TextID _MainAttributeUpdated_k__BackingField; // 0x88
	::RPG::Client::TextID _HouguIntroUpdated_k__BackingField; // 0x98
	::RPG::Client::TextID _SubAttribute_k__BackingField; // 0xA8
	::RPG::Client::TextID _AvatarIntro_k__BackingField; // 0xB8
	::RPG::Client::TextID _HouguIntro_k__BackingField; // 0xC8

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
