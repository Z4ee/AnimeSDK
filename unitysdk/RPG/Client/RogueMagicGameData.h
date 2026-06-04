#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_55B1E96AFC09BA51;
class Class_1_70D2E0F3216AAE0C_20;
class Class_1_C74059A83466814F;
class Class_1_E95AD75CA23B8C6C;
class Class_1_F3CA30716D4FAF92_18;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueMagicGameLevelInfo; }
namespace RPG::Client { class RogueMagicGameScorePreviewInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET UNITYSDK_OFFSET(0xC7A05E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC79F1D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC7A0820)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC7A0710)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC7A0A20)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7A07A0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7A0760)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7A07E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xC7A10C0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xC7A0FC0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET UNITYSDK_OFFSET(0xC7A0680)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0xC7A1190)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A1160)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xC7A10E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7A1100)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7A1140)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7A1120)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xC7A1180)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC79F050)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC7A0630)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET UNITYSDK_OFFSET(0xC7A0690)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xC7A10D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0xC7A1260)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7A1170)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xC7A10F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xC7A1110)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7A1150)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xC7A1130)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET UNITYSDK_OFFSET(0xC7A02F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET UNITYSDK_OFFSET(0xC7A04B0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xC7A0350)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC79F790)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC79EC00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameData_TypeDefinitionIndex = 63025;

	class RogueMagicGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicGameScorePreviewInfo* _ScorePreviewInfo_k__BackingField; // 0x10
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _CurDiffCompIDs; // 0x20
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x28
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x30
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x38
		::RPG::Client::RogueMagicGameLevelInfo* _LevelInfo_k__BackingField; // 0x40
		::System::UInt32 _CurAreaID_k__BackingField; // 0x48
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsAreaExtraRoundAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_55B1E96AFC09BA51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_55B1E96AFC09BA51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_F3CA30716D4FAF92_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void SyncReviveCost(::Class_1_C74059A83466814F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET))(this, a1);
		}

		::System::Void SyncScorePreview(::Class_1_70D2E0F3216AAE0C_20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET))(this, a1);
		}

		::System::Void ClearInProgressArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET))(this);
		}

		::System::Boolean IsCurGameExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsCurGameForceHUDUnfolded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicScepterInfo* GetRogueMagicScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAreaInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueMagicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::System::Void set_LevelInfo(::RPG::Client::RogueMagicGameLevelInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicGameLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurDiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameScorePreviewInfo* get_ScorePreviewInfo()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET))(this);
		}

		::System::Boolean get_IsHUDInfoFolded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET))(this);
		}

		::System::Void set_IsHUDInfoFolded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET))(this, a1);
		}
	};
}
