#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_68A7E1D93E15255C;
class Class_1_E2F5AEB140BB7868;
namespace System { class String; }

#define CLASS_1_16D8E68BCE885505_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x87FFEA0)
#define CLASS_1_16D8E68BCE885505_GET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x87FFFE0)
#define CLASS_1_16D8E68BCE885505_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x87FFE20)
#define CLASS_1_16D8E68BCE885505_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x87FFE60)
#define CLASS_1_16D8E68BCE885505_GET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x87FFF40)
#define CLASS_1_16D8E68BCE885505_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x87FFDF0)
#define CLASS_1_16D8E68BCE885505_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x87FFEE0)
#define CLASS_1_16D8E68BCE885505_GET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x87FFF60)
#define CLASS_1_16D8E68BCE885505_GET_MAXRANK_OFFSET UNITYSDK_OFFSET(0x87FFF80)
#define CLASS_1_16D8E68BCE885505_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x87FFF20)
#define CLASS_1_16D8E68BCE885505_GET_NAME_OFFSET UNITYSDK_OFFSET(0x87FFE40)
#define CLASS_1_16D8E68BCE885505_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x87FFF00)
#define CLASS_1_16D8E68BCE885505_GET_PATH_OFFSET UNITYSDK_OFFSET(0x87FFE00)
#define CLASS_1_16D8E68BCE885505_GET_RANKIDS_OFFSET UNITYSDK_OFFSET(0x87FFFA0)
#define CLASS_1_16D8E68BCE885505_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x87FFEC0)
#define CLASS_1_16D8E68BCE885505_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x87FFFC0)
#define CLASS_1_16D8E68BCE885505_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x8800060)
#define CLASS_1_16D8E68BCE885505_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x8800040)
#define CLASS_1_16D8E68BCE885505_GET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8800000)
#define CLASS_1_16D8E68BCE885505_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x8800020)
#define CLASS_1_16D8E68BCE885505_GET_VOTAG_OFFSET UNITYSDK_OFFSET(0x87FFE80)
#define CLASS_1_16D8E68BCE885505_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x87FFEB0)
#define CLASS_1_16D8E68BCE885505_SET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x87FFFF0)
#define CLASS_1_16D8E68BCE885505_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x87FFE30)
#define CLASS_1_16D8E68BCE885505_SET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x87FFE70)
#define CLASS_1_16D8E68BCE885505_SET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x87FFF50)
#define CLASS_1_16D8E68BCE885505_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x87FFEF0)
#define CLASS_1_16D8E68BCE885505_SET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x87FFF70)
#define CLASS_1_16D8E68BCE885505_SET_MAXRANK_OFFSET UNITYSDK_OFFSET(0x87FFF90)
#define CLASS_1_16D8E68BCE885505_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x87FFF30)
#define CLASS_1_16D8E68BCE885505_SET_NAME_OFFSET UNITYSDK_OFFSET(0x87FFE50)
#define CLASS_1_16D8E68BCE885505_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x87FFF10)
#define CLASS_1_16D8E68BCE885505_SET_PATH_OFFSET UNITYSDK_OFFSET(0x87FFE10)
#define CLASS_1_16D8E68BCE885505_SET_RANKIDS_OFFSET UNITYSDK_OFFSET(0x87FFFB0)
#define CLASS_1_16D8E68BCE885505_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x87FFED0)
#define CLASS_1_16D8E68BCE885505_SET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x87FFFD0)
#define CLASS_1_16D8E68BCE885505_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x8800070)
#define CLASS_1_16D8E68BCE885505_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x8800050)
#define CLASS_1_16D8E68BCE885505_SET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8800010)
#define CLASS_1_16D8E68BCE885505_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x8800030)
#define CLASS_1_16D8E68BCE885505_SET_VOTAG_OFFSET UNITYSDK_OFFSET(0x87FFE90)
#define CLASS_1_16D8E68BCE885505__CTOR_OFFSET UNITYSDK_OFFSET(0x8800080)

inline static constexpr unsigned int Class_1_16D8E68BCE885505_TypeDefinitionIndex = 42001;

