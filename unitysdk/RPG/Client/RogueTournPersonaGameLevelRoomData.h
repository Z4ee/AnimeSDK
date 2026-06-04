#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_2;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8408C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC840D60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xC840FD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC840FA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC841010)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC840FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC840FE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC840F60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC840F70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC840F80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC840FC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC841030)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC840930)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC83FAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelRoomData_TypeDefinitionIndex = 63344;

	class RogueTournPersonaGameLevelRoomData : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_ReadOnly; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes; // 0x20
		::System::UInt32 _RoomID; // 0x28
		::System::UInt32 _RoomIndex; // 0x2C
		::System::UInt32 _Level; // 0x30
		::Enum_3_DB663931210BBC27_61 _Status; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_02098A44CBBFEEE1_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_SYNC_OFFSET))(this, a1);
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

		::Enum_3_DB663931210BBC27_61 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA_GET_STATUS_OFFSET))(this);
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
