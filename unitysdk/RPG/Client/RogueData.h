#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_27.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_59B86BCB4AA13938;
class Class_1_BDE0598EF34BE45E;
class Class_1_D17CAE2570A8D8F0;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace RPG::Client { class RogueMapData; }
namespace RPG::Client { class RogueProgressInfo; }
namespace RPG::GameCore { class RogueManagerRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB02C3B0)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTEXPLORESITENAME_OFFSET UNITYSDK_OFFSET(0xB02CB80)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xB02CC10)
#define RPG_CLIENT_ROGUEDATA_GETFINISHEDAREACOUNT_OFFSET UNITYSDK_OFFSET(0xB02CCA0)
#define RPG_CLIENT_ROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xB02CDE0)
#define RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB02C4B0)
#define RPG_CLIENT_ROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xB02CF00)
#define RPG_CLIENT_ROGUEDATA_GETSELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xB02D350)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB02D2B0)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xB02D300)
#define RPG_CLIENT_ROGUEDATA_GETUNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0xB02D3A0)
#define RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB02D4D0)
#define RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xB02D470)
#define RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB02D4F0)
#define RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0xB02D490)
#define RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xB02D530)
#define RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xB02D510)
#define RPG_CLIENT_ROGUEDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0xB02D3F0)
#define RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xB02D4B0)
#define RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0xB02D550)
#define RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB02D4E0)
#define RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xB02D480)
#define RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB02D500)
#define RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0xB02D4A0)
#define RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xB02D540)
#define RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xB02D520)
#define RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xB02D4C0)
#define RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0xB02D560)
#define RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET UNITYSDK_OFFSET(0xB02C500)
#define RPG_CLIENT_ROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB02C050)
#define RPG_CLIENT_ROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB02D570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueData_TypeDefinitionIndex = 62170;

	class RogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockConsumeItemType; // 0x30
		::RPG::Client::RogueProgressInfo* _ProgressInfo_k__BackingField; // 0x38
		::RPG::Client::RogueMapData* _MapData_k__BackingField; // 0x40
		::Class_1_D17CAE2570A8D8F0* _AvatarCollectionBuilder; // 0x48
		::RPG::GameCore::RogueManagerRow* _RogueRow; // 0x50
		::Class_1_59B86BCB4AA13938* _SelectAeonInfo_k__BackingField; // 0x58
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x60
		::System::UInt32 _SeasonID_k__BackingField; // 0x64
		::System::Boolean _IsExploreWin_k__BackingField; // 0x68
		::Enum_3_4608E37A1B3D374A_27 _CurrentStatus_k__BackingField; // 0x6C
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void SyncRogueData(::Class_1_BDE0598EF34BE45E* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET))(this, rogueInfo);
		}

		::RPG::Client::TextID GetCurrentExploreSiteName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETCURRENTEXPLORESITENAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetFinishedAreaCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETFINISHEDAREACOUNT_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::RPG::Client::RogueAeonBuffInfo* GetSelectedRogueAeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONBUFFINFO_OFFSET))(this);
		}

		::System::UInt32 GetSelectedRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETSELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::UInt32 GetUnlockAeonEnhanceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETUNLOCKAEONENHANCENUM_OFFSET))(this);
		}

		::RPG::GameCore::RogueManagerRow* get_RogueRow()
		{
			return ((::RPG::GameCore::RogueManagerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ROGUEROW_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_27 get_CurrentStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_27(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Enum_3_4608E37A1B3D374A_27 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_27))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsExploreWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET))(this);
		}

		::System::Void set_IsExploreWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::RogueProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::RogueProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET))(this);
		}

		::System::Void set_ProgressInfo(::RPG::Client::RogueProgressInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMapData* get_MapData()
		{
			return ((::RPG::Client::RogueMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET))(this);
		}

		::System::Void set_MapData(::RPG::Client::RogueMapData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET))(this, value);
		}

		::Class_1_59B86BCB4AA13938* get_SelectAeonInfo()
		{
			return ((::Class_1_59B86BCB4AA13938*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET))(this);
		}

		::System::Void set_SelectAeonInfo(::Class_1_59B86BCB4AA13938* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_59B86BCB4AA13938*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
