#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_62.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C5A6B97EE307C6;
class Class_1_C9DFE5EE7107C629_21;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDF83110)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF83AD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xDF83BF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xDF83720)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xDF83700)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xDF836C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDF83900)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF836E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDF838A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xDF83660)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xDF83680)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xDF83850)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xDF836A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xDF83950)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xDF83710)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xDF836D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF836F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xDF83670)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xDF83690)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xDF836B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDF83B10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF839A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET UNITYSDK_OFFSET(0xDF839B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData_TypeDefinitionIndex = 67712;

	class RogueTournPersonaGameLevelPresetRoomData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType_k__BackingField; // 0x18
		::Class_1_21C5A6B97EE307C6* _PresetData; // 0x20
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::System::UInt32 _Level_k__BackingField; // 0x2C
		::System::UInt32 _RoomIndex_k__BackingField; // 0x30
		::Enum_3_DB663931210BBC27_62 _Status_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_62 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_62(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_62 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_62))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_AttributeList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameLevelPresetRoomData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelPresetRoomData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C9DFE5EE7107C629_21* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}
	};
}
