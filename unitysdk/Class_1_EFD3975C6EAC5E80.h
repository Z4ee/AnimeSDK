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

#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xA5D1640)
#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xA5D1550)
#define CLASS_1_EFD3975C6EAC5E80_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA5D1460)
#define CLASS_1_EFD3975C6EAC5E80_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D1010)
#define CLASS_1_EFD3975C6EAC5E80_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA5D07A0)
#define CLASS_1_EFD3975C6EAC5E80_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D12D0)
#define CLASS_1_EFD3975C6EAC5E80_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA5D0D30)
#define CLASS_1_EFD3975C6EAC5E80_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA5D0640)
#define CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xA5D0BC0)
#define CLASS_1_EFD3975C6EAC5E80_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA5D0B10)
#define CLASS_1_EFD3975C6EAC5E80_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xA5D0D20)
#define CLASS_1_EFD3975C6EAC5E80_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D0F60)
#define CLASS_1_EFD3975C6EAC5E80_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA5D0DF0)
#define CLASS_1_EFD3975C6EAC5E80_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xA5D06F0)
#define CLASS_1_EFD3975C6EAC5E80_GET_JSON_OFFSET UNITYSDK_OFFSET(0xA5D0590)
#define CLASS_1_EFD3975C6EAC5E80_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA5D0900)
#define CLASS_1_EFD3975C6EAC5E80_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA5D0EB0)
#define CLASS_1_EFD3975C6EAC5E80_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA5D0A60)
#define CLASS_1_EFD3975C6EAC5E80_GET_OVERRIDEAIPATH_OFFSET UNITYSDK_OFFSET(0xA5D0850)
#define CLASS_1_EFD3975C6EAC5E80_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D1220)
#define CLASS_1_EFD3975C6EAC5E80_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA5D0490)
#define CLASS_1_EFD3975C6EAC5E80_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D10C0)
#define CLASS_1_EFD3975C6EAC5E80_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA5D09B0)
#define CLASS_1_EFD3975C6EAC5E80_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xA5D0C70)
#define CLASS_1_EFD3975C6EAC5E80_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA5D1170)
#define CLASS_1_EFD3975C6EAC5E80_METHOD_1_CE35BF94C300261B_OFFSET UNITYSDK_OFFSET(0xA5D0480)
#define CLASS_1_EFD3975C6EAC5E80_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5D1400)
#define CLASS_1_EFD3975C6EAC5E80_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA5D1380)
#define CLASS_1_EFD3975C6EAC5E80_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA5D0540)
#define CLASS_1_EFD3975C6EAC5E80__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D0470)

inline static constexpr unsigned int Class_1_EFD3975C6EAC5E80_TypeDefinitionIndex = 53172;

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

	::System::String* get_OverrideAIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD3975C6EAC5E80_GET_OVERRIDEAIPATH_OFFSET))(this);
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
