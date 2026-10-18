#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_745D1E9BCE174BE1.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64081A692E5684F0_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x15CEB3C0)
#define CLASS_1_64081A692E5684F0_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x15CEB370)
#define CLASS_1_64081A692E5684F0_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x15CEB320)
#define CLASS_1_64081A692E5684F0_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1E0)
#define CLASS_1_64081A692E5684F0_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x15CEAFF0)
#define CLASS_1_64081A692E5684F0_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB220)
#define CLASS_1_64081A692E5684F0_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x15CEB100)
#define CLASS_1_64081A692E5684F0_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x15CEAFD0)
#define CLASS_1_64081A692E5684F0_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x15CEB030)
#define CLASS_1_64081A692E5684F0_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15CEB020)
#define CLASS_1_64081A692E5684F0_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x15CEB080)
#define CLASS_1_64081A692E5684F0_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1D0)
#define CLASS_1_64081A692E5684F0_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x15CEB160)
#define CLASS_1_64081A692E5684F0_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x15CEAFE0)
#define CLASS_1_64081A692E5684F0_GET_JSON_OFFSET UNITYSDK_OFFSET(0x15CEAFC0)
#define CLASS_1_64081A692E5684F0_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15CEB090)
#define CLASS_1_64081A692E5684F0_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1C0)
#define CLASS_1_64081A692E5684F0_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15CEB010)
#define CLASS_1_64081A692E5684F0_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x15CEB000)
#define CLASS_1_64081A692E5684F0_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB210)
#define CLASS_1_64081A692E5684F0_GET_ROW_OFFSET UNITYSDK_OFFSET(0x15CEAF20)
#define CLASS_1_64081A692E5684F0_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB1F0)
#define CLASS_1_64081A692E5684F0_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x15CEB0A0)
#define CLASS_1_64081A692E5684F0_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x15CEB040)
#define CLASS_1_64081A692E5684F0_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x15CEB200)
#define CLASS_1_64081A692E5684F0_METHOD_1_4C81CE8F5DCE171D_OFFSET UNITYSDK_OFFSET(0x15CEB230)
#define CLASS_1_64081A692E5684F0_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x15CEB2C0)
#define CLASS_1_64081A692E5684F0_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x15CEB240)
#define CLASS_1_64081A692E5684F0_SET_ROW_OFFSET UNITYSDK_OFFSET(0x15CEAF30)
#define CLASS_1_64081A692E5684F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CEB410)
#define CLASS_1_64081A692E5684F0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEAF10)

inline static constexpr unsigned int Class_1_64081A692E5684F0_TypeDefinitionIndex = 56923;

class Class_1_64081A692E5684F0 : public ::System::Object
{
public:
	static ::Class_1_64081A692E5684F0** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_64081A692E5684F0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64081A692E5684F0_TypeDefinitionIndex)->GetStaticField(0x1DA50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0__CCTOR_OFFSET))();
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_SET_ROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_JSON_OFFSET))(this);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_CONFIGID_OFFSET))(this);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_JSONPATH_OFFSET))(this);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_AIPATH_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* get_OverrideAIPaths()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_OVERRIDEAIPATHS_OFFSET))(this);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_NATUREID_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_DAMAGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SPNEED_OFFSET))(this);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_LEVEL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_CHARACTERNAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_MODELPATH_OFFSET))(this);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::RPG::GameCore::CharacterSomatoType Method_1_4C81CE8F5DCE171D()
	{
		return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_METHOD_1_4C81CE8F5DCE171D_OFFSET))(this);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_745D1E9BCE174BE1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_745D1E9BCE174BE1))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
