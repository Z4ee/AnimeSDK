#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_49;
class Class_1_35B19D34B208E77E_23;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournCollectionBoothData; }
namespace RPG::Client { class RogueTournCollectionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0xA3870A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0xA386FC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3860A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA387160)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0xA3876C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0xA3874D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET UNITYSDK_OFFSET(0xA387300)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET UNITYSDK_OFFSET(0xA388480)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0xA387AD0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0xA3887E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA3887F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET UNITYSDK_OFFSET(0xA3887D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA3886E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA388840)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA385B20)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET UNITYSDK_OFFSET(0xA3880D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET UNITYSDK_OFFSET(0xA387EA0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET UNITYSDK_OFFSET(0xA387D60)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA386DC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0xA386660)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET UNITYSDK_OFFSET(0xA386230)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA386F20)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA385900)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA387460)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionInfo_TypeDefinitionIndex = 55085;

	class RogueTournCollectionInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptyCollectionID = 0x0; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Collection; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths; // 0x18
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths_ReadOnly; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections_ReadOnly; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections; // 0x30
		::System::Boolean _IsEditing; // 0x38
		::System::Boolean _IsInPreview; // 0x39
		::System::UInt32 _PreviewBoothID; // 0x3C
		::System::UInt32 _PreviewCollectionID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncCollections(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_49*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET))(this, proto);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_23*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_23*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET))(this, proto);
		}

		::System::Void SetPreviewBoothCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET))(this, booth, collection);
		}

		::System::Boolean TryGetPreviewCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData*& collection)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET))(this, booth, collection);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET))(this, booth, collection);
		}

		::RPG::Client::RogueTournCollectionData* GetDisplayedCollectionEdited(::RPG::Client::RogueTournCollectionBoothData* booth)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET))(this, booth);
		}

		::RPG::Client::RogueTournCollectionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::RPG::Client::RogueTournCollectionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, collection);
		}

		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenCollectionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET))(this);
		}

		::System::Void SetCollectionSeen(::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET))(this, collection);
		}

		::System::Void SetAllUnlockedCollectionsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET))(this);
		}

		::System::Boolean IsAnyCollectionNotDisplayedEdited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNotDisplayingCollectionBoothIDsEdited()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET))(this);
		}

		::RPG::Client::RogueTournCollectionData* _GetCollection(::System::UInt32 collectionID)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET))(this, collectionID);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* get_Collections()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* get_Booths()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET))(this);
		}

		::System::UInt32 get_CollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET))(this);
		}
	};
}
