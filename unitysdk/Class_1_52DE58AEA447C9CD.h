#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97CB388DE805A5F9;
class Class_1_97E659ED8D5D259C_20;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_52DE58AEA447C9CD_GET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0x10C82270)
#define CLASS_1_52DE58AEA447C9CD_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x10C82290)
#define CLASS_1_52DE58AEA447C9CD_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x10C82250)
#define CLASS_1_52DE58AEA447C9CD_GET_HANDBOOKDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x10C822B0)
#define CLASS_1_52DE58AEA447C9CD_GET_ID_OFFSET UNITYSDK_OFFSET(0x10C82170)
#define CLASS_1_52DE58AEA447C9CD_GET_NORMALTARGETIDS_OFFSET UNITYSDK_OFFSET(0x10C821D0)
#define CLASS_1_52DE58AEA447C9CD_GET_RELATEDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x10C82190)
#define CLASS_1_52DE58AEA447C9CD_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x10C82210)
#define CLASS_1_52DE58AEA447C9CD_GET_SPECIALTARGETID_OFFSET UNITYSDK_OFFSET(0x10C821F0)
#define CLASS_1_52DE58AEA447C9CD_GET_SPECIALTARGETREWARDID_OFFSET UNITYSDK_OFFSET(0x10C82230)
#define CLASS_1_52DE58AEA447C9CD_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x10C821B0)
#define CLASS_1_52DE58AEA447C9CD_SET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0x10C82280)
#define CLASS_1_52DE58AEA447C9CD_SET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x10C822A0)
#define CLASS_1_52DE58AEA447C9CD_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x10C82260)
#define CLASS_1_52DE58AEA447C9CD_SET_HANDBOOKDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x10C822C0)
#define CLASS_1_52DE58AEA447C9CD_SET_ID_OFFSET UNITYSDK_OFFSET(0x10C82180)
#define CLASS_1_52DE58AEA447C9CD_SET_NORMALTARGETIDS_OFFSET UNITYSDK_OFFSET(0x10C821E0)
#define CLASS_1_52DE58AEA447C9CD_SET_RELATEDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x10C821A0)
#define CLASS_1_52DE58AEA447C9CD_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x10C82220)
#define CLASS_1_52DE58AEA447C9CD_SET_SPECIALTARGETID_OFFSET UNITYSDK_OFFSET(0x10C82200)
#define CLASS_1_52DE58AEA447C9CD_SET_SPECIALTARGETREWARDID_OFFSET UNITYSDK_OFFSET(0x10C82240)
#define CLASS_1_52DE58AEA447C9CD_SET_STAGES_OFFSET UNITYSDK_OFFSET(0x10C821C0)
#define CLASS_1_52DE58AEA447C9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10C822D0)

inline static constexpr unsigned int Class_1_52DE58AEA447C9CD_TypeDefinitionIndex = 74097;

class Class_1_52DE58AEA447C9CD : public ::System::Object
{
public:
	::System::String* _BadgeIconPath_k__BackingField; // 0x10
	::Class_1_97E659ED8D5D259C_20* _Group_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _DisplayItemList_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _HandBookDisplayItemList_k__BackingField; // 0x28
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_97CB388DE805A5F9*>* _Stages_k__BackingField; // 0x30
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _NormalTargetIDs_k__BackingField; // 0x38
	::System::UInt32 _RelatedChallengeID_k__BackingField; // 0x40
	::System::UInt32 _ID_k__BackingField; // 0x44
	::System::UInt32 _SpecialTargetID_k__BackingField; // 0x48
	::System::UInt32 _RewardID_k__BackingField; // 0x4C
	::System::UInt32 _SpecialTargetRewardID_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelatedChallengeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_RELATEDCHALLENGEID_OFFSET))(this);
	}

	::System::Void set_RelatedChallengeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_RELATEDCHALLENGEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_97CB388DE805A5F9*>* get_Stages()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_97CB388DE805A5F9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_STAGES_OFFSET))(this);
	}

	::System::Void set_Stages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_97CB388DE805A5F9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_97CB388DE805A5F9*>*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_STAGES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_NormalTargetIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_NORMALTARGETIDS_OFFSET))(this);
	}

	::System::Void set_NormalTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_NORMALTARGETIDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpecialTargetID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_SPECIALTARGETID_OFFSET))(this);
	}

	::System::Void set_SpecialTargetID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_SPECIALTARGETID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RewardID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_REWARDID_OFFSET))(this);
	}

	::System::Void set_RewardID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_REWARDID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpecialTargetRewardID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_SPECIALTARGETREWARDID_OFFSET))(this);
	}

	::System::Void set_SpecialTargetRewardID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_SPECIALTARGETREWARDID_OFFSET))(this, a1);
	}

	::Class_1_97E659ED8D5D259C_20* get_Group()
	{
		return ((::Class_1_97E659ED8D5D259C_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_GROUP_OFFSET))(this);
	}

	::System::Void set_Group(::Class_1_97E659ED8D5D259C_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_GROUP_OFFSET))(this, a1);
	}

	::System::String* get_BadgeIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_BADGEICONPATH_OFFSET))(this);
	}

	::System::Void set_BadgeIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_BADGEICONPATH_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_DISPLAYITEMLIST_OFFSET))(this);
	}

	::System::Void set_DisplayItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_DISPLAYITEMLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_HandBookDisplayItemList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_GET_HANDBOOKDISPLAYITEMLIST_OFFSET))(this);
	}

	::System::Void set_HandBookDisplayItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_52DE58AEA447C9CD_SET_HANDBOOKDISPLAYITEMLIST_OFFSET))(this, a1);
	}
};
