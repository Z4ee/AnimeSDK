#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7237858DE9116C90_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF8C0)
#define CLASS_1_7237858DE9116C90_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x15CBF840)
#define CLASS_1_7237858DE9116C90_GET_AVATARMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF900)
#define CLASS_1_7237858DE9116C90_GET_AVATARSHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF8E0)
#define CLASS_1_7237858DE9116C90_GET_AVATARTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF920)
#define CLASS_1_7237858DE9116C90_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x15CBF8A0)
#define CLASS_1_7237858DE9116C90_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15CBF880)
#define CLASS_1_7237858DE9116C90_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15CBF860)
#define CLASS_1_7237858DE9116C90_GET_SORTINDEX_OFFSET UNITYSDK_OFFSET(0x15CBF940)
#define CLASS_1_7237858DE9116C90_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF8D0)
#define CLASS_1_7237858DE9116C90_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x15CBF850)
#define CLASS_1_7237858DE9116C90_SET_AVATARMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF910)
#define CLASS_1_7237858DE9116C90_SET_AVATARSHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF8F0)
#define CLASS_1_7237858DE9116C90_SET_AVATARTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x15CBF930)
#define CLASS_1_7237858DE9116C90_SET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x15CBF8B0)
#define CLASS_1_7237858DE9116C90_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15CBF890)
#define CLASS_1_7237858DE9116C90_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x15CBF870)
#define CLASS_1_7237858DE9116C90_SET_SORTINDEX_OFFSET UNITYSDK_OFFSET(0x15CBF950)
#define CLASS_1_7237858DE9116C90__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBF960)

inline static constexpr unsigned int Class_1_7237858DE9116C90_TypeDefinitionIndex = 62688;

class Class_1_7237858DE9116C90 : public ::System::Object
{
public:
	::System::String* _AvatarTeamIconPath_k__BackingField; // 0x10
	::System::String* _AvatarIconPath_k__BackingField; // 0x18
	::System::String* _AvatarMiniIconPath_k__BackingField; // 0x20
	::System::String* _AvatarShopIconPath_k__BackingField; // 0x28
	::System::UInt32 _AvatarID_k__BackingField; // 0x30
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x34
	::System::UInt32 _Rarity_k__BackingField; // 0x38
	::RPG::GameCore::AvatarBaseType _BaseType_k__BackingField; // 0x3C
	::System::UInt32 _SortIndex_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Rarity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_RARITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarBaseType get_BaseType()
	{
		return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_BASETYPE_OFFSET))(this);
	}

	::System::Void set_BaseType(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_BASETYPE_OFFSET))(this, a1);
	}

	::System::String* get_AvatarIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_AVATARICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_AVATARICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_AvatarShopIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_AVATARSHOPICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarShopIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_AVATARSHOPICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_AvatarMiniIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_AVATARMINIICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarMiniIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_AVATARMINIICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_AvatarTeamIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_AVATARTEAMICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarTeamIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_AVATARTEAMICONPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_SortIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_GET_SORTINDEX_OFFSET))(this);
	}

	::System::Void set_SortIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7237858DE9116C90_SET_SORTINDEX_OFFSET))(this, a1);
	}
};
