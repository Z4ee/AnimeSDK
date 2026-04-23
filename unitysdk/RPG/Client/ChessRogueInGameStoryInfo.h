#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24B2AFBC155BAEAC;
class Class_1_6CF32442E7A80121_1;
class Class_1_D17272E82AE804C2_200;
class Class_1_D1E0AD3915BCCF29_21;
class Class_1_FB4A4ADDA7338C08_1;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDB3A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE2AE0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE2A70)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE3060)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE3080)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET UNITYSDK_OFFSET(0x9FE30A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x9FE31B0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x9FE3190)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9FE3100)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9FDB070)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE3070)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x9FE3090)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x9FE31A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9FDD950)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x9FE2B50)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET UNITYSDK_OFFSET(0x9FE2BC0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET UNITYSDK_OFFSET(0x9FE2FD0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9FDD740)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE31C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueInGameStoryInfo_TypeDefinitionIndex = 61681;

	class ChessRogueInGameStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubStorySelectedOptionDialogueEventIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendedSubStoryIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredSubStoryIDs; // 0x20
		::System::UInt32 _CurMainStoryID_k__BackingField; // 0x28
		::System::UInt32 _CurSubStoryID_k__BackingField; // 0x2C
		::System::UInt32 _WaitingSubStoryFinishLayerIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetTriggeredSubStoryID(::System::Int32 layerIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET))(this, layerIndex);
		}

		::System::UInt32 GetRecommendedSubStoryID(::System::Int32 layerIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET))(this, layerIndex);
		}

		::System::Void Sync(::Class_1_FB4A4ADDA7338C08_1* proto, ::System::UInt32 curLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET))(this, proto, curLayerIndex);
		}

		::System::Void Sync_1(::Class_1_24B2AFBC155BAEAC* proto, ::System::UInt32 curLayerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET))(this, proto, curLayerIndex);
		}

		::System::Void Sync_2(::Class_1_D17272E82AE804C2_200* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_200*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET))(this, proto);
		}

		::System::Void Sync_3(::Class_1_D1E0AD3915BCCF29_21* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET))(this, proto);
		}

		::System::Void Sync_4(::Class_1_6CF32442E7A80121_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET))(this, proto);
		}

		::System::UInt32 get_CurMainStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET))(this);
		}

		::System::Void set_CurMainStoryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSubStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET))(this);
		}

		::System::Void set_CurSubStoryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnfinishedSubStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET))(this);
		}

		::System::UInt32 get_WaitingSubStoryFinishLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SubStorySelectedOptionDialogueEventIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this);
		}

		::System::Void set_SubStorySelectedOptionDialogueEventIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendedSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET))(this);
		}
	};
}
