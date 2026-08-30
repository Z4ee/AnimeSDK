#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_29.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_20D743894CDF214D_3;
class Class_1_59B86BCB4AA13938;
class Class_1_E95AD75CA23B8C6C;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace RPG::Client { class RogueMapData; }
namespace RPG::Client { class RogueProgressInfo; }
namespace RPG::GameCore { class RogueManagerRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC7FA60)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTEXPLORESITENAME_OFFSET UNITYSDK_OFFSET(0x1BC80320)
#define RPG_CLIENT_ROGUEDATA_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0x1BC803B0)
#define RPG_CLIENT_ROGUEDATA_GETFINISHEDAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1BC80400)
#define RPG_CLIENT_ROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1BC80530)
#define RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1BC7FAF0)
#define RPG_CLIENT_ROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1BC80650)
#define RPG_CLIENT_ROGUEDATA_GETSELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x1BC80A10)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1BC80970)
#define RPG_CLIENT_ROGUEDATA_GETSELECTEDROGUEAEONID_OFFSET UNITYSDK_OFFSET(0x1BC809C0)
#define RPG_CLIENT_ROGUEDATA_GETUNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0x1BC80A60)
#define RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BC80B90)
#define RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1BC80B30)
#define RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BC80BB0)
#define RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0x1BC80B50)
#define RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1BC80BF0)
#define RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x1BC80BD0)
#define RPG_CLIENT_ROGUEDATA_GET_ROGUEROW_OFFSET UNITYSDK_OFFSET(0x1BC80AB0)
#define RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1BC80B70)
#define RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0x1BC80C10)
#define RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BC80BA0)
#define RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1BC80B40)
#define RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BC80BC0)
#define RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET UNITYSDK_OFFSET(0x1BC80B60)
#define RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1BC80C00)
#define RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x1BC80BE0)
#define RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1BC80B80)
#define RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET UNITYSDK_OFFSET(0x1BC80C20)
#define RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET UNITYSDK_OFFSET(0x1BC7FB40)
#define RPG_CLIENT_ROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7F710)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueData_TypeDefinitionIndex = 67466;

	class RogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::RogueProgressInfo* _ProgressInfo_k__BackingField; // 0x30
		::RPG::Client::RogueMapData* _MapData_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockConsumeItemType; // 0x40
		::Class_1_59B86BCB4AA13938* _SelectAeonInfo_k__BackingField; // 0x48
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x50
		::RPG::GameCore::RogueManagerRow* _RogueRow; // 0x58
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x60
		::System::Boolean _IsExploreWin_k__BackingField; // 0x64
		::System::UInt32 _SeasonID_k__BackingField; // 0x68
		::Enum_3_4608E37A1B3D374A_29 _CurrentStatus_k__BackingField; // 0x6C
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void SyncRogueData(::Class_1_20D743894CDF214D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SYNCROGUEDATA_OFFSET))(this, a1);
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

		::Enum_3_4608E37A1B3D374A_29 get_CurrentStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Enum_3_4608E37A1B3D374A_29 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExploreWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ISEXPLOREWIN_OFFSET))(this);
		}

		::System::Void set_IsExploreWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ISEXPLOREWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SEASONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::RogueProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_PROGRESSINFO_OFFSET))(this);
		}

		::System::Void set_ProgressInfo(::RPG::Client::RogueProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_PROGRESSINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMapData* get_MapData()
		{
			return ((::RPG::Client::RogueMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_MAPDATA_OFFSET))(this);
		}

		::System::Void set_MapData(::RPG::Client::RogueMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_MAPDATA_OFFSET))(this, a1);
		}

		::Class_1_59B86BCB4AA13938* get_SelectAeonInfo()
		{
			return ((::Class_1_59B86BCB4AA13938*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_GET_SELECTAEONINFO_OFFSET))(this);
		}

		::System::Void set_SelectAeonInfo(::Class_1_59B86BCB4AA13938* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_59B86BCB4AA13938*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEDATA_SET_SELECTAEONINFO_OFFSET))(this, a1);
		}
	};
}
