#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_56.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_36039D62266A61A1;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B7760)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA3B7C60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA3B7EB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA3B7E80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3B7EF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3B7E90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3B7EC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA3B7E40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA3B7E50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA3B7E60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA3B7EA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xA3B7F10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3B77D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B6A20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelRoomData_TypeDefinitionIndex = 55223;

	class RogueTournPersonaGameLevelRoomData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_ReadOnly; // 0x20
		::System::UInt32 _Level; // 0x28
		::Enum_3_DB663931210BBC27_56 _Status; // 0x2C
		::System::UInt32 _RoomID; // 0x30
		::System::UInt32 _RoomIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_36039D62266A61A1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36039D62266A61A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET))(this, proto);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMINDEX_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_LEVEL_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_56 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_56(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_TOASTICONPATH_OFFSET))(this);
		}
	};
}
