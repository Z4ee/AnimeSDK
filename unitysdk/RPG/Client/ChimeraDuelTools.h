#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelCustomStringPresetType.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelAccelerateMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERADUELTOOLS_CLAMPATTACK_OFFSET UNITYSDK_OFFSET(0x19AF4190)
#define RPG_CLIENT_CHIMERADUELTOOLS_CLAMPHP_OFFSET UNITYSDK_OFFSET(0x19AF3F70)
#define RPG_CLIENT_CHIMERADUELTOOLS_CLEARPREFS_OFFSET UNITYSDK_OFFSET(0x19AF3BA0)
#define RPG_CLIENT_CHIMERADUELTOOLS_CREATEVSMANIKINUI3DENTITY_OFFSET UNITYSDK_OFFSET(0x19AF4EF0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTCRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0x19AF4130)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXATTACK_OFFSET UNITYSDK_OFFSET(0x19AF4070)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXHP_OFFSET UNITYSDK_OFFSET(0x19AF3EB0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINATTACK_OFFSET UNITYSDK_OFFSET(0x19AF40D0)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINHP_OFFSET UNITYSDK_OFFSET(0x19AF3F10)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTALKBUBBLEDURATION_OFFSET UNITYSDK_OFFSET(0x19AF4290)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTRASHTALKDURATION_OFFSET UNITYSDK_OFFSET(0x19AF4610)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETORCREATETEMPAVATARDATA_OFFSET UNITYSDK_OFFSET(0x19AF4E90)
#define RPG_CLIENT_CHIMERADUELTOOLS_GETTEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x19AF3E50)
#define RPG_CLIENT_CHIMERADUELTOOLS_STARTGAME_OFFSET UNITYSDK_OFFSET(0x19AF4720)
#define RPG_CLIENT_CHIMERADUELTOOLS_STARTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x19AF49D0)
#define RPG_CLIENT_CHIMERADUELTOOLS_SWITCHSPEEDAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x19AF4FE0)
#define RPG_CLIENT_CHIMERADUELTOOLS_TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x19AF47B0)
#define RPG_CLIENT_CHIMERADUELTOOLS__TRIGGERCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x19AF4880)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTools_TypeDefinitionIndex = 60518;

	class ChimeraDuelTools : public ::System::Object
	{
	public:
		static ::System::Void ClearPrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLEARPREFS_OFFSET))();
		}

		static ::System::UInt32 GetTeamSlotCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETTEAMSLOTCOUNT_OFFSET))();
		}

		static ::System::Int32 GetDefaultMaxHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXHP_OFFSET))();
		}

		static ::System::Int32 GetDefaultMinHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINHP_OFFSET))();
		}

		static ::System::Int32 ClampHP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLAMPHP_OFFSET))(a1);
		}

		static ::System::Int32 GetDefaultMaxAttack()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMAXATTACK_OFFSET))();
		}

		static ::System::Int32 GetDefaultMinAttack()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTMINATTACK_OFFSET))();
		}

		static ::System::Int32 GetDefaultCriticalHitDamage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETDEFAULTCRITICALHITDAMAGE_OFFSET))();
		}

		static ::System::Int32 ClampAttack(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CLAMPATTACK_OFFSET))(a1);
		}

		static ::System::Single GetMaxTalkBubbleDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTALKBUBBLEDURATION_OFFSET))();
		}

		static ::System::Single GetMaxTrashTalkDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETMAXTRASHTALKDURATION_OFFSET))();
		}

		static ::System::Void StartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_STARTGAME_OFFSET))();
		}

		static ::System::Void _TriggerCustomString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS__TRIGGERCUSTOMSTRING_OFFSET))(a1);
		}

		static ::System::Void TriggerCustomString(::RPG::Client::ChimeraDuelCustomStringPresetType a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraDuelCustomStringPresetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_TRIGGERCUSTOMSTRING_OFFSET))(a1);
		}

		static ::System::Void StartShowcaseBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_STARTSHOWCASEBATTLE_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetOrCreateTempAvatarData(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_GETORCREATETEMPAVATARDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CreateVSManikinUI3DEntity(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_CREATEVSMANIKINUI3DENTITY_OFFSET))(a1, a2);
		}

		static ::System::Void SwitchSpeedAudioState(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAccelerateMode a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAccelerateMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTOOLS_SWITCHSPEEDAUDIOSTATE_OFFSET))(a1);
		}
	};
}
