#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }
namespace RPG::Client { class IRogueTournPersonaMapTabProgressItem; }
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB0F6420)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GETPROGRESSITEM_OFFSET UNITYSDK_OFFSET(0xB0F6E20)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GETSELECTEDROOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xB0F71D0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYERNUMTEXTID_OFFSET UNITYSDK_OFFSET(0xB0F5FC0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xB0F5F40)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xB0F63B0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0xB0F60D0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURROOM_OFFSET UNITYSDK_OFFSET(0xB0F6180)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xB0F6EB0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_PROGRESSITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0xB0F5EF0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_SELECTEDROOM_OFFSET UNITYSDK_OFFSET(0xB0F6400)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB0F62B0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_SELECTROOMBYINDEX_OFFSET UNITYSDK_OFFSET(0xB0F7000)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_SET_SELECTEDROOM_OFFSET UNITYSDK_OFFSET(0xB0F6410)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F64E0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INITPROGRESSITEMS_OFFSET UNITYSDK_OFFSET(0xB0F65A0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INITSELECTEDROOM_OFFSET UNITYSDK_OFFSET(0xB0F6DD0)
#define RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xB0F6530)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaMapTabViewModel_TypeDefinitionIndex = 67167;

	class RogueTournPersonaMapTabViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaMapTabProgressItem*>* _ProgressItems; // 0x20
		::RPG::Client::IRogueTournPersonaGameLevelRoom* _SelectedRoom_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ProgressItemsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_PROGRESSITEMSCOUNT_OFFSET))(this);
		}

		::System::String* get_CurLayerNumText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYERNUMTEXT_OFFSET))(this);
		}

		::System::UInt32 get_CurRoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURROOMINDEX_OFFSET))(this);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* get_SelectedRoom()
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_SELECTEDROOM_OFFSET))(this);
		}

		::System::Void set_SelectedRoom(::RPG::Client::IRogueTournPersonaGameLevelRoom* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_SET_SELECTEDROOM_OFFSET))(this, value);
		}

		static ::RPG::Client::RogueTournPersonaMapTabViewModel* Create()
		{
			return ((::RPG::Client::RogueTournPersonaMapTabViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INIT_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaMapTabProgressItem* GetProgressItem(::System::Int32 index)
		{
			return ((::RPG::Client::IRogueTournPersonaMapTabProgressItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GETPROGRESSITEM_OFFSET))(this, index);
		}

		::System::Void _InitProgressItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INITPROGRESSITEMS_OFFSET))(this);
		}

		::System::Void SelectRoomByIndex(::System::UInt32 roomIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_SELECTROOMBYINDEX_OFFSET))(this, roomIndex);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* GetSelectedRoomAttributes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GETSELECTEDROOMATTRIBUTES_OFFSET))(this);
		}

		::System::Void _InitSelectedRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL__INITSELECTEDROOM_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLinear* get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevelLinear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYER_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaGameLevelRoom* get_CurRoom()
		{
			return ((::RPG::Client::IRogueTournPersonaGameLevelRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURROOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CurLayerNumTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMAPTABVIEWMODEL_GET_CURLAYERNUMTEXTID_OFFSET))(this);
		}
	};
}
