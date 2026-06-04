#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC8513A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xC851300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xC8510A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xC851150)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC84AAE0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC851400)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xC8516E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC851640)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC851680)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC851700)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xC8516A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC851660)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NULL_OFFSET UNITYSDK_OFFSET(0xC850E00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC8516C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC851720)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_UNDETERMINED_OFFSET UNITYSDK_OFFSET(0xC850F10)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC851440)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC8515D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xC8516F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xC851650)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC851690)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC851710)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xC8516B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC851670)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xC8516D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xC851730)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC851740)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC8511B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC850DF0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xC8517C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC8517D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex = 63347;

	class RogueTournPersonaRoomCompositionTypeData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Null()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x42740);
		}
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x42748);
		}
		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Undetermined()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex)->GetStaticField(0x42750);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _ToastIconPath_k__BackingField; // 0x18
		::RPG::GameCore::RogueTournRoomType _RoomType_k__BackingField; // 0x20
		::System::UInt32 _CompositionType_k__BackingField; // 0x24
		::RPG::Client::TextID _LevelUpDesc_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::RPG::GameCore::RogueTournPersonaRoomBgColorType _BgColor_k__BackingField; // 0x48
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

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData_1(::Struct_2_FD0368737CBF6F9B_6 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::Struct_2_FD0368737CBF6F9B_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_CompositionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::Void set_LevelUpDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueTournRoomType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournPersonaRoomBgColorType get_BgColor()
		{
			return ((::RPG::GameCore::RogueTournPersonaRoomBgColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::Void set_BgColor(::RPG::GameCore::RogueTournPersonaRoomBgColorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournPersonaRoomBgColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
