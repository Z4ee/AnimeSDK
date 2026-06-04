#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_A188133F1B13F2BD_GET_DESC_OFFSET UNITYSDK_OFFSET(0xAAD2C40)
#define CLASS_1_A188133F1B13F2BD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAAD2C60)
#define CLASS_1_A188133F1B13F2BD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAAD2BD0)
#define CLASS_1_A188133F1B13F2BD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAAD2BE0)
#define CLASS_1_A188133F1B13F2BD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAAD2C20)
#define CLASS_1_A188133F1B13F2BD_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xAAD2CE0)
#define CLASS_1_A188133F1B13F2BD_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0xAAD2CA0)
#define CLASS_1_A188133F1B13F2BD_GET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xAAD2C80)
#define CLASS_1_A188133F1B13F2BD_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0xAAD2C00)
#define CLASS_1_A188133F1B13F2BD_GET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0xAAD2CC0)
#define CLASS_1_A188133F1B13F2BD_SET_DESC_OFFSET UNITYSDK_OFFSET(0xAAD2C50)
#define CLASS_1_A188133F1B13F2BD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAAD2C70)
#define CLASS_1_A188133F1B13F2BD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAAD2BF0)
#define CLASS_1_A188133F1B13F2BD_SET_NAME_OFFSET UNITYSDK_OFFSET(0xAAD2C30)
#define CLASS_1_A188133F1B13F2BD_SET_PARAM_OFFSET UNITYSDK_OFFSET(0xAAD2CF0)
#define CLASS_1_A188133F1B13F2BD_SET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0xAAD2CB0)
#define CLASS_1_A188133F1B13F2BD_SET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xAAD2C90)
#define CLASS_1_A188133F1B13F2BD_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0xAAD2C10)
#define CLASS_1_A188133F1B13F2BD_SET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0xAAD2CD0)
#define CLASS_1_A188133F1B13F2BD__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD2D00)

inline static constexpr unsigned int Class_1_A188133F1B13F2BD_TypeDefinitionIndex = 48583;

class Class_1_A188133F1B13F2BD : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::Il2CppArray<::System::String*>* _RankAbility_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* _SkillAddLevelList_k__BackingField; // 0x20
	::System::String* _Desc_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _UnlockCost_k__BackingField; // 0x30
	::System::String* _Name_k__BackingField; // 0x38
	::Il2CppArray<::RPG::GameCore::FixPoint>* _Param_k__BackingField; // 0x40
	::RPG::GameCore::StringHash _Trigger_k__BackingField; // 0x48
	::Struct_2_019938BC9C50B169_4 _Identifier_k__BackingField; // 0x4C
	::System::UInt32 _Level_k__BackingField; // 0x50

	::System::Void _ctor(::Struct_2_019938BC9C50B169_4& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_4&))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_4 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::StringHash get_Trigger()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_TRIGGER_OFFSET))(this);
	}

	::System::Void set_Trigger(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_TRIGGER_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_DESC_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* get_SkillAddLevelList()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_SKILLADDLEVELLIST_OFFSET))(this);
	}

	::System::Void set_SkillAddLevelList(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_SKILLADDLEVELLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_RankAbility()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_RANKABILITY_OFFSET))(this);
	}

	::System::Void set_RankAbility(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_RANKABILITY_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_UnlockCost()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_UNLOCKCOST_OFFSET))(this);
	}

	::System::Void set_UnlockCost(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_UNLOCKCOST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_Param()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_SET_PARAM_OFFSET))(this, a1);
	}
};
