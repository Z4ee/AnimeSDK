#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16D8E68BCE885505;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET UNITYSDK_OFFSET(0x9140B60)
#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0x9140820)
#define RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET UNITYSDK_OFFSET(0x9140B00)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9140790)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x91402A0)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9140110)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9140660)
#define RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET UNITYSDK_OFFSET(0x9140AA0)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATHFORSKIN_OFFSET UNITYSDK_OFFSET(0x9140450)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x91403D0)
#define RPG_CLIENT_AVATARHELPER_GETSKINBYSKINID_OFFSET UNITYSDK_OFFSET(0x9140920)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x9140050)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0x91405D0)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9140320)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 50908;

	class AvatarHelper : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::IAvatar* GetSkinPreviewAvatar(::System::UInt32 skinID)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET))(skinID);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetOriginSkinByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET))(avatarID);
		}

		static ::System::String* GetMiniIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET))(avatarID);
		}

		static ::System::String* GetSideIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET))(avatarID);
		}

		static ::System::String* GetSideIconPathForSkin(::System::UInt32 avatarID, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSIDEICONPATHFORSKIN_OFFSET))(avatarID, skinID);
		}

		static ::System::String* GetSmallPathIconPathByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET))(avatarID);
		}

		static ::System::String* GetDamageTypeIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET))(avatarID);
		}

		static ::Class_1_16D8E68BCE885505* GetPrototypeByAvatarID(::System::UInt32 avatarID)
		{
			return ((::Class_1_16D8E68BCE885505*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET))(avatarID);
		}

		static ::System::Boolean CheckIsOriginSkinID(::System::UInt32 skinID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET))(skinID);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetSkinBySkinID(::System::UInt32 skinID)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINBYSKINID_OFFSET))(skinID);
		}

		static ::System::UInt32 GetRoleID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET))(avatarID);
		}

		static ::System::UInt32 GetCurrentAvatarID(::System::UInt32 roleID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET))(roleID);
		}

		static ::System::Boolean CheckIsHero(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET))(avatarID);
		}

		static ::RPG::AvatarSystem::IAvatar* _GetSpecificPathAvatarByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET))(avatarID);
		}
	};
}
