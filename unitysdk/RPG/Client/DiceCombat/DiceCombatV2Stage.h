#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2StageState.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19FEA0E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANNEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19FEA0A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_FIRSTTYPE_OFFSET UNITYSDK_OFFSET(0x19FEA060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_GAMEGROUNDDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FEA160)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x19FE9F70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAIGROUPID_OFFSET UNITYSDK_OFFSET(0x19FEA040)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19FEA000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x19FEA020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x19FE9FE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x19FE9FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19FEA080)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARRARE_OFFSET UNITYSDK_OFFSET(0x19FEA0C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19FE9F80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_TACTICSIDS_OFFSET UNITYSDK_OFFSET(0x19FEA100)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UI3DLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FEA140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x19FEA120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19FEA0F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANNEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19FEA0B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_FIRSTTYPE_OFFSET UNITYSDK_OFFSET(0x19FEA070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_GAMEGROUNDDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FEA170)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAIGROUPID_OFFSET UNITYSDK_OFFSET(0x19FEA050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x19FEA010)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x19FEA030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x19FE9FF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x19FE9FD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19FEA090)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARRARE_OFFSET UNITYSDK_OFFSET(0x19FEA0D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_TACTICSIDS_OFFSET UNITYSDK_OFFSET(0x19FEA110)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UI3DLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19FEA150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x19FEA130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE3F10)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Stage_TypeDefinitionIndex = 72258;

	class DiceCombatV2Stage : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BandAvatarIDs_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* _OpponentData_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _RecommendAvatarList_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _TacticsIDs_k__BackingField; // 0x28
		::System::String* _GameGroundDecoImagePath_k__BackingField; // 0x30
		::System::String* _UI3DLogoImagePath_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _BannedAvatarList_k__BackingField; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _OpponentAvatarIDs_k__BackingField; // 0x48
		::System::UInt32 _OpponentAIGroupID_k__BackingField; // 0x50
		::System::UInt32 _OpponentAvatarLevel_k__BackingField; // 0x54
		::System::UInt32 _RecommendAvatarRare_k__BackingField; // 0x58
		::System::UInt32 _ID_k__BackingField; // 0x5C
		::System::UInt32 _UnlockSubMissionID_k__BackingField; // 0x60
		::System::UInt32 _OpponentID_k__BackingField; // 0x64
		::RPG::GameCore::DiceCombatStageFirstType _FirstType_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTID_OFFSET))(this);
		}

		::System::Void set_OpponentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTID_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get_OpponentData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Void set_OpponentData(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_OpponentAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentAIGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAIGROUPID_OFFSET))(this);
		}

		::System::Void set_OpponentAIGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAIGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatStageFirstType get_FirstType()
		{
			return ((::RPG::GameCore::DiceCombatStageFirstType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_FIRSTTYPE_OFFSET))(this);
		}

		::System::Void set_FirstType(::RPG::GameCore::DiceCombatStageFirstType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatStageFirstType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_FIRSTTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARLIST_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_BannedAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANNEDAVATARLIST_OFFSET))(this);
		}

		::System::Void set_BannedAvatarList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANNEDAVATARLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendAvatarRare()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARRARE_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarRare(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARRARE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BandAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_BandAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_TacticsIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_TACTICSIDS_OFFSET))(this);
		}

		::System::Void set_TacticsIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_TACTICSIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_UnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UNLOCKSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_UI3DLogoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UI3DLOGOIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_UI3DLogoImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UI3DLOGOIMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_GameGroundDecoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_GAMEGROUNDDECOIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_GameGroundDecoImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_GAMEGROUNDDECOIMAGEPATH_OFFSET))(this, a1);
		}
	};
}
