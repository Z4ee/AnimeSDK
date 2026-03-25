#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_55B1E96AFC09BA51;
class Class_1_6238D7FF0191672E_15;
class Class_1_6949CBEE02AA8B1E_4;
class Class_1_C44A70620E7F1D77;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueMagicGameLevelInfo; }
namespace RPG::Client { class RogueMagicGameScorePreviewInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET UNITYSDK_OFFSET(0xA31BAE0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31A6D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA31BD20)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA31BC10)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA31BF20)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA31BCA0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA31BC60)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA31BCE0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA31C690)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xA31C560)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA31BB80)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0xA31C760)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA31C730)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA31C6B0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA31C6D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA31C710)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA31C6F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xA31C750)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA31A540)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA31BB30)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET UNITYSDK_OFFSET(0xA31BB90)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA31C6A0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0xA31C830)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA31C740)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA31C6C0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xA31C6E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA31C720)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xA31C700)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET UNITYSDK_OFFSET(0xA31B7F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET UNITYSDK_OFFSET(0xA31B9B0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xA31B850)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA31AD10)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA31A0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameData_TypeDefinitionIndex = 54904;

	class RogueMagicGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CurDiffCompIDs; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewInfo* _ScorePreviewInfo_k__BackingField; // 0x18
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::RogueMagicGameLevelInfo* _LevelInfo_k__BackingField; // 0x28
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x30
		::Class_1_C44A70620E7F1D77* _AvatarCollectionBuilder; // 0x38
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x40
		::System::UInt32 _CurAreaID_k__BackingField; // 0x48
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsAreaExtraRoundAvailable(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET))(areaID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_55B1E96AFC09BA51* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_55B1E96AFC09BA51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void Sync_1(::Class_1_6949CBEE02AA8B1E_4* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET))(this, proto);
		}

		::System::Void SyncReviveCost(::Class_1_4D5D53619B020DDD* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET))(this, proto);
		}

		::System::Void SyncScorePreview(::Class_1_6238D7FF0191672E_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET))(this, proto);
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

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
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

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET))(this, value);
		}

		::System::Boolean get_HasAreaInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueMagicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::System::Void set_LevelInfo(::RPG::Client::RogueMagicGameLevelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicGameLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, value);
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

		::System::Void set_IsHUDInfoFolded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET))(this, value);
		}
	};
}
