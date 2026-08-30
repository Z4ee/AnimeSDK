#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0_1;
class Class_1_6CF32442E7A80121_1;
class Class_1_D17272E82AE804C2_240;
class Class_1_D17272E82AE804C2_242;
class Class_1_F1F83A16E5B8B459_1;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB36920)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EC50)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EBD0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EF80)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EFA0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET UNITYSDK_OFFSET(0x1CB3EFC0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x1CB3F0D0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1CB3F0B0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1CB3F020)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1CB365E0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EF90)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0x1CB3EFB0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1CB3F0C0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1CB38E50)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x1CB3ECD0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET UNITYSDK_OFFSET(0x1CB3ED40)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET UNITYSDK_OFFSET(0x1CB3EEF0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CB38C80)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB36410)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueInGameStoryInfo_TypeDefinitionIndex = 66972;

	class ChessRogueInGameStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredSubStoryIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendedSubStoryIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubStorySelectedOptionDialogueEventIDs_k__BackingField; // 0x20
		::System::UInt32 _WaitingSubStoryFinishLayerIndex; // 0x28
		::System::UInt32 _CurMainStoryID_k__BackingField; // 0x2C
		::System::UInt32 _CurSubStoryID_k__BackingField; // 0x30

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

		::System::UInt32 GetTriggeredSubStoryID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRecommendedSubStoryID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_07701BC2FDC5E4E0_1* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Sync_1(::Class_1_F1F83A16E5B8B459_1* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Void Sync_2(::Class_1_D17272E82AE804C2_240* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_240*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET))(this, a1);
		}

		::System::Void Sync_3(::Class_1_D17272E82AE804C2_242* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_242*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET))(this, a1);
		}

		::System::Void Sync_4(::Class_1_6CF32442E7A80121_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurMainStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET))(this);
		}

		::System::Void set_CurMainStoryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET))(this);
		}

		::System::Void set_CurSubStoryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET))(this, a1);
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

		::System::Void set_SubStorySelectedOptionDialogueEventIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendedSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET))(this);
		}
	};
}
