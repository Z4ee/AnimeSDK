#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"

class Class_1_14E02E1F6D70E487_3;
class Class_1_54D5F60E7D5A40F8;
class Class_1_69A5DDEA5F31A2DF_1;
class Class_1_D17CAE2570A8D8F0;
class Class_1_EA5A5E4D07C4CF2B_3;
class Class_1_FBCD4FF549575A07;
namespace RPG::Client { class ChessRogueAeonInfo; }
namespace RPG::Client { class ChessRogueAreaInfo; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::Client { class ChessRogueBoardInfo; }
namespace RPG::Client { class ChessRogueDiceInfo; }
namespace RPG::Client { class ChessRogueInGameStoryInfo; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RogueNousValueInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FDBE20)
#define RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDB170)
#define RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x9FDC0D0)
#define RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9FDCA70)
#define RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0x9FDC670)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9FDB4A0)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9FDCC10)
#define RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9FDDC00)
#define RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9FDAEB0)
#define RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET UNITYSDK_OFFSET(0x9FDC5C0)
#define RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FDC3F0)
#define RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9FDDC10)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET UNITYSDK_OFFSET(0x9FDBD80)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x9FDBC20)
#define RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FDB4F0)
#define RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FDC140)
#define RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDA9D0)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9FDB9A0)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0x9FDBAC0)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x9FDBB60)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FDC240)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9FDC4E0)
#define RPG_CLIENT_CHESSROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDDC20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueData_TypeDefinitionIndex = 61636;

	class ChessRogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::ChessRogueDiceInfo* DiceInfo; // 0x30
		::RPG::Client::ChessRogueInGameStoryInfo* StoryInfo; // 0x38
		::Class_1_D17CAE2570A8D8F0* _AvatarCollectionBuilder; // 0x40
		::RPG::Client::RogueNousValueInfo* _NousValueInfo; // 0x48
		::RPG::Client::ChessRogueBoardInfo* BoardInfo; // 0x50
		::RPG::Client::ChessRogueAreaInfo* AreaInfo; // 0x58
		::RPG::Client::ChessRogueAeonInfo* AeonInfo; // 0x60
		::System::Boolean _IsFinished_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_3* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET))(this, chessRogueInfo);
		}

		::System::Void SyncGamePlay(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET))(this, info);
		}

		::System::Void SyncChessRogueBoardCurCell(::System::UInt32 curCellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET))(this, curCellID);
		}

		::System::Void AddRogueModifier(::Class_1_54D5F60E7D5A40F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET))(this, proto);
		}

		::System::Void UpdateRogueModifier(::Class_1_54D5F60E7D5A40F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET))(this, proto);
		}

		::System::Void RemoveRogueModifier(::System::UInt64 modifierID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET))(this, modifierID);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetCurChessRogueBoardDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET))(this);
		}

		::System::Boolean IsInChessRogueStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET))(this);
		}

		::RPG::Client::RogueNousValueInfo* GetNousValueInfo()
		{
			return ((::RPG::Client::RogueNousValueInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void _RefreshAvatarInfo(::Class_1_69A5DDEA5F31A2DF_1* lineUpInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET))(this, lineUpInfo);
		}

		::System::Void _RefreshNousValueInfo(::Class_1_EA5A5E4D07C4CF2B_3* protoNousValueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET))(this, protoNousValueInfo);
		}

		::System::Void _RefreshStoryInfo(::Class_1_14E02E1F6D70E487_3* protoInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET))(this, protoInfo);
		}

		::System::Void _TryRefreshRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* modifierList, ::Class_1_54D5F60E7D5A40F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET))(this, modifierList, proto);
		}

		::System::Void _TryRemoveRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* modifierList, ::System::UInt64 modifierID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET))(this, modifierList, modifierID);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