class Class_1_16D8E68BCE885505 : public ::System::Object
{
public:
	::Class_1_E2F5AEB140BB7868* _DamageType_k__BackingField; // 0x10
	::System::String* _SpecialUltraSkillResourcePath_k__BackingField; // 0x18
	::Class_1_68A7E1D93E15255C* _Path_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _SkillIDs_k__BackingField; // 0x28
	::System::String* _JsonConfigPath_k__BackingField; // 0x30
	::System::String* _VOTag_k__BackingField; // 0x38
	::System::String* _AIConfigPath_k__BackingField; // 0x40
	::Il2CppArray<::System::UInt32>* _RankIDs_k__BackingField; // 0x48
	::System::String* _TraceTreePrefabPath_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0x58
	::System::UInt32 _MaxPromotionLevel_k__BackingField; // 0x60
	::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x64
	::System::UInt32 _ExpGroup_k__BackingField; // 0x68
	::Struct_2_BC950E36747FB4C9 _Identifier_k__BackingField; // 0x6C
	::RPG::Client::TextID _EnglishName_k__BackingField; // 0x78
	::System::UInt32 _MaxRank_k__BackingField; // 0x88
	::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0x8C
	::System::UInt32 _NatureID_k__BackingField; // 0x90
	::RPG::GameCore::CombatPowerAvatarRarityType _Rarity_k__BackingField; // 0x94
	::RPG::Client::TextID _SpecialUltraSkillEnergyLackTips_k__BackingField; // 0x98
	::RPG::Client::TextID _Name_k__BackingField; // 0xA8

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_BC950E36747FB4C9 get_Identifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_1_68A7E1D93E15255C* get_Path()
	{
		return ((::Class_1_68A7E1D93E15255C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_PATH_OFFSET))(this);
	}

	::System::Void set_Path(::Class_1_68A7E1D93E15255C* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68A7E1D93E15255C*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_PATH_OFFSET))(this, value);
	}

	::Class_1_E2F5AEB140BB7868* get_DamageType()
	{
		return ((::Class_1_E2F5AEB140BB7868*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::Class_1_E2F5AEB140BB7868* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2F5AEB140BB7868*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_DAMAGETYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_NAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_EnglishName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_ENGLISHNAME_OFFSET))(this);
	}

	::System::Void set_EnglishName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_ENGLISHNAME_OFFSET))(this, value);
	}

	::System::String* get_VOTag()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_VOTAG_OFFSET))(this);
	}

	::System::Void set_VOTag(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_VOTAG_OFFSET))(this, value);
	}

	::System::UInt32 get_AdventurePlayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_ADVENTUREPLAYERID_OFFSET))(this);
	}

	::System::Void set_AdventurePlayerID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_ADVENTUREPLAYERID_OFFSET))(this, value);
	}

	::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
	{
		return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::RPG::GameCore::CombatPowerAvatarRarityType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerAvatarRarityType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_RARITY_OFFSET))(this, value);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_JSONCONFIGPATH_OFFSET))(this, value);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_NATUREID_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_MAXSP_OFFSET))(this, value);
	}

	::System::UInt32 get_ExpGroup()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_EXPGROUP_OFFSET))(this);
	}

	::System::Void set_ExpGroup(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_EXPGROUP_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxPromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_MAXPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxPromotionLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_MAXPROMOTIONLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxRank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_MAXRANK_OFFSET))(this);
	}

	::System::Void set_MaxRank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_MAXRANK_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_RankIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_RANKIDS_OFFSET))(this);
	}

	::System::Void set_RankIDs(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_RANKIDS_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_SKILLIDS_OFFSET))(this);
	}

	::System::Void set_SkillIDs(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_SKILLIDS_OFFSET))(this, value);
	}

	::System::String* get_AIConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_AICONFIGPATH_OFFSET))(this);
	}

	::System::Void set_AIConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_AICONFIGPATH_OFFSET))(this, value);
	}

	::System::String* get_TraceTreePrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_TRACETREEPREFABPATH_OFFSET))(this);
	}

	::System::Void set_TraceTreePrefabPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_TRACETREEPREFABPATH_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_ULTRASKILLTYPE_OFFSET))(this);
	}

	::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_ULTRASKILLTYPE_OFFSET))(this, value);
	}

	::System::String* get_SpecialUltraSkillResourcePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillResourcePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_SpecialUltraSkillEnergyLackTips()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillEnergyLackTips(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this, value);
	}
};
