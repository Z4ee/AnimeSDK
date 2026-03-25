#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_5.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_16D8E68BCE885505_1_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xDE3E740)
#define CLASS_1_16D8E68BCE885505_1_GET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDE3E620)
#define CLASS_1_16D8E68BCE885505_1_GET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xDE3E640)
#define CLASS_1_16D8E68BCE885505_1_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xDE3E680)
#define CLASS_1_16D8E68BCE885505_1_GET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDE3E6E0)
#define CLASS_1_16D8E68BCE885505_1_GET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xDE3E700)
#define CLASS_1_16D8E68BCE885505_1_GET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE3E6C0)
#define CLASS_1_16D8E68BCE885505_1_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE3E720)
#define CLASS_1_16D8E68BCE885505_1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE3E7A0)
#define CLASS_1_16D8E68BCE885505_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE3E5F0)
#define CLASS_1_16D8E68BCE885505_1_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xDE3E780)
#define CLASS_1_16D8E68BCE885505_1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDE3E6A0)
#define CLASS_1_16D8E68BCE885505_1_GET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xDE3E7E0)
#define CLASS_1_16D8E68BCE885505_1_GET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xDE3E7C0)
#define CLASS_1_16D8E68BCE885505_1_GET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xDE3E760)
#define CLASS_1_16D8E68BCE885505_1_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE3E660)
#define CLASS_1_16D8E68BCE885505_1_GET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xDE3E840)
#define CLASS_1_16D8E68BCE885505_1_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE3E820)
#define CLASS_1_16D8E68BCE885505_1_GET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xDE3E800)
#define CLASS_1_16D8E68BCE885505_1_GET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDE3E860)
#define CLASS_1_16D8E68BCE885505_1_GET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xDE3E880)
#define CLASS_1_16D8E68BCE885505_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDE3E600)
#define CLASS_1_16D8E68BCE885505_1_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0xDE3E8B0)
#define CLASS_1_16D8E68BCE885505_1_METHOD_1_968A0A3968F0CFCB_OFFSET UNITYSDK_OFFSET(0xDE3E900)
#define CLASS_1_16D8E68BCE885505_1_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xDE3E750)
#define CLASS_1_16D8E68BCE885505_1_SET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDE3E630)
#define CLASS_1_16D8E68BCE885505_1_SET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xDE3E650)
#define CLASS_1_16D8E68BCE885505_1_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xDE3E690)
#define CLASS_1_16D8E68BCE885505_1_SET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDE3E6F0)
#define CLASS_1_16D8E68BCE885505_1_SET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xDE3E710)
#define CLASS_1_16D8E68BCE885505_1_SET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE3E6D0)
#define CLASS_1_16D8E68BCE885505_1_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE3E730)
#define CLASS_1_16D8E68BCE885505_1_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE3E7B0)
#define CLASS_1_16D8E68BCE885505_1_SET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xDE3E790)
#define CLASS_1_16D8E68BCE885505_1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDE3E6B0)
#define CLASS_1_16D8E68BCE885505_1_SET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xDE3E7F0)
#define CLASS_1_16D8E68BCE885505_1_SET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xDE3E7D0)
#define CLASS_1_16D8E68BCE885505_1_SET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xDE3E770)
#define CLASS_1_16D8E68BCE885505_1_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE3E670)
#define CLASS_1_16D8E68BCE885505_1_SET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xDE3E850)
#define CLASS_1_16D8E68BCE885505_1_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE3E830)
#define CLASS_1_16D8E68BCE885505_1_SET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xDE3E810)
#define CLASS_1_16D8E68BCE885505_1_SET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDE3E870)
#define CLASS_1_16D8E68BCE885505_1_SET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xDE3E890)
#define CLASS_1_16D8E68BCE885505_1_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xDE3E610)
#define CLASS_1_16D8E68BCE885505_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3E8A0)

inline static constexpr unsigned int Class_1_16D8E68BCE885505_1_TypeDefinitionIndex = 42009;

