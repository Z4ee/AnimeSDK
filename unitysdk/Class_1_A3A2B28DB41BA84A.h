#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointType.h"
#include "unitysdk/Struct_2_276321B6B122C69C_2.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_A3A2B28DB41BA84A_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xA8C6950)
#define CLASS_1_A3A2B28DB41BA84A_GET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA8C6830)
#define CLASS_1_A3A2B28DB41BA84A_GET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xA8C6850)
#define CLASS_1_A3A2B28DB41BA84A_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xA8C6890)
#define CLASS_1_A3A2B28DB41BA84A_GET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xA8C68F0)
#define CLASS_1_A3A2B28DB41BA84A_GET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA8C6910)
#define CLASS_1_A3A2B28DB41BA84A_GET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8C68D0)
#define CLASS_1_A3A2B28DB41BA84A_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA8C6930)
#define CLASS_1_A3A2B28DB41BA84A_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA8C69B0)
#define CLASS_1_A3A2B28DB41BA84A_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA8C6800)
#define CLASS_1_A3A2B28DB41BA84A_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xA8C6990)
#define CLASS_1_A3A2B28DB41BA84A_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA8C68B0)
#define CLASS_1_A3A2B28DB41BA84A_GET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xA8C69F0)
#define CLASS_1_A3A2B28DB41BA84A_GET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xA8C69D0)
#define CLASS_1_A3A2B28DB41BA84A_GET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xA8C6970)
#define CLASS_1_A3A2B28DB41BA84A_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA8C6870)
#define CLASS_1_A3A2B28DB41BA84A_GET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xA8C6A50)
#define CLASS_1_A3A2B28DB41BA84A_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA8C6A30)
#define CLASS_1_A3A2B28DB41BA84A_GET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xA8C6A10)
#define CLASS_1_A3A2B28DB41BA84A_GET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA8C6A70)
#define CLASS_1_A3A2B28DB41BA84A_GET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xA8C6A90)
#define CLASS_1_A3A2B28DB41BA84A_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA8C6810)
#define CLASS_1_A3A2B28DB41BA84A_METHOD_1_4CA8B5F8462FA46F_OFFSET UNITYSDK_OFFSET(0xA8C6B80)
#define CLASS_1_A3A2B28DB41BA84A_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0xA8C6AC0)
#define CLASS_1_A3A2B28DB41BA84A_METHOD_1_968A0A3968F0CFCB_OFFSET UNITYSDK_OFFSET(0xA8C6B10)
#define CLASS_1_A3A2B28DB41BA84A_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xA8C6960)
#define CLASS_1_A3A2B28DB41BA84A_SET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA8C6840)
#define CLASS_1_A3A2B28DB41BA84A_SET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xA8C6860)
#define CLASS_1_A3A2B28DB41BA84A_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xA8C68A0)
#define CLASS_1_A3A2B28DB41BA84A_SET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xA8C6900)
#define CLASS_1_A3A2B28DB41BA84A_SET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA8C6920)
#define CLASS_1_A3A2B28DB41BA84A_SET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8C68E0)
#define CLASS_1_A3A2B28DB41BA84A_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA8C6940)
#define CLASS_1_A3A2B28DB41BA84A_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA8C69C0)
#define CLASS_1_A3A2B28DB41BA84A_SET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xA8C69A0)
#define CLASS_1_A3A2B28DB41BA84A_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA8C68C0)
#define CLASS_1_A3A2B28DB41BA84A_SET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xA8C6A00)
#define CLASS_1_A3A2B28DB41BA84A_SET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xA8C69E0)
#define CLASS_1_A3A2B28DB41BA84A_SET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xA8C6980)
#define CLASS_1_A3A2B28DB41BA84A_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA8C6880)
#define CLASS_1_A3A2B28DB41BA84A_SET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xA8C6A60)
#define CLASS_1_A3A2B28DB41BA84A_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA8C6A40)
#define CLASS_1_A3A2B28DB41BA84A_SET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xA8C6A20)
#define CLASS_1_A3A2B28DB41BA84A_SET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA8C6A80)
#define CLASS_1_A3A2B28DB41BA84A_SET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xA8C6AA0)
#define CLASS_1_A3A2B28DB41BA84A_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA8C6820)
#define CLASS_1_A3A2B28DB41BA84A__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C6AB0)

inline static constexpr unsigned int Class_1_A3A2B28DB41BA84A_TypeDefinitionIndex = 48601;

