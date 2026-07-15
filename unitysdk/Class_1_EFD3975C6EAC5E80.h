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

#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x152D3000)
#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x152D2EC0)
#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x152D2D80)
#define CLASS_1_EFD3975C6EAC5E80_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x152D27A0)
#define CLASS_1_EFD3975C6EAC5E80_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x152D1B70)
#define CLASS_1_EFD3975C6EAC5E80_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x152D2BA0)
#define CLASS_1_EFD3975C6EAC5E80_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x152D2380)
#define CLASS_1_EFD3975C6EAC5E80_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x152D1970)
#define CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x152D2170)
#define CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x152D2070)
#define CLASS_1_EFD3975C6EAC5E80_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x152D2370)
#define CLASS_1_EFD3975C6EAC5E80_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x152D26A0)
#define CLASS_1_EFD3975C6EAC5E80_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x152D2490)
#define CLASS_1_EFD3975C6EAC5E80_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x152D1A70)
#define CLASS_1_EFD3975C6EAC5E80_GET_JSON_OFFSET UNITYSDK_OFFSET(0x152D1870)
#define CLASS_1_EFD3975C6EAC5E80_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x152D1D70)
#define CLASS_1_EFD3975C6EAC5E80_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x152D25A0)
#define CLASS_1_EFD3975C6EAC5E80_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x152D1F70)
#define CLASS_1_EFD3975C6EAC5E80_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x152D1C70)
#define CLASS_1_EFD3975C6EAC5E80_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x152D2AA0)
#define CLASS_1_EFD3975C6EAC5E80_GET_ROW_OFFSET UNITYSDK_OFFSET(0x152D1720)
#define CLASS_1_EFD3975C6EAC5E80_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x152D28A0)
#define CLASS_1_EFD3975C6EAC5E80_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x152D1E70)
#define CLASS_1_EFD3975C6EAC5E80_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x152D2270)
#define CLASS_1_EFD3975C6EAC5E80_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x152D29A0)
#define CLASS_1_EFD3975C6EAC5E80_METHOD_1_CE35BF94C300261B_OFFSET UNITYSDK_OFFSET(0x152D1710)
#define CLASS_1_EFD3975C6EAC5E80_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x152D2D20)
#define CLASS_1_EFD3975C6EAC5E80_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x152D2CA0)
#define CLASS_1_EFD3975C6EAC5E80_SET_ROW_OFFSET UNITYSDK_OFFSET(0x152D1820)
#define CLASS_1_EFD3975C6EAC5E80__CTOR_OFFSET UNITYSDK_OFFSET(0x152D1700)

inline static constexpr unsigned int Class_1_EFD3975C6EAC5E80_TypeDefinitionIndex = 54386;

class Class_1_EFD3975C6EAC5E80 : public ::System::Object
{
public:
	::RPG::GameCore::ICharacterRowData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::ICharacterRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterRowData* Method_1_CE35BF94C300261B()
	{
		return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_METHOD_1_CE35BF94C300261B_OFFSET))(this);
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_SET_ROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_JSON_OFFSET))(this);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_CONFIGID_OFFSET))(this);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_JSONPATH_OFFSET))(this);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_AIPATH_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* get_OverrideAIPaths()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_OVERRIDEAIPATHS_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_LEVEL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_NATUREID_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_SPNEED_OFFSET))(this);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_CHARACTERNAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_MODELPATH_OFFSET))(this);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
