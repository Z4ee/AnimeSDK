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

#define CLASS_1_6A7F8BC66482521E_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x14B12610)
#define CLASS_1_6A7F8BC66482521E_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x14B125C0)
#define CLASS_1_6A7F8BC66482521E_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x14B12570)
#define CLASS_1_6A7F8BC66482521E_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x14B123F0)
#define CLASS_1_6A7F8BC66482521E_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x14B12250)
#define CLASS_1_6A7F8BC66482521E_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12460)
#define CLASS_1_6A7F8BC66482521E_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x14B12370)
#define CLASS_1_6A7F8BC66482521E_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x14B12210)
#define CLASS_1_6A7F8BC66482521E_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x14B12310)
#define CLASS_1_6A7F8BC66482521E_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x14B122F0)
#define CLASS_1_6A7F8BC66482521E_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x14B12350)
#define CLASS_1_6A7F8BC66482521E_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B123D0)
#define CLASS_1_6A7F8BC66482521E_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x14B12390)
#define CLASS_1_6A7F8BC66482521E_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x14B12230)
#define CLASS_1_6A7F8BC66482521E_GET_JSON_OFFSET UNITYSDK_OFFSET(0x14B121F0)
#define CLASS_1_6A7F8BC66482521E_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14B12290)
#define CLASS_1_6A7F8BC66482521E_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x14B123B0)
#define CLASS_1_6A7F8BC66482521E_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x14B122D0)
#define CLASS_1_6A7F8BC66482521E_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x14B12270)
#define CLASS_1_6A7F8BC66482521E_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12450)
#define CLASS_1_6A7F8BC66482521E_GET_ROW_OFFSET UNITYSDK_OFFSET(0x14B121D0)
#define CLASS_1_6A7F8BC66482521E_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12410)
#define CLASS_1_6A7F8BC66482521E_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x14B122B0)
#define CLASS_1_6A7F8BC66482521E_GET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x14B12470)
#define CLASS_1_6A7F8BC66482521E_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x14B12330)
#define CLASS_1_6A7F8BC66482521E_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12430)
#define CLASS_1_6A7F8BC66482521E_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x14B12510)
#define CLASS_1_6A7F8BC66482521E_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x14B12490)
#define CLASS_1_6A7F8BC66482521E_SET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12400)
#define CLASS_1_6A7F8BC66482521E_SET_AIPATH_OFFSET UNITYSDK_OFFSET(0x14B12260)
#define CLASS_1_6A7F8BC66482521E_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x14B12380)
#define CLASS_1_6A7F8BC66482521E_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x14B12220)
#define CLASS_1_6A7F8BC66482521E_SET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x14B12320)
#define CLASS_1_6A7F8BC66482521E_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x14B12300)
#define CLASS_1_6A7F8BC66482521E_SET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x14B12360)
#define CLASS_1_6A7F8BC66482521E_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B123E0)
#define CLASS_1_6A7F8BC66482521E_SET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x14B123A0)
#define CLASS_1_6A7F8BC66482521E_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x14B12240)
#define CLASS_1_6A7F8BC66482521E_SET_JSON_OFFSET UNITYSDK_OFFSET(0x14B12200)
#define CLASS_1_6A7F8BC66482521E_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14B122A0)
#define CLASS_1_6A7F8BC66482521E_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x14B123C0)
#define CLASS_1_6A7F8BC66482521E_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x14B122E0)
#define CLASS_1_6A7F8BC66482521E_SET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x14B12280)
#define CLASS_1_6A7F8BC66482521E_SET_ROW_OFFSET UNITYSDK_OFFSET(0x14B121E0)
#define CLASS_1_6A7F8BC66482521E_SET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12420)
#define CLASS_1_6A7F8BC66482521E_SET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x14B122C0)
#define CLASS_1_6A7F8BC66482521E_SET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x14B12480)
#define CLASS_1_6A7F8BC66482521E_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x14B12340)
#define CLASS_1_6A7F8BC66482521E_SET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14B12440)
#define CLASS_1_6A7F8BC66482521E__CTOR_OFFSET UNITYSDK_OFFSET(0x14B12180)

inline static constexpr unsigned int Class_1_6A7F8BC66482521E_TypeDefinitionIndex = 54372;

class Class_1_6A7F8BC66482521E : public ::System::Object
{
public:
	::System::String* _SideAvatarHeadIconPath_k__BackingField; // 0x10
	::System::String* _ActionIconPath_k__BackingField; // 0x18
	::System::String* _JsonPath_k__BackingField; // 0x20
	::System::String* _HeadIconPath_k__BackingField; // 0x28
	::RPG::GameCore::CharacterConfig* _Json_k__BackingField; // 0x30
	::System::Object* _Row_k__BackingField; // 0x38
	::System::String* _AIPath_k__BackingField; // 0x40
	::System::String* _WaitingAvatarHeadIconPath_k__BackingField; // 0x48
	::System::String* _ModelPath_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas_k__BackingField; // 0x58
	::Il2CppArray<::System::String*>* _OverrideAIPaths_k__BackingField; // 0x60
	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* _DamageTypeResistance_k__BackingField; // 0x68
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x70
	::System::UInt32 _ConfigID_k__BackingField; // 0x74
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x78
	::System::Boolean _HaveActionDelay_k__BackingField; // 0x88
	::System::UInt32 _Level_k__BackingField; // 0x8C
	::RPG::Client::TextID _Introduction_k__BackingField; // 0x90
	::RPG::GameCore::CharacterSomatoType _SomatoType_k__BackingField; // 0xA0
	::System::UInt32 _NatureID_k__BackingField; // 0xA4
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E__CTOR_OFFSET))(this);
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_ROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_JSON_OFFSET))(this);
	}

	::System::Void set_Json(::RPG::GameCore::CharacterConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_JSON_OFFSET))(this, a1);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_CONFIGID_OFFSET))(this);
	}

	::System::Void set_ConfigID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_CONFIGID_OFFSET))(this, a1);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_JSONPATH_OFFSET))(this, a1);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_AIPATH_OFFSET))(this);
	}

	::System::Void set_AIPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_AIPATH_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_OverrideAIPaths()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_OVERRIDEAIPATHS_OFFSET))(this);
	}

	::System::Void set_OverrideAIPaths(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_OVERRIDEAIPATHS_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::System::Void set_SkillRowDatas(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_SKILLROWDATAS_OFFSET))(this, a1);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_NATUREID_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::System::Void set_DamageTypeResistance(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_DAMAGETYPERESISTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_SPNEED_OFFSET))(this, a1);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::System::Void set_HaveActionDelay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_HAVEACTIONDELAY_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_CHARACTERNAME_OFFSET))(this);
	}

	::System::Void set_CharacterName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_CHARACTERNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::Void set_Introduction(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_INTRODUCTION_OFFSET))(this, a1);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_MODELPATH_OFFSET))(this, a1);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::Void set_HeadIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_HEADICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::Void set_ActionIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_ACTIONICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_SideAvatarHeadIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_SIDEAVATARHEADICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_WaitingAvatarHeadIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_WAITINGAVATARHEADICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::RPG::GameCore::CharacterSomatoType get_SomatoType()
	{
		return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GET_SOMATOTYPE_OFFSET))(this);
	}

	::System::Void set_SomatoType(::RPG::GameCore::CharacterSomatoType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_SET_SOMATOTYPE_OFFSET))(this, a1);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F8BC66482521E_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
