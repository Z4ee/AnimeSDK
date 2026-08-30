#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_82;
class Class_1_1CBA230307F9C289_84;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournCollectionBoothData; }
namespace RPG::Client { class RogueTournCollectionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x1AF0D6F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0x1AF0D600)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF0C260)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF0D790)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x1AF0E0A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0x1AF0DEB0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET UNITYSDK_OFFSET(0x1AF0DBB0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET UNITYSDK_OFFSET(0x1AF0F390)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0x1AF0E550)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0x1AF0F8B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF0F8F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF0F870)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AF0F780)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF0F940)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AF0BE30)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET UNITYSDK_OFFSET(0x1AF0EDD0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET UNITYSDK_OFFSET(0x1AF0EAC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET UNITYSDK_OFFSET(0x1AF0E940)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF0D2E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0x1AF0C910)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF0C3C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF0D4C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0BBE0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF0DE00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionInfo_TypeDefinitionIndex = 67569;

	class RogueTournCollectionInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptyCollectionID = 0x0; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Collection; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths; // 0x18
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths_ReadOnly; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections; // 0x28
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections_ReadOnly; // 0x30
		::System::UInt32 _PreviewCollectionID; // 0x38
		::System::Boolean _IsInPreview; // 0x3C
		::System::Boolean _IsEditing; // 0x3D
		::System::UInt32 _PreviewBoothID; // 0x40

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

		::System::Void SyncCollections(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_84*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_84*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET))(this, a1);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_82*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_82*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET))(this, a1);
		}

		::System::Void SetPreviewBoothCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetPreviewCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET))(this, a1, a2);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueTournCollectionData* GetDisplayedCollectionEdited(::RPG::Client::RogueTournCollectionBoothData* a1)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournCollectionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::RPG::Client::RogueTournCollectionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenCollectionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET))(this);
		}

		::System::Void SetCollectionSeen(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET))(this, a1);
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

		::RPG::Client::RogueTournCollectionData* _GetCollection(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET))(this, a1);
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
