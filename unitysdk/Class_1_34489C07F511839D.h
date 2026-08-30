#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_35B5591E4067D7D2;
class Class_1_A3A2B28DB41BA84A_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_34489C07F511839D_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15991980)
#define CLASS_1_34489C07F511839D_GET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15991AC0)
#define CLASS_1_34489C07F511839D_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15991900)
#define CLASS_1_34489C07F511839D_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15991B80)
#define CLASS_1_34489C07F511839D_GET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15991A80)
#define CLASS_1_34489C07F511839D_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15991940)
#define CLASS_1_34489C07F511839D_GET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15991A20)
#define CLASS_1_34489C07F511839D_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x159918D0)
#define CLASS_1_34489C07F511839D_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x159919C0)
#define CLASS_1_34489C07F511839D_GET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15991A60)
#define CLASS_1_34489C07F511839D_GET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15991A40)
#define CLASS_1_34489C07F511839D_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15991A00)
#define CLASS_1_34489C07F511839D_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15991920)
#define CLASS_1_34489C07F511839D_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x159919E0)
#define CLASS_1_34489C07F511839D_GET_PATH_OFFSET UNITYSDK_OFFSET(0x159918E0)
#define CLASS_1_34489C07F511839D_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x159919A0)
#define CLASS_1_34489C07F511839D_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15991AA0)
#define CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15991B40)
#define CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15991B20)
#define CLASS_1_34489C07F511839D_GET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15991B60)
#define CLASS_1_34489C07F511839D_GET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15991AE0)
#define CLASS_1_34489C07F511839D_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15991B00)
#define CLASS_1_34489C07F511839D_GET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15991960)
#define CLASS_1_34489C07F511839D_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15991990)
#define CLASS_1_34489C07F511839D_SET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15991AD0)
#define CLASS_1_34489C07F511839D_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15991910)
#define CLASS_1_34489C07F511839D_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15991B90)
#define CLASS_1_34489C07F511839D_SET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15991A90)
#define CLASS_1_34489C07F511839D_SET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15991950)
#define CLASS_1_34489C07F511839D_SET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15991A30)
#define CLASS_1_34489C07F511839D_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x159919D0)
#define CLASS_1_34489C07F511839D_SET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15991A70)
#define CLASS_1_34489C07F511839D_SET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15991A50)
#define CLASS_1_34489C07F511839D_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15991A10)
#define CLASS_1_34489C07F511839D_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15991930)
#define CLASS_1_34489C07F511839D_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x159919F0)
#define CLASS_1_34489C07F511839D_SET_PATH_OFFSET UNITYSDK_OFFSET(0x159918F0)
#define CLASS_1_34489C07F511839D_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x159919B0)
#define CLASS_1_34489C07F511839D_SET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15991AB0)
#define CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15991B50)
#define CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15991B30)
#define CLASS_1_34489C07F511839D_SET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15991B70)
#define CLASS_1_34489C07F511839D_SET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15991AF0)
#define CLASS_1_34489C07F511839D_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15991B10)
#define CLASS_1_34489C07F511839D_SET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15991970)
#define CLASS_1_34489C07F511839D__CTOR_OFFSET UNITYSDK_OFFSET(0x15991BA0)

inline static constexpr unsigned int Class_1_34489C07F511839D_TypeDefinitionIndex = 52263;

