#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_2;
class Class_1_21C5A6B97EE307C6;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC83FC10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8402E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC8403D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xC840010)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xC83FFF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC83FFB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC840190)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC83FFD0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC840160)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC83FF50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC83FF70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC840140)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC83FF90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC8401B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xC840000)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC83FFC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC83FFE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC83FF60)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC83FF80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC83FFA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC840320)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8401D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC8401E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData_TypeDefinitionIndex = 63341;

	class RogueTournPersonaGameLevelPresetRoomData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType_k__BackingField; // 0x18
		::Class_1_21C5A6B97EE307C6* _PresetData; // 0x20
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::System::UInt32 _RoomIndex_k__BackingField; // 0x2C
		::System::UInt32 _Level_k__BackingField; // 0x30
		::Enum_3_DB663931210BBC27_61 _Status_k__BackingField; // 0x34

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

		::Enum_3_DB663931210BBC27_61 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_61 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_61))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET))(this, a1);
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

		::System::Void Sync(::Class_1_02098A44CBBFEEE1_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}
	};
}
