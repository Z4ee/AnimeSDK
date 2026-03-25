#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_87C11F1B598BA500_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1136B670)
#define CLASS_1_87C11F1B598BA500_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1136B690)
#define CLASS_1_87C11F1B598BA500_GET_ID_OFFSET UNITYSDK_OFFSET(0x1136B600)
#define CLASS_1_87C11F1B598BA500_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1136B610)
#define CLASS_1_87C11F1B598BA500_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1136B650)
#define CLASS_1_87C11F1B598BA500_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1136B710)
#define CLASS_1_87C11F1B598BA500_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1136B6D0)
#define CLASS_1_87C11F1B598BA500_GET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1136B6B0)
#define CLASS_1_87C11F1B598BA500_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1136B630)
#define CLASS_1_87C11F1B598BA500_GET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1136B6F0)
#define CLASS_1_87C11F1B598BA500_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1136B680)
#define CLASS_1_87C11F1B598BA500_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1136B6A0)
#define CLASS_1_87C11F1B598BA500_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1136B620)
#define CLASS_1_87C11F1B598BA500_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1136B660)
#define CLASS_1_87C11F1B598BA500_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1136B720)
#define CLASS_1_87C11F1B598BA500_SET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1136B6E0)
#define CLASS_1_87C11F1B598BA500_SET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1136B6C0)
#define CLASS_1_87C11F1B598BA500_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1136B640)
#define CLASS_1_87C11F1B598BA500_SET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1136B700)
#define CLASS_1_87C11F1B598BA500__CTOR_OFFSET UNITYSDK_OFFSET(0x1136B730)

inline static constexpr unsigned int Class_1_87C11F1B598BA500_TypeDefinitionIndex = 41987;

class Class_1_87C11F1B598BA500 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* _Param_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _UnlockCost_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* _SkillAddLevelList_k__BackingField; // 0x20
	::System::String* _Desc_k__BackingField; // 0x28
	::Il2CppArray<::System::String*>* _RankAbility_k__BackingField; // 0x30
	::System::String* _IconPath_k__BackingField; // 0x38
	::System::String* _Name_k__BackingField; // 0x40
	::System::UInt32 _Level_k__BackingField; // 0x48
	::RPG::GameCore::StringHash _Trigger_k__BackingField; // 0x4C
	::System::UInt32 _ID_k__BackingField; // 0x50

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_LEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::StringHash get_Trigger()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_TRIGGER_OFFSET))(this);
	}

	::System::Void set_Trigger(::RPG::GameCore::StringHash value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_TRIGGER_OFFSET))(this, value);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_NAME_OFFSET))(this, value);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_DESC_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* get_SkillAddLevelList()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_SKILLADDLEVELLIST_OFFSET))(this);
	}

	::System::Void set_SkillAddLevelList(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_SKILLADDLEVELLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* get_RankAbility()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_RANKABILITY_OFFSET))(this);
	}

	::System::Void set_RankAbility(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_RANKABILITY_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_UnlockCost()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_UNLOCKCOST_OFFSET))(this);
	}

	::System::Void set_UnlockCost(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_UNLOCKCOST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_Param()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_87C11F1B598BA500_SET_PARAM_OFFSET))(this, value);
	}
};
