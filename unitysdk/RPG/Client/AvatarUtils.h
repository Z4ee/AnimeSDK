#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET UNITYSDK_OFFSET(0xC847BE0)
#define RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET UNITYSDK_OFFSET(0xC847B50)
#define RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC847950)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET UNITYSDK_OFFSET(0xC848810)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC8486B0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC8471E0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0xC8483B0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET UNITYSDK_OFFSET(0xC8489F0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET UNITYSDK_OFFSET(0xC848890)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xC848550)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATABYABILITY_OFFSET UNITYSDK_OFFSET(0xC848C80)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0xC848B00)
#define RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET UNITYSDK_OFFSET(0xC847D00)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC847720)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0xC8477B0)
#define RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC847690)
#define RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0xC8475F0)
#define RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC8491A0)
#define RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET UNITYSDK_OFFSET(0xC849650)
#define RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0xC848A70)
#define RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0xC8474A0)
#define RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET UNITYSDK_OFFSET(0xC847E50)
#define RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xC848230)
#define RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC847DC0)
#define RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0xC8473B0)
#define RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8496A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUtils_TypeDefinitionIndex = 62570;

	class AvatarUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__HeroAvatarID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarUtils_TypeDefinitionIndex)->GetStaticField(0x151A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARLIST_OFFSET))(a1);
		}

		static ::System::Boolean IsSameAvatar(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasSameAvatar(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET))(a1, a2);
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

		static ::System::Boolean CheckTrialAvatarAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET))(a1);
		}

		static ::System::UInt32 AvatarIDToServantID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET))(a1);
		}

		static ::System::Boolean AvatarHasServant(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET))(a1);
		}

		static ::System::String* GetCharacterEffectPreloadPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarCanRankMax(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarGrowthTarget(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetAvatarName(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET))(a1);
		}

		static ::System::String* GetAvatarSideIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType GetAvatarDamageType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::DamageTypeRow* GetAvatarDamageTypeRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseType GetAvatarProfession(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseTypeRow* GetAvatarProfessionRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET))(a1);
		}

		static ::System::String* GetSpecialAvatarOverrideAvatarModelPath(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinData(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinDataByAbility(::Class_0_16E4307DCC419505_417* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATABYABILITY_OFFSET))(a1);
		}

		static ::System::String* GetSkinDropImagePath(::RPG::Client::IAvatarSkinData* a1)
		{
			return ((::System::String*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET))(a1);
		}

		static ::System::UInt32 GetSkinIntroduceID(::RPG::GameCore::AvatarSkinType a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET))(a1);
		}
	};
}
