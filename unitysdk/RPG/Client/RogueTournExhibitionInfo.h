#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_50;
class Class_1_35B19D34B208E77E_22;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournExhibitionBoothData; }
namespace RPG::Client { class RogueTournExhibitionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0xA38D130)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0xA38D050)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38C180)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_EDITBOOTHEXHIBITION_OFFSET UNITYSDK_OFFSET(0xA38D1E0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0xA38D6A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0xA38D490)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETDISPLAYEDEXHIBITIONEDITED_OFFSET UNITYSDK_OFFSET(0xA38D2C0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETUNSEENEXHIBITIONIDS_OFFSET UNITYSDK_OFFSET(0xA38DAA0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0xA38E270)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA38E280)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONS_OFFSET UNITYSDK_OFFSET(0xA38E260)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA38E170)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_UNLOCKEDEXHIBITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA38E2D0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA38BC00)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETALLUNLOCKEDEXHIBITIONSSEEN_OFFSET UNITYSDK_OFFSET(0xA38DEF0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETEXHIBITIONSEEN_OFFSET UNITYSDK_OFFSET(0xA38DD80)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETPREVIEWBOOTHEXHIBITION_OFFSET UNITYSDK_OFFSET(0xA38CE80)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0xA38C730)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCEXHIBITIONS_OFFSET UNITYSDK_OFFSET(0xA38C300)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_TRYGETPREVIEWEXHIBITION_OFFSET UNITYSDK_OFFSET(0xA38CFB0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA38B9E0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__GETEXHIBITION_OFFSET UNITYSDK_OFFSET(0xA38D420)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionInfo_TypeDefinitionIndex = 55089;

	class RogueTournExhibitionInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptyExhibitionID = 0x0; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>* _Exhibitions_ReadOnly; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>* _Exhibitions; // 0x18
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>* _Booths_ReadOnly; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Exhibition; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>* _Booths; // 0x30
		::System::UInt32 _PreviewBoothID; // 0x38
		::System::UInt32 _PreviewExhibitionID; // 0x3C
		::System::Boolean _IsEditing; // 0x40
		::System::Boolean _IsInPreview; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncExhibitions(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_50*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_50*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCEXHIBITIONS_OFFSET))(this, proto);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_22*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_22*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCBOOTHS_OFFSET))(this, proto);
		}

		::System::Void SetPreviewBoothExhibition(::RPG::Client::RogueTournExhibitionBoothData* booth, ::RPG::Client::RogueTournExhibitionData* exhibition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETPREVIEWBOOTHEXHIBITION_OFFSET))(this, booth, exhibition);
		}

		::System::Boolean TryGetPreviewExhibition(::RPG::Client::RogueTournExhibitionBoothData* booth, ::RPG::Client::RogueTournExhibitionData*& exhibition)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_TRYGETPREVIEWEXHIBITION_OFFSET))(this, booth, exhibition);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothExhibition(::RPG::Client::RogueTournExhibitionBoothData* booth, ::RPG::Client::RogueTournExhibitionData* exhibition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_EDITBOOTHEXHIBITION_OFFSET))(this, booth, exhibition);
		}

		::RPG::Client::RogueTournExhibitionData* GetDisplayedExhibitionEdited(::RPG::Client::RogueTournExhibitionBoothData* booth)
		{
			return ((::RPG::Client::RogueTournExhibitionData*(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETDISPLAYEDEXHIBITIONEDITED_OFFSET))(this, booth);
		}

		::RPG::Client::RogueTournExhibitionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournExhibitionData* exhibition)
		{
			return ((::RPG::Client::RogueTournExhibitionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, exhibition);
		}

		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenExhibitionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETUNSEENEXHIBITIONIDS_OFFSET))(this);
		}

		::System::Void SetExhibitionSeen(::RPG::Client::RogueTournExhibitionData* exhibition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETEXHIBITIONSEEN_OFFSET))(this, exhibition);
		}

		::System::Void SetAllUnlockedExhibitionsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETALLUNLOCKEDEXHIBITIONSSEEN_OFFSET))(this);
		}

		::RPG::Client::RogueTournExhibitionData* _GetExhibition(::System::UInt32 exhibitionID)
		{
			return ((::RPG::Client::RogueTournExhibitionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__GETEXHIBITION_OFFSET))(this, exhibitionID);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>* get_Exhibitions()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>* get_Booths()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_BOOTHS_OFFSET))(this);
		}

		::System::UInt32 get_ExhibitionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedExhibitionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_UNLOCKEDEXHIBITIONCOUNT_OFFSET))(this);
		}
	};
}