class Class_1_A3A2B28DB41BA84A : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::String* _AbilityName_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _MaterialList_k__BackingField; // 0x28
	::System::String* _SimplePointDesc_k__BackingField; // 0x30
	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _AddProperties_k__BackingField; // 0x38
	::System::String* _SpecialAvatarImagePath_k__BackingField; // 0x40
	::Il2CppArray<::System::UInt32>* _PrePoint_k__BackingField; // 0x48
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x50
	::Il2CppArray<::System::UInt32>* _AddSkillLevels_k__BackingField; // 0x58
	::System::String* _PointName_k__BackingField; // 0x60
	::System::String* _PointDesc_k__BackingField; // 0x68
	::System::Boolean _DefaultUnlock_k__BackingField; // 0x70
	::System::UInt32 _AvatarLevelLimit_k__BackingField; // 0x74
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x78
	::RPG::GameCore::AvatarSkillTreePointType _Type_k__BackingField; // 0x80
	::System::UInt32 _MaxLevel_k__BackingField; // 0x84
	::System::UInt32 _SpecialShowSkill_k__BackingField; // 0x88
	::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x8C
	::System::UInt32 _RecommendPriority_k__BackingField; // 0x90
	::Struct_2_276321B6B122C69C_2 _Identifier_k__BackingField; // 0x94
	::System::UInt32 _AvatarPromotionLimit_k__BackingField; // 0x9C

	::System::Void _ctor(::Struct_2_276321B6B122C69C_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_2))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_276321B6B122C69C_2 get_Identifier()
	{
		return ((::Struct_2_276321B6B122C69C_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_IDENTIFIER_OFFSET))(this);
	}

	::RPG::GameCore::AvatarSkillTreePointType get_Type()
	{
		return ((::RPG::GameCore::AvatarSkillTreePointType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AvatarSkillTreePointType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointType))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_TYPE_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AddProperties()
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_ADDPROPERTIES_OFFSET))(this);
	}

	::System::Void set_AddProperties(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_ADDPROPERTIES_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_AddSkillLevels()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_ADDSKILLLEVELS_OFFSET))(this);
	}

	::System::Void set_AddSkillLevels(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_ADDSKILLLEVELS_OFFSET))(this, a1);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_ANCHORTYPE_OFFSET))(this);
	}

	::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_ANCHORTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::System::Boolean get_DefaultUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_DEFAULTUNLOCK_OFFSET))(this);
	}

	::System::Void set_DefaultUnlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_DEFAULTUNLOCK_OFFSET))(this, a1);
	}

	::System::UInt32 get_AvatarLevelLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_AVATARLEVELLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarLevelLimit(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_AVATARLEVELLIMIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_AvatarPromotionLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_AVATARPROMOTIONLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarPromotionLimit(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_AVATARPROMOTIONLIMIT_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
	}

	::System::String* get_AbilityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_ABILITYNAME_OFFSET))(this);
	}

	::System::Void set_AbilityName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_ABILITYNAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_PrePoint()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_PREPOINT_OFFSET))(this);
	}

	::System::Void set_PrePoint(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_PREPOINT_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_MATERIALLIST_OFFSET))(this);
	}

	::System::Void set_MaterialList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_MATERIALLIST_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_PointName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_POINTNAME_OFFSET))(this);
	}

	::System::Void set_PointName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_POINTNAME_OFFSET))(this, a1);
	}

	::System::String* get_PointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_POINTDESC_OFFSET))(this);
	}

	::System::Void set_PointDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_POINTDESC_OFFSET))(this, a1);
	}

	::System::String* get_SimplePointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_SIMPLEPOINTDESC_OFFSET))(this);
	}

	::System::Void set_SimplePointDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_SIMPLEPOINTDESC_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_SimpleExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_RecommendPriority()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_RECOMMENDPRIORITY_OFFSET))(this);
	}

	::System::Void set_RecommendPriority(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_RECOMMENDPRIORITY_OFFSET))(this, a1);
	}

	::System::String* get_SpecialAvatarImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_SPECIALAVATARIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialAvatarImagePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_SPECIALAVATARIMAGEPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpecialShowSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_GET_SPECIALSHOWSKILL_OFFSET))(this);
	}

	::System::Void set_SpecialShowSkill(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_SET_SPECIALSHOWSKILL_OFFSET))(this, a1);
	}

	::Struct_2_BAC064D277DD99F1 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::System::UInt32 Method_1_968A0A3968F0CFCB(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_METHOD_1_968A0A3968F0CFCB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_4CA8B5F8462FA46F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3A2B28DB41BA84A_METHOD_1_4CA8B5F8462FA46F_OFFSET))(this);
	}
};