class Class_1_16D8E68BCE885505_1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _AddProperties_k__BackingField; // 0x10
	::System::String* _PointDesc_k__BackingField; // 0x18
	::Il2CppArray<::System::UInt32>* _AddSkillLevels_k__BackingField; // 0x20
	::System::String* _AbilityName_k__BackingField; // 0x28
	::System::String* _SpecialAvatarImagePath_k__BackingField; // 0x30
	::Il2CppArray<::System::UInt32>* _PrePoint_k__BackingField; // 0x38
	::System::String* _SimplePointDesc_k__BackingField; // 0x40
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _MaterialList_k__BackingField; // 0x48
	::System::String* _IconPath_k__BackingField; // 0x50
	::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList_k__BackingField; // 0x58
	::System::String* _PointName_k__BackingField; // 0x60
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x68
	::System::UInt32 _AvatarPromotionLimit_k__BackingField; // 0x70
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x74
	::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x7C
	::System::UInt32 _SpecialShowSkill_k__BackingField; // 0x80
	::System::UInt32 _MaxLevel_k__BackingField; // 0x84
	::RPG::GameCore::AvatarSkillTreePointType _Type_k__BackingField; // 0x88
	::Struct_2_019938BC9C50B169_5 _Identifier_k__BackingField; // 0x8C
	::System::Boolean _DefaultUnlock_k__BackingField; // 0x94
	::System::UInt32 _AvatarLevelLimit_k__BackingField; // 0x98
	::System::UInt32 _RecommendPriority_k__BackingField; // 0x9C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_5))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_5 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::RPG::GameCore::AvatarSkillTreePointType get_Type()
	{
		return ((::RPG::GameCore::AvatarSkillTreePointType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AvatarSkillTreePointType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_TYPE_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AddProperties()
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ADDPROPERTIES_OFFSET))(this);
	}

	::System::Void set_AddProperties(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ADDPROPERTIES_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_AddSkillLevels()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ADDSKILLLEVELS_OFFSET))(this);
	}

	::System::Void set_AddSkillLevels(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ADDSKILLLEVELS_OFFSET))(this, value);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ANCHORTYPE_OFFSET))(this);
	}

	::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ANCHORTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::Boolean get_DefaultUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_DEFAULTUNLOCK_OFFSET))(this);
	}

	::System::Void set_DefaultUnlock(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_DEFAULTUNLOCK_OFFSET))(this, value);
	}

	::System::UInt32 get_AvatarLevelLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_AVATARLEVELLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarLevelLimit(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_AVATARLEVELLIMIT_OFFSET))(this, value);
	}

	::System::UInt32 get_AvatarPromotionLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_AVATARPROMOTIONLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarPromotionLimit(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_AVATARPROMOTIONLIMIT_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_EXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::System::String* get_AbilityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ABILITYNAME_OFFSET))(this);
	}

	::System::Void set_AbilityName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ABILITYNAME_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_PrePoint()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_PREPOINT_OFFSET))(this);
	}

	::System::Void set_PrePoint(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_PREPOINT_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_MATERIALLIST_OFFSET))(this);
	}

	::System::Void set_MaterialList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_MATERIALLIST_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::String* get_PointName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_POINTNAME_OFFSET))(this);
	}

	::System::Void set_PointName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_POINTNAME_OFFSET))(this, value);
	}

	::System::String* get_PointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_POINTDESC_OFFSET))(this);
	}

	::System::Void set_PointDesc(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_POINTDESC_OFFSET))(this, value);
	}

	::System::String* get_SimplePointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SIMPLEPOINTDESC_OFFSET))(this);
	}

	::System::Void set_SimplePointDesc(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SIMPLEPOINTDESC_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_SimpleExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::System::UInt32 get_RecommendPriority()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_RECOMMENDPRIORITY_OFFSET))(this);
	}

	::System::Void set_RecommendPriority(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_RECOMMENDPRIORITY_OFFSET))(this, value);
	}

	::System::String* get_SpecialAvatarImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SPECIALAVATARIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialAvatarImagePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SPECIALAVATARIMAGEPATH_OFFSET))(this, value);
	}

	::System::UInt32 get_SpecialShowSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SPECIALSHOWSKILL_OFFSET))(this);
	}

	::System::Void set_SpecialShowSkill(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SPECIALSHOWSKILL_OFFSET))(this, value);
	}

	::Struct_2_BAC064D277DD99F1 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::System::UInt32 Method_1_968A0A3968F0CFCB(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_METHOD_1_968A0A3968F0CFCB_OFFSET))(this, a1);
	}
};
