#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"

class Class_1_14E02E1F6D70E487_3;
class Class_1_69A5DDEA5F31A2DF_1;
class Class_1_D818CA99906737D6;
class Class_1_E95AD75CA23B8C6C;
class Class_1_EA5A5E4D07C4CF2B_3;
class Class_1_FBCD4FF549575A07;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChessRogueAeonInfo; }
namespace RPG::Client { class ChessRogueAreaInfo; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::Client { class ChessRogueBoardInfo; }
namespace RPG::Client { class ChessRogueDiceInfo; }
namespace RPG::Client { class ChessRogueInGameStoryInfo; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousValueInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB6520C0)
#define RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB651430)
#define RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0xB652430)
#define RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xB652D30)
#define RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0xB6529F0)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xB651730)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xB652EA0)
#define RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB653E80)
#define RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB651170)
#define RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET UNITYSDK_OFFSET(0xB652940)
#define RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB652750)
#define RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB653E90)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET UNITYSDK_OFFSET(0xB652020)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB651EC0)
#define RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB651780)
#define RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB6524A0)
#define RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB650C90)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB651C10)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0xB651D60)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xB651E00)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB6525A0)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB652840)
#define RPG_CLIENT_CHESSROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB653EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueData_TypeDefinitionIndex = 62569;

	class ChessRogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::ChessRogueBoardInfo* BoardInfo; // 0x30
		::RPG::Client::ChessRogueAeonInfo* AeonInfo; // 0x38
		::RPG::Client::ChessRogueInGameStoryInfo* StoryInfo; // 0x40
		::RPG::Client::ChessRogueDiceInfo* DiceInfo; // 0x48
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x50
		::RPG::Client::ChessRogueAreaInfo* AreaInfo; // 0x58
		::RPG::Client::RogueNousValueInfo* _NousValueInfo; // 0x60
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

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncGamePlay(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET))(this, a1);
		}

		::System::Void SyncChessRogueBoardCurCell(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET))(this, a1);
		}

		::System::Void AddRogueModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateRogueModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveRogueModifier(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET))(this, a1);
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

		::System::Void _RefreshAvatarInfo(::Class_1_69A5DDEA5F31A2DF_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshNousValueInfo(::Class_1_EA5A5E4D07C4CF2B_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshStoryInfo(::Class_1_14E02E1F6D70E487_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1, ::Class_1_D818CA99906737D6* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Void _TryRemoveRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