class Class_1_34489C07F511839D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* _DefaultUnlockTraceNodeProfiles_k__BackingField; // 0x10
	::System::String* _VOTag_k__BackingField; // 0x18
	::Class_1_35B5591E4067D7D2* _Path_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _EidolonIDs_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _SkillIDs_k__BackingField; // 0x30
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* _TraceAnchorTypes_k__BackingField; // 0x38
	::System::String* _SpecialUltraSkillResourcePath_k__BackingField; // 0x40
	::System::String* _TraceTreePrefabPath_k__BackingField; // 0x48
	::Class_1_A3A2B28DB41BA84A_1* _DamageType_k__BackingField; // 0x50
	::System::String* _AIConfigPath_k__BackingField; // 0x58
	::System::String* _JsonConfigPath_k__BackingField; // 0x60
	::RPG::Client::TextID _EnglishName_k__BackingField; // 0x68
	::RPG::Client::TextID _Name_k__BackingField; // 0x78
	::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x88
	::System::UInt32 _NatureID_k__BackingField; // 0x8C
	::Struct_2_BC950E36747FB4C9 _Identifier_k__BackingField; // 0x90
	::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0x98
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0xA0
	::System::UInt32 _MaxPromotionLevel_k__BackingField; // 0xA8
	::RPG::GameCore::CombatPowerAvatarRarityType _Rarity_k__BackingField; // 0xAC
	::RPG::Client::TextID _SpecialUltraSkillEnergyLackTips_k__BackingField; // 0xB0
	::System::UInt32 _ExpGroup_k__BackingField; // 0xC0
	::System::UInt32 _MaxEidolonLevel_k__BackingField; // 0xC4

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_BC950E36747FB4C9 get_Identifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_1_35B5591E4067D7D2* get_Path()
	{
		return ((::Class_1_35B5591E4067D7D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_PATH_OFFSET))(this);
	}

	::System::Void set_Path(::Class_1_35B5591E4067D7D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B5591E4067D7D2*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_PATH_OFFSET))(this, a1);
	}

	::Class_1_A3A2B28DB41BA84A_1* get_DamageType()
	{
		return ((::Class_1_A3A2B28DB41BA84A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::Class_1_A3A2B28DB41BA84A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3A2B28DB41BA84A_1*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_EnglishName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ENGLISHNAME_OFFSET))(this);
	}

	::System::Void set_EnglishName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ENGLISHNAME_OFFSET))(this, a1);
	}

	::System::String* get_VOTag()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_VOTAG_OFFSET))(this);
	}

	::System::Void set_VOTag(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_VOTAG_OFFSET))(this, a1);
	}

	::System::UInt32 get_AdventurePlayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ADVENTUREPLAYERID_OFFSET))(this);
	}

	::System::Void set_AdventurePlayerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
	{
		return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::RPG::GameCore::CombatPowerAvatarRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerAvatarRarityType))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_RARITY_OFFSET))(this, a1);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_JSONCONFIGPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_NATUREID_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXSP_OFFSET))(this, a1);
	}

	::System::UInt32 get_ExpGroup()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_EXPGROUP_OFFSET))(this);
	}

	::System::Void set_ExpGroup(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_EXPGROUP_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxPromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxPromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXPROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxEidolonLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXEIDOLONLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxEidolonLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXEIDOLONLEVEL_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_EidolonIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_EIDOLONIDS_OFFSET))(this);
	}

	::System::Void set_EidolonIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_EIDOLONIDS_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SKILLIDS_OFFSET))(this);
	}

	::System::Void set_SkillIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SKILLIDS_OFFSET))(this, a1);
	}

	::System::String* get_AIConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_AICONFIGPATH_OFFSET))(this);
	}

	::System::Void set_AIConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_AICONFIGPATH_OFFSET))(this, a1);
	}

	::System::String* get_TraceTreePrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_TRACETREEPREFABPATH_OFFSET))(this);
	}

	::System::Void set_TraceTreePrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_TRACETREEPREFABPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ULTRASKILLTYPE_OFFSET))(this);
	}

	::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ULTRASKILLTYPE_OFFSET))(this, a1);
	}

	::System::String* get_SpecialUltraSkillResourcePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillResourcePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SpecialUltraSkillEnergyLackTips()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillEnergyLackTips(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* get_TraceAnchorTypes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_TRACEANCHORTYPES_OFFSET))(this);
	}

	::System::Void set_TraceAnchorTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_TRACEANCHORTYPES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* get_DefaultUnlockTraceNodeProfiles()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this);
	}

	::System::Void set_DefaultUnlockTraceNodeProfiles(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this, a1);
	}
};
