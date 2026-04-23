#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class RogueInstanceCacheManager_3; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB0BBA90)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_DOOREFFECTPATH_OFFSET UNITYSDK_OFFSET(0xB0BC300)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BC2C0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xB0BC280)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0BC2A0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB0BC260)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BC2E0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_DOOREFFECTPATH_OFFSET UNITYSDK_OFFSET(0xB0BC310)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BC2D0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xB0BC290)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB0BC2B0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB0BC270)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xB0BC2F0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0BC320)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0BC0D0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0BC0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicRoomTypeData_TypeDefinitionIndex = 62338;

	class RogueTournClassicRoomTypeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType, ::RPG::Client::RogueTournClassicRoomTypeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType, ::RPG::Client::RogueTournClassicRoomTypeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicRoomTypeData_TypeDefinitionIndex)->GetStaticField(0x18760);
		}
		::System::String* _DoorEffectPath_k__BackingField; // 0x10
		::System::String* _ToastIconPath_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::GameCore::RogueTournMarkType _MarkType_k__BackingField; // 0x28
		::RPG::GameCore::RogueTournRoomType _RoomType_k__BackingField; // 0x2C
		::RPG::Client::TextID _Name_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournClassicRoomTypeData* GetData(::RPG::GameCore::RogueTournRoomType roomType, ::RPG::GameCore::RogueTournMarkType markType)
		{
			return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GETDATA_OFFSET))(roomType, markType);
		}

		static ::RPG::Client::RogueTournClassicRoomTypeData* _CreateData(::RPG::GameCore::RogueTournRoomType roomType, ::RPG::GameCore::RogueTournMarkType markType)
		{
			return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CREATEDATA_OFFSET))(roomType, markType);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueTournRoomType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ROOMTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueTournMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueTournMarkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_MARKTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_TOASTICONPATH_OFFSET))(this, value);
		}

		::System::String* get_DoorEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_DOOREFFECTPATH_OFFSET))(this);
		}

		::System::Void set_DoorEffectPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_DOOREFFECTPATH_OFFSET))(this, value);
		}
	};
}
