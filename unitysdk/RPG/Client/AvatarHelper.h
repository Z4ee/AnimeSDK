#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_16D8E68BCE885505;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET UNITYSDK_OFFSET(0x9DA1F40)
#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0x9DA1E70)
#define RPG_CLIENT_AVATARHELPER_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x9DA17D0)
#define RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET UNITYSDK_OFFSET(0x9D6E130)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9DA1DE0)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x9DA1960)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9DA1A50)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDHEROAVATAR_OFFSET UNITYSDK_OFFSET(0x9DA1FA0)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA1670)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA1830)
#define RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET UNITYSDK_OFFSET(0x9DA19D0)
#define RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET UNITYSDK_OFFSET(0x9D755C0)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATHFORSKIN_OFFSET UNITYSDK_OFFSET(0x9DA1C00)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x9DA1B80)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x9DA15B0)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA1D50)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9DA1AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 57787;

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

		static ::RPG::GameCore::AvatarBaseType GetAvatarBaseType(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARBASETYPE_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AttackDamageType GetDamageType(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::CombatPowerAvatarRarityType GetRarityType(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET))(avatarID);
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

		static ::RPG::AvatarSystem::IAvatar* GetObtainedHeroAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDHEROAVATAR_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* _GetSpecificPathAvatarByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET))(avatarID);
		}
	};
}
