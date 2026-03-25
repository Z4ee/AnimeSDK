#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"

class Class_1_47DBF8E83CEFB101;
class Class_1_49AFAF7E1EDC93F8;
class Class_1_633744E9733BE855_3;
class Class_1_C44A70620E7F1D77;
class Class_1_EF2D3B79941AF6F8_1;
class Class_1_F36D19497C26B279_1;
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

#define RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E0B0)
#define RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x936D3F0)
#define RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x936E360)
#define RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x936ED00)
#define RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0x936E900)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x936D730)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x936EEA0)
#define RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x936FE90)
#define RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x936D130)
#define RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET UNITYSDK_OFFSET(0x936E850)
#define RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E680)
#define RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x936FEA0)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET UNITYSDK_OFFSET(0x936E010)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x936DEB0)
#define RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x936D780)
#define RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E3D0)
#define RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x936CC50)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET UNITYSDK_OFFSET(0x936DC30)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0x936DD50)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x936DDF0)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E4D0)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0x936E770)
#define RPG_CLIENT_CHESSROGUEDATA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x936FEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueData_TypeDefinitionIndex = 54448;

	class ChessRogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::ChessRogueBoardInfo* BoardInfo; // 0x30
		::RPG::Client::ChessRogueInGameStoryInfo* StoryInfo; // 0x38
		::RPG::Client::ChessRogueDiceInfo* DiceInfo; // 0x40
		::RPG::Client::ChessRogueAreaInfo* AreaInfo; // 0x48
		::RPG::Client::RogueNousValueInfo* _NousValueInfo; // 0x50
		::Class_1_C44A70620E7F1D77* _AvatarCollectionBuilder; // 0x58
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

		::System::Void Sync(::Class_1_EF2D3B79941AF6F8_1* chessRogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET))(this, chessRogueInfo);
		}

		::System::Void SyncGamePlay(::Class_1_47DBF8E83CEFB101* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47DBF8E83CEFB101*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET))(this, info);
		}

		::System::Void SyncChessRogueBoardCurCell(::System::UInt32 curCellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET))(this, curCellID);
		}

		::System::Void AddRogueModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET))(this, proto);
		}

		::System::Void UpdateRogueModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET))(this, proto);
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

		::System::Void _RefreshAvatarInfo(::Class_1_F36D19497C26B279_1* lineUpInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET))(this, lineUpInfo);
		}

		::System::Void _RefreshNousValueInfo(::Class_1_633744E9733BE855_3* protoNousValueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_633744E9733BE855_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET))(this, protoNousValueInfo);
		}

		::System::Void _RefreshStoryInfo(::Class_1_EF2D3B79941AF6F8_1* protoInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET))(this, protoInfo);
		}

		::System::Void _TryRefreshRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* modifierList, ::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET))(this, modifierList, proto);
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
