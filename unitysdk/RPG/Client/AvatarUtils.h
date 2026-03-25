#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET UNITYSDK_OFFSET(0x915EEF0)
#define RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET UNITYSDK_OFFSET(0x915EE40)
#define RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0x915EBE0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET UNITYSDK_OFFSET(0x915F960)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x915F850)
#define RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x915F5F0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET UNITYSDK_OFFSET(0x915FAF0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET UNITYSDK_OFFSET(0x915F9E0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x915F740)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x915FC00)
#define RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET UNITYSDK_OFFSET(0x915EF70)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x915E9B0)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x915EA40)
#define RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x915E920)
#define RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x915E880)
#define RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x915FCE0)
#define RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET UNITYSDK_OFFSET(0x9160020)
#define RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x915FB70)
#define RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0x915E730)
#define RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET UNITYSDK_OFFSET(0x915F130)
#define RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x915F440)
#define RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET UNITYSDK_OFFSET(0x915F030)
#define RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0x915E510)
#define RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9160070)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUtils_TypeDefinitionIndex = 50784;

	class AvatarUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__HeroAvatarID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarUtils_TypeDefinitionIndex)->GetStaticField(0x11040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSameAvatar(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET))(left, right);
		}

		static ::System::Boolean HasSameAvatar(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::RPG::Client::IAvatarInfoProvider* targetAvatar)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET))(avatars, targetAvatar);
		}

		static ::System::UInt32 GetMaxPromotion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET))();
		}

		static ::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetCurrWorldLevelMaxLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetCurrWorldLevelMaxPromotion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET))();
		}

		static ::System::Boolean CheckTrialAvatarAvailable(::System::UInt32 trialAvatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET))(trialAvatarID);
		}

		static ::System::UInt32 AvatarIDToServantID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET))(avatarID);
		}

		static ::System::Boolean AvatarHasServant(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET))(avatarID);
		}

		static ::System::String* GetCharacterEffectPreloadPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarUnlocked(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarCanRankMax(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET))(avatar);
		}

		static ::System::Boolean IsAvatarGrowthTarget(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET))(avatar);
		}

		static ::RPG::Client::TextID GetAvatarName(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET))(avatarID);
		}

		static ::System::String* GetAvatarSideIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AttackDamageType GetAvatarDamageType(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::DamageTypeRow* GetAvatarDamageTypeRow(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AvatarBaseType GetAvatarProfession(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AvatarBaseTypeRow* GetAvatarProfessionRow(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET))(avatarID);
		}

		static ::System::String* GetSpecialAvatarOverrideAvatarModelPath(::RPG::GameCore::SpecialAvatarRow* specialAvatarRow)
		{
			return ((::System::String*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET))(specialAvatarRow);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinData(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET))(entity);
		}

		static ::System::String* GetSkinDropImagePath(::RPG::Client::IAvatarSkinData* skin)
		{
			return ((::System::String*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET))(skin);
		}

		static ::System::UInt32 GetSkinIntroduceID(::RPG::GameCore::AvatarSkinType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET))(type);
		}
	};
}
