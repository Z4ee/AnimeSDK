#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x117D5F70)
#define CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x117D5E70)
#define CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x117D5D30)
#define CLASS_1_588846AE6AA4F4B4_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x117D58E0)
#define CLASS_1_588846AE6AA4F4B4_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x117D5120)
#define CLASS_1_588846AE6AA4F4B4_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x117D5BA0)
#define CLASS_1_588846AE6AA4F4B4_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x117D5600)
#define CLASS_1_588846AE6AA4F4B4_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x117D4FC0)
#define CLASS_1_588846AE6AA4F4B4_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x117D5490)
#define CLASS_1_588846AE6AA4F4B4_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x117D53E0)
#define CLASS_1_588846AE6AA4F4B4_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x117D55F0)
#define CLASS_1_588846AE6AA4F4B4_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x117D5830)
#define CLASS_1_588846AE6AA4F4B4_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x117D56C0)
#define CLASS_1_588846AE6AA4F4B4_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x117D5070)
#define CLASS_1_588846AE6AA4F4B4_GET_JSON_OFFSET UNITYSDK_OFFSET(0x117D4F10)
#define CLASS_1_588846AE6AA4F4B4_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x117D51D0)
#define CLASS_1_588846AE6AA4F4B4_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x117D5780)
#define CLASS_1_588846AE6AA4F4B4_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x117D5330)
#define CLASS_1_588846AE6AA4F4B4_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x117D5AF0)
#define CLASS_1_588846AE6AA4F4B4_GET_ROW_OFFSET UNITYSDK_OFFSET(0x117D4E10)
#define CLASS_1_588846AE6AA4F4B4_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x117D5990)
#define CLASS_1_588846AE6AA4F4B4_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x117D5280)
#define CLASS_1_588846AE6AA4F4B4_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x117D5540)
#define CLASS_1_588846AE6AA4F4B4_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x117D5A40)
#define CLASS_1_588846AE6AA4F4B4_METHOD_1_CE35BF94C300261B_OFFSET UNITYSDK_OFFSET(0x117D4E00)
#define CLASS_1_588846AE6AA4F4B4_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x117D5CD0)
#define CLASS_1_588846AE6AA4F4B4_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x117D5C50)
#define CLASS_1_588846AE6AA4F4B4_SET_ROW_OFFSET UNITYSDK_OFFSET(0x117D4EC0)
#define CLASS_1_588846AE6AA4F4B4__CTOR_OFFSET UNITYSDK_OFFSET(0x117D4DF0)

inline static constexpr unsigned int Class_1_588846AE6AA4F4B4_TypeDefinitionIndex = 45816;

class Class_1_588846AE6AA4F4B4 : public ::System::Object
{
public:
	::RPG::GameCore::ICharacterRowData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::ICharacterRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterRowData* Method_1_CE35BF94C300261B()
	{
		return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_METHOD_1_CE35BF94C300261B_OFFSET))(this);
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_SET_ROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_JSON_OFFSET))(this);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_CONFIGID_OFFSET))(this);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_JSONPATH_OFFSET))(this);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_AIPATH_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_LEVEL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_NATUREID_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_DAMAGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_SPNEED_OFFSET))(this);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_CHARACTERNAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_MODELPATH_OFFSET))(this);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_588846AE6AA4F4B4_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
