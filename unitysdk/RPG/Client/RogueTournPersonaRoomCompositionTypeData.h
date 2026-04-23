#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB0FE410)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0FE370)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xB0FE100)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xB0FE1B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB0F7F20)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB0FE470)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xB0FE750)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB0FE6B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0FE6F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FE770)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xB0FE710)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0FE6D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NULL_OFFSET UNITYSDK_OFFSET(0xB0FDE60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB0FE730)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FE790)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_UNDETERMINED_OFFSET UNITYSDK_OFFSET(0xB0FDF70)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB0FE4B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB0FE640)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xB0FE760)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB0FE6C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB0FE700)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FE780)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xB0FE720)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB0FE6E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xB0FE740)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xB0FE7A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0FE7B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0FE210)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FDE50)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB0FE820)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB0FE830)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex = 62414;

	class RogueTournPersonaRoomCompositionTypeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Undetermined()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x1BB10);
		}
		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Null()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x1BB18);
		}
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x1BB20);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _ToastIconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _LevelUpDesc_k__BackingField; // 0x20
		::System::UInt32 _CompositionType_k__BackingField; // 0x30
		::RPG::GameCore::RogueTournPersonaRoomBgColorType _BgColor_k__BackingField; // 0x34
		::RPG::GameCore::RogueTournRoomType _RoomType_k__BackingField; // 0x38
		::RPG::Client::TextID _Desc_k__BackingField; // 0x40
		::RPG::Client::TextID _Name_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_Null()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NULL_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_Undetermined()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_UNDETERMINED_OFFSET))();
		}

		::System::String* GetColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETCOLORSTATE_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData(::System::UInt32 compositionType)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET))(compositionType);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData_1(::Struct_2_FD0368737CBF6F9B_6 identifier)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::Struct_2_FD0368737CBF6F9B_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET))(identifier);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CreateData(::System::UInt32 compositionType)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET))(compositionType);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* lhs, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* lhs, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::UInt32 get_CompositionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::Void set_LevelUpDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueTournRoomType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournPersonaRoomBgColorType get_BgColor()
		{
			return ((::RPG::GameCore::RogueTournPersonaRoomBgColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::Void set_BgColor(::RPG::GameCore::RogueTournPersonaRoomBgColorType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournPersonaRoomBgColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
