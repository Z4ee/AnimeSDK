#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_3E8412A97A3D0DF7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5C85CC607D791BFF_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xED78560)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLEXTRAEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xED78600)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xED78610)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xED78540)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xED78580)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xED785A0)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xED785E0)
#define CLASS_1_5C85CC607D791BFF_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xED785C0)
#define CLASS_1_5C85CC607D791BFF_GET_ULTRASKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xED78630)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xED78570)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xED78620)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xED78550)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xED78590)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xED785B0)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xED785F0)
#define CLASS_1_5C85CC607D791BFF_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xED785D0)
#define CLASS_1_5C85CC607D791BFF_SET_ULTRASKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xED78640)
#define CLASS_1_5C85CC607D791BFF__CTOR_OFFSET UNITYSDK_OFFSET(0xED78650)

inline static constexpr unsigned int Class_1_5C85CC607D791BFF_TypeDefinitionIndex = 79501;

class Class_1_5C85CC607D791BFF : public ::System::Object
{
public:
	::System::String* _SkillIconPath_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_3E8412A97A3D0DF7*>* _SkillExtraEffectList_k__BackingField; // 0x18
	::System::String* _SkillSimpleDesc_k__BackingField; // 0x20
	::System::String* _UltraSkillIconPath_k__BackingField; // 0x28
	::System::String* _SkillDesc_k__BackingField; // 0x30
	::RPG::Client::TextID _SkillName_k__BackingField; // 0x38
	::RPG::Client::TextID _SkillType_k__BackingField; // 0x48
	::RPG::Client::TextID _SkillTag_k__BackingField; // 0x58
	::UnityEngine::Color _SkillTypeColor_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID get_SkillName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLNAME_OFFSET))(this);
	}

	::System::Void set_SkillName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLNAME_OFFSET))(this, a1);
	}

	::System::String* get_SkillDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLDESC_OFFSET))(this);
	}

	::System::Void set_SkillDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLDESC_OFFSET))(this, a1);
	}

	::System::String* get_SkillSimpleDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLSIMPLEDESC_OFFSET))(this);
	}

	::System::Void set_SkillSimpleDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLSIMPLEDESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SkillTag()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLTAG_OFFSET))(this);
	}

	::System::Void set_SkillTag(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLTAG_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SkillType()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLTYPE_OFFSET))(this);
	}

	::System::Void set_SkillType(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLTYPE_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_SkillTypeColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLTYPECOLOR_OFFSET))(this);
	}

	::System::Void set_SkillTypeColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLTYPECOLOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_3E8412A97A3D0DF7*>* get_SkillExtraEffectList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3E8412A97A3D0DF7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLEXTRAEFFECTLIST_OFFSET))(this);
	}

	::System::String* get_SkillIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_SKILLICONPATH_OFFSET))(this);
	}

	::System::Void set_SkillIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_SKILLICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_UltraSkillIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_GET_ULTRASKILLICONPATH_OFFSET))(this);
	}

	::System::Void set_UltraSkillIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C85CC607D791BFF_SET_ULTRASKILLICONPATH_OFFSET))(this, a1);
	}
};
