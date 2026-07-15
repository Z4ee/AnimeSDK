#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_A188133F1B13F2BD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1837B2E0)
#define CLASS_1_A188133F1B13F2BD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1837B300)
#define CLASS_1_A188133F1B13F2BD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1837B270)
#define CLASS_1_A188133F1B13F2BD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1837B280)
#define CLASS_1_A188133F1B13F2BD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1837B2C0)
#define CLASS_1_A188133F1B13F2BD_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1837B380)
#define CLASS_1_A188133F1B13F2BD_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1837B340)
#define CLASS_1_A188133F1B13F2BD_GET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1837B320)
#define CLASS_1_A188133F1B13F2BD_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1837B2A0)
#define CLASS_1_A188133F1B13F2BD_GET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1837B360)
#define CLASS_1_A188133F1B13F2BD_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1837B2F0)
#define CLASS_1_A188133F1B13F2BD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1837B310)
#define CLASS_1_A188133F1B13F2BD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1837B290)
#define CLASS_1_A188133F1B13F2BD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1837B2D0)
#define CLASS_1_A188133F1B13F2BD_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1837B390)
#define CLASS_1_A188133F1B13F2BD_SET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1837B350)
#define CLASS_1_A188133F1B13F2BD_SET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1837B330)
#define CLASS_1_A188133F1B13F2BD_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1837B2B0)
#define CLASS_1_A188133F1B13F2BD_SET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1837B370)
#define CLASS_1_A188133F1B13F2BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1837B3A0)

inline static constexpr unsigned int Class_1_A188133F1B13F2BD_TypeDefinitionIndex = 49596;

class Class_1_A188133F1B13F2BD : public ::System::Object
{
public:
	::System::String* _Desc_k__BackingField; // 0x10
	::Il2CppArray<::System::String*>* _RankAbility_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* _Param_k__BackingField; // 0x20
	::System::String* _Name_k__BackingField; // 0x28
	::System::String* _IconPath_k__BackingField; // 0x30
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* _SkillAddLevelList_k__BackingField; // 0x38
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _UnlockCost_k__BackingField; // 0x40
	::System::UInt32 _Level_k__BackingField; // 0x48
	::RPG::GameCore::StringHash _Trigger_k__BackingField; // 0x4C
	::Struct_2_D645B4E0B73852B6_3 _Identifier_k__BackingField; // 0x50

	::System::Void _ctor(::Struct_2_D645B4E0B73852B6_3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_3&))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_D645B4E0B73852B6_3 get_Identifier()
	{
		return ((::Struct_2_D645B4E0B73852B6_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A188133F1B13F2BD_GET_IDENTIFIER_OFFSET))(this);
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
