#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class RogueInstanceCacheManager_3; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC80B120)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_DOOREFFECTPATH_OFFSET UNITYSDK_OFFSET(0xC80B9A0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC80B960)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xC80B920)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC80B940)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC80B900)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC80B980)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_DOOREFFECTPATH_OFFSET UNITYSDK_OFFSET(0xC80B9B0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC80B970)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0xC80B930)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC80B950)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC80B910)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC80B990)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC80B9C0)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC80B770)
#define RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC80B760)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicRoomTypeData_TypeDefinitionIndex = 63271;

	class RogueTournClassicRoomTypeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType, ::RPG::Client::RogueTournClassicRoomTypeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_3<::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType, ::RPG::Client::RogueTournClassicRoomTypeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicRoomTypeData_TypeDefinitionIndex)->GetStaticField(0x387D0);
		}
		::System::String* _ToastIconPath_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _DoorEffectPath_k__BackingField; // 0x20
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

		static ::RPG::Client::RogueTournClassicRoomTypeData* GetData(::RPG::GameCore::RogueTournRoomType a1, ::RPG::GameCore::RogueTournMarkType a2)
		{
			return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GETDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournClassicRoomTypeData* _CreateData(::RPG::GameCore::RogueTournRoomType a1, ::RPG::GameCore::RogueTournMarkType a2)
		{
			return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::RPG::GameCore::RogueTournRoomType, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA__CREATEDATA_OFFSET))(a1, a2);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueTournRoomType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueTournMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueTournMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_TOASTICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_DoorEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_GET_DOOREFFECTPATH_OFFSET))(this);
		}

		::System::Void set_DoorEffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICROOMTYPEDATA_SET_DOOREFFECTPATH_OFFSET))(this, a1);
		}
	};
}
