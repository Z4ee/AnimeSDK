#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x9071150)
#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x9071100)
#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x9071070)
#define CLASS_1_E4658DBA7A98C74D_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x9070EF0)
#define CLASS_1_E4658DBA7A98C74D_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x9070D70)
#define CLASS_1_E4658DBA7A98C74D_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F60)
#define CLASS_1_E4658DBA7A98C74D_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9070E70)
#define CLASS_1_E4658DBA7A98C74D_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9070D30)
#define CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x9070E10)
#define CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x9070DF0)
#define CLASS_1_E4658DBA7A98C74D_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x9070E50)
#define CLASS_1_E4658DBA7A98C74D_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070ED0)
#define CLASS_1_E4658DBA7A98C74D_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x9070E90)
#define CLASS_1_E4658DBA7A98C74D_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x9070D50)
#define CLASS_1_E4658DBA7A98C74D_GET_JSON_OFFSET UNITYSDK_OFFSET(0x9070D10)
#define CLASS_1_E4658DBA7A98C74D_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9070D90)
#define CLASS_1_E4658DBA7A98C74D_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9070EB0)
#define CLASS_1_E4658DBA7A98C74D_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x9070DD0)
#define CLASS_1_E4658DBA7A98C74D_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F50)
#define CLASS_1_E4658DBA7A98C74D_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9070CF0)
#define CLASS_1_E4658DBA7A98C74D_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F10)
#define CLASS_1_E4658DBA7A98C74D_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x9070DB0)
#define CLASS_1_E4658DBA7A98C74D_GET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x9070F70)
#define CLASS_1_E4658DBA7A98C74D_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x9070E30)
#define CLASS_1_E4658DBA7A98C74D_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F30)
#define CLASS_1_E4658DBA7A98C74D_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x9071010)
#define CLASS_1_E4658DBA7A98C74D_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x9070F90)
#define CLASS_1_E4658DBA7A98C74D_SET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F00)
#define CLASS_1_E4658DBA7A98C74D_SET_AIPATH_OFFSET UNITYSDK_OFFSET(0x9070D80)
#define CLASS_1_E4658DBA7A98C74D_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9070E80)
#define CLASS_1_E4658DBA7A98C74D_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9070D40)
#define CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x9070E20)
#define CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x9070E00)
#define CLASS_1_E4658DBA7A98C74D_SET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x9070E60)
#define CLASS_1_E4658DBA7A98C74D_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070EE0)
#define CLASS_1_E4658DBA7A98C74D_SET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x9070EA0)
#define CLASS_1_E4658DBA7A98C74D_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x9070D60)
#define CLASS_1_E4658DBA7A98C74D_SET_JSON_OFFSET UNITYSDK_OFFSET(0x9070D20)
#define CLASS_1_E4658DBA7A98C74D_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9070DA0)
#define CLASS_1_E4658DBA7A98C74D_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9070EC0)
#define CLASS_1_E4658DBA7A98C74D_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x9070DE0)
#define CLASS_1_E4658DBA7A98C74D_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9070D00)
#define CLASS_1_E4658DBA7A98C74D_SET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F20)
#define CLASS_1_E4658DBA7A98C74D_SET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x9070DC0)
#define CLASS_1_E4658DBA7A98C74D_SET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x9070F80)
#define CLASS_1_E4658DBA7A98C74D_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x9070E40)
#define CLASS_1_E4658DBA7A98C74D_SET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9070F40)
#define CLASS_1_E4658DBA7A98C74D__CTOR_OFFSET UNITYSDK_OFFSET(0x9070C70)

inline static constexpr unsigned int Class_1_E4658DBA7A98C74D_TypeDefinitionIndex = 52458;

class Class_1_E4658DBA7A98C74D : public ::System::Object
{
public:
	::System::String* _JsonPath_k__BackingField; // 0x10
	::System::String* _HeadIconPath_k__BackingField; // 0x18
	::System::Object* _Row_k__BackingField; // 0x20
	::System::String* _AIPath_k__BackingField; // 0x28
	::System::String* _WaitingAvatarHeadIconPath_k__BackingField; // 0x30
	::System::String* _ActionIconPath_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas_k__BackingField; // 0x40
	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* _DamageTypeResistance_k__BackingField; // 0x48
	::RPG::GameCore::CharacterConfig* _Json_k__BackingField; // 0x50
	::System::String* _ModelPath_k__BackingField; // 0x58
	::System::String* _SideAvatarHeadIconPath_k__BackingField; // 0x60
	::RPG::Client::TextID _Introduction_k__BackingField; // 0x68
	::System::Boolean _HaveActionDelay_k__BackingField; // 0x78
	::System::UInt32 _ConfigID_k__BackingField; // 0x7C
	::RPG::GameCore::CharacterSomatoType _SomatoType_k__BackingField; // 0x80
	::System::UInt32 _Level_k__BackingField; // 0x84
	::System::UInt32 _NatureID_k__BackingField; // 0x88
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x8C
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x90
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D__CTOR_OFFSET))(this);
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_ROW_OFFSET))(this, value);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_JSON_OFFSET))(this);
	}

	::System::Void set_Json(::RPG::GameCore::CharacterConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_JSON_OFFSET))(this, value);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_CONFIGID_OFFSET))(this);
	}

	::System::Void set_ConfigID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_CONFIGID_OFFSET))(this, value);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_JSONPATH_OFFSET))(this, value);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_AIPATH_OFFSET))(this);
	}

	::System::Void set_AIPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_AIPATH_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_LEVEL_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::System::Void set_SkillRowDatas(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SKILLROWDATAS_OFFSET))(this, value);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_NATUREID_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPE_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::System::Void set_DamageTypeResistance(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPERESISTANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SPNEED_OFFSET))(this, value);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::System::Void set_HaveActionDelay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_HAVEACTIONDELAY_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_CHARACTERNAME_OFFSET))(this);
	}

	::System::Void set_CharacterName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_CHARACTERNAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::Void set_Introduction(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_INTRODUCTION_OFFSET))(this, value);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_MODELPATH_OFFSET))(this, value);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::Void set_HeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_HEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::Void set_ActionIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_ACTIONICONPATH_OFFSET))(this, value);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_SideAvatarHeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SIDEAVATARHEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_WaitingAvatarHeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_WAITINGAVATARHEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::RPG::GameCore::CharacterSomatoType get_SomatoType()
	{
		return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SOMATOTYPE_OFFSET))(this);
	}

	::System::Void set_SomatoType(::RPG::GameCore::CharacterSomatoType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SOMATOTYPE_OFFSET))(this, value);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
