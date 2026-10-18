#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFinalityBattle/Level/FinalityBattleDifficultyLevel.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_54A2EB293CF77FFF_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0x1C523320)
#define CLASS_1_54A2EB293CF77FFF_GET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x1C523340)
#define CLASS_1_54A2EB293CF77FFF_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x1C5232E0)
#define CLASS_1_54A2EB293CF77FFF_GET_EXTRASUPPORTERAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C523380)
#define CLASS_1_54A2EB293CF77FFF_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C5232C0)
#define CLASS_1_54A2EB293CF77FFF_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C523300)
#define CLASS_1_54A2EB293CF77FFF_GET_SUPPORTERSPECIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C523360)
#define CLASS_1_54A2EB293CF77FFF_GET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x1C5233A0)
#define CLASS_1_54A2EB293CF77FFF_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0x1C523330)
#define CLASS_1_54A2EB293CF77FFF_SET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x1C523350)
#define CLASS_1_54A2EB293CF77FFF_SET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0x1C5232F0)
#define CLASS_1_54A2EB293CF77FFF_SET_EXTRASUPPORTERAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C523390)
#define CLASS_1_54A2EB293CF77FFF_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C5232D0)
#define CLASS_1_54A2EB293CF77FFF_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C523310)
#define CLASS_1_54A2EB293CF77FFF_SET_SUPPORTERSPECIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C523370)
#define CLASS_1_54A2EB293CF77FFF_SET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x1C5233B0)
#define CLASS_1_54A2EB293CF77FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5233C0)

inline static constexpr unsigned int Class_1_54A2EB293CF77FFF_TypeDefinitionIndex = 41911;

class Class_1_54A2EB293CF77FFF : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ExtraSupporterAvatarIDs_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleTargetIDs_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _SupporterSpecialAvatarIDs_k__BackingField; // 0x20
	::System::UInt32 _StageID_k__BackingField; // 0x28
	::System::UInt32 _BattleAreaID_k__BackingField; // 0x2C
	::System::UInt32 _ID_k__BackingField; // 0x30
	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleDifficultyLevel _DifficultyLevel_k__BackingField; // 0x34
	::System::UInt32 _UnlockQuestID_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleDifficultyLevel get_DifficultyLevel()
	{
		return ((::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleDifficultyLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_DIFFICULTYLEVEL_OFFSET))(this);
	}

	::System::Void set_DifficultyLevel(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleDifficultyLevel a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleDifficultyLevel))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_DIFFICULTYLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_StageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_STAGEID_OFFSET))(this);
	}

	::System::Void set_StageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_STAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BattleAreaID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_BATTLEAREAID_OFFSET))(this);
	}

	::System::Void set_BattleAreaID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_BATTLEAREAID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleTargetIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_BATTLETARGETIDS_OFFSET))(this);
	}

	::System::Void set_BattleTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_BATTLETARGETIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_SupporterSpecialAvatarIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_SUPPORTERSPECIALAVATARIDS_OFFSET))(this);
	}

	::System::Void set_SupporterSpecialAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_SUPPORTERSPECIALAVATARIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ExtraSupporterAvatarIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_EXTRASUPPORTERAVATARIDS_OFFSET))(this);
	}

	::System::Void set_ExtraSupporterAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_EXTRASUPPORTERAVATARIDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnlockQuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_GET_UNLOCKQUESTID_OFFSET))(this);
	}

	::System::Void set_UnlockQuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54A2EB293CF77FFF_SET_UNLOCKQUESTID_OFFSET))(this, a1);
	}
};
