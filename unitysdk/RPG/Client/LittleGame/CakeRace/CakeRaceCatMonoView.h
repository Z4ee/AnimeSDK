#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/EffectConfig.h"

class Class_1_ADBCDF8C69BBDC56;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceGameplayTalkBubbleMonoView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CATID_OFFSET UNITYSDK_OFFSET(0x19B7FC10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0x19B7FC30)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x19B80150)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYROULETTEEFFECT_OFFSET UNITYSDK_OFFSET(0x19B7FD70)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCATID_OFFSET UNITYSDK_OFFSET(0x19B7FD20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCHAMPIONCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x19B80380)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SET_CATID_OFFSET UNITYSDK_OFFSET(0x19B7FC20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x19B80240)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYADDHOVEREFFECT_OFFSET UNITYSDK_OFFSET(0x19B802C0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x19B7FE90)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYREMOVEHOVEREFFECT_OFFSET UNITYSDK_OFFSET(0x19B80320)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B80430)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__GETEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x19B7FF00)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatMonoView_TypeDefinitionIndex = 74191;

	class CakeRaceCatMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::System::UInt32 _CatID_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::CakeRace::EffectConfig>* _CachedEffectConfigs; // 0x48
		::UnityEngine::Animator* Animator; // 0x50
		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayTalkBubbleMonoView* TalkBubble; // 0x58
		::RPG::OutlinePostFXMonoPlugin* _OutlineComp; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::EffectConfig>* EffectConfigs; // 0x68
		::Cinemachine::CinemachineVirtualCamera* _ChampionCamera; // 0x70
		::Class_1_ADBCDF8C69BBDC56* _PlayAventurineMazeSkillEffect; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CATID_OFFSET))(this);
		}

		::System::Void set_CatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SET_CATID_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CINEMACHINEBRAIN_OFFSET))(this);
		}

		::System::Void SetCatID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCATID_OFFSET))(this, a1);
		}

		::System::Void PlayRouletteEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYROULETTEEFFECT_OFFSET))(this, a1);
		}

		::System::Void TryPlayEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYPLAYEFFECT_OFFSET))(this, a1);
		}

		::System::Void PlayEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYEFFECT_OFFSET))(this, a1);
		}

		::System::Void StopEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_STOPEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::EffectConfig _GetEffectConfig(::System::String* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::EffectConfig(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__GETEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Void TryAddHoverEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYADDHOVEREFFECT_OFFSET))(this);
		}

		::System::Void TryRemoveHoverEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYREMOVEHOVEREFFECT_OFFSET))(this);
		}

		::System::Void SetChampionCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCHAMPIONCAMERAACTIVE_OFFSET))(this, a1);
		}
	};
}
