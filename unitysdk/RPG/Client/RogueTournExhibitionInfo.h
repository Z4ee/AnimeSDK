#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_82;
class Class_1_1CBA230307F9C289_84;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournExhibitionBoothData; }
namespace RPG::Client { class RogueTournExhibitionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x19C24670)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0x19C24580)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C23210)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_EDITBOOTHEXHIBITION_OFFSET UNITYSDK_OFFSET(0x19C24710)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x19C24F10)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0x19C24CF0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETDISPLAYEDEXHIBITIONEDITED_OFFSET UNITYSDK_OFFSET(0x19C249F0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETUNSEENEXHIBITIONIDS_OFFSET UNITYSDK_OFFSET(0x19C253B0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0x19C25E20)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19C25E60)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_EXHIBITIONS_OFFSET UNITYSDK_OFFSET(0x19C25DE0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19C25CF0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GET_UNLOCKEDEXHIBITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19C25EB0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x19C22DE0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETALLUNLOCKEDEXHIBITIONSSEEN_OFFSET UNITYSDK_OFFSET(0x19C259A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETEXHIBITIONSEEN_OFFSET UNITYSDK_OFFSET(0x19C257F0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETPREVIEWBOOTHEXHIBITION_OFFSET UNITYSDK_OFFSET(0x19C24280)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0x19C238C0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCEXHIBITIONS_OFFSET UNITYSDK_OFFSET(0x19C23370)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_TRYGETPREVIEWEXHIBITION_OFFSET UNITYSDK_OFFSET(0x19C24440)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C22BC0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__GETEXHIBITION_OFFSET UNITYSDK_OFFSET(0x19C24C40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionInfo_TypeDefinitionIndex = 64577;

	class RogueTournExhibitionInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptyExhibitionID = 0x0; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>* _Exhibitions_ReadOnly; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>* _Booths; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Exhibition; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionBoothData*>* _Booths_ReadOnly; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournExhibitionData*>* _Exhibitions; // 0x30
		::System::Boolean _IsInPreview; // 0x38
		::System::Boolean _IsEditing; // 0x39
		::System::UInt32 _PreviewBoothID; // 0x3C
		::System::UInt32 _PreviewExhibitionID; // 0x40

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

		::System::Void SyncExhibitions(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_82*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_82*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCEXHIBITIONS_OFFSET))(this, a1);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_84*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_84*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SYNCBOOTHS_OFFSET))(this, a1);
		}

		::System::Void SetPreviewBoothExhibition(::RPG::Client::RogueTournExhibitionBoothData* a1, ::RPG::Client::RogueTournExhibitionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETPREVIEWBOOTHEXHIBITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetPreviewExhibition(::RPG::Client::RogueTournExhibitionBoothData* a1, ::RPG::Client::RogueTournExhibitionData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_TRYGETPREVIEWEXHIBITION_OFFSET))(this, a1, a2);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothExhibition(::RPG::Client::RogueTournExhibitionBoothData* a1, ::RPG::Client::RogueTournExhibitionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_EDITBOOTHEXHIBITION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueTournExhibitionData* GetDisplayedExhibitionEdited(::RPG::Client::RogueTournExhibitionBoothData* a1)
		{
			return ((::RPG::Client::RogueTournExhibitionData*(*)(::PVOID, ::RPG::Client::RogueTournExhibitionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETDISPLAYEDEXHIBITIONEDITED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournExhibitionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournExhibitionData* a1)
		{
			return ((::RPG::Client::RogueTournExhibitionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenExhibitionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_GETUNSEENEXHIBITIONIDS_OFFSET))(this);
		}

		::System::Void SetExhibitionSeen(::RPG::Client::RogueTournExhibitionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETEXHIBITIONSEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllUnlockedExhibitionsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO_SETALLUNLOCKEDEXHIBITIONSSEEN_OFFSET))(this);
		}

		::RPG::Client::RogueTournExhibitionData* _GetExhibition(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournExhibitionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO__GETEXHIBITION_OFFSET))(this, a1);
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
