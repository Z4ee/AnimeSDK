#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/Struct_2_1C87DCAB6DDF0A72.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1364;
namespace System { class String; }

#define RPG_CLIENT_BADGE_BADGEDATA_CLEAROWNED_OFFSET UNITYSDK_OFFSET(0xC7D8610)
#define RPG_CLIENT_BADGE_BADGEDATA_CREATEWITHEXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC7D84E0)
#define RPG_CLIENT_BADGE_BADGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC7D8460)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_BADGELEVEL_OFFSET UNITYSDK_OFFSET(0xC7D92A0)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0xC7D9040)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0xC7D8EF0)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC7D8DA0)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC7D9520)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC7D9170)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC7D8B40)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0xC7D8A10)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC7D93D0)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC7D8660)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xC7D9540)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7D88C0)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC7D8C70)
#define RPG_CLIENT_BADGE_BADGEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC7D8790)
#define RPG_CLIENT_BADGE_BADGEDATA_SETOWNED_OFFSET UNITYSDK_OFFSET(0xC7D85C0)
#define RPG_CLIENT_BADGE_BADGEDATA_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC7D9530)
#define RPG_CLIENT_BADGE_BADGEDATA_SET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xC7D9550)
#define RPG_CLIENT_BADGE_BADGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D84D0)

namespace RPG::Client::Badge
{
	inline static constexpr unsigned int BadgeData_TypeDefinitionIndex = 74989;

	class BadgeData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1364* _RowData; // 0x10
		::System::Int64 _ExpireTime_k__BackingField; // 0x18
		::System::Boolean _IsOwned_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Badge::BadgeData* Create(::Class_0_16E4307DCC419505_1364* a1)
		{
			return ((::RPG::Client::Badge::BadgeData*(*)(::Class_0_16E4307DCC419505_1364*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::Badge::BadgeData* CreateWithExpireTime(::Class_0_16E4307DCC419505_1364* a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::Badge::BadgeData*(*)(::Class_0_16E4307DCC419505_1364*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_CREATEWITHEXPIRETIME_OFFSET))(a1, a2);
		}

		::System::Void SetOwned(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_SETOWNED_OFFSET))(this, a1);
		}

		::System::Void ClearOwned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_CLEAROWNED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::BadgePlayType get_Type()
		{
			return ((::RPG::GameCore::BadgePlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconMiddlePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_ICONMIDDLEPATH_OFFSET))(this);
		}

		::System::String* get_IconFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_ICONFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_ComeFromText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_COMEFROMTEXT_OFFSET))(this);
		}

		::System::UInt32 get_ComeFromGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_COMEFROMGOTO_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::GameCore::BadgeLevel get_BadgeLevel()
		{
			return ((::RPG::GameCore::BadgeLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_BADGELEVEL_OFFSET))(this);
		}

		::Struct_2_1C87DCAB6DDF0A72 get_Identifier()
		{
			return ((::Struct_2_1C87DCAB6DDF0A72(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_SET_EXPIRETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_GET_ISOWNED_OFFSET))(this);
		}

		::System::Void set_IsOwned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATA_SET_ISOWNED_OFFSET))(this, a1);
		}
	};
}
