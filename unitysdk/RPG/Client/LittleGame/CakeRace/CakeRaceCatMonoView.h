#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/EffectConfig.h"

class Class_1_DE6628CA879CC9BE;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceGameplayTalkBubbleMonoView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CATID_OFFSET UNITYSDK_OFFSET(0xA677360)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xA677380)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0xA677890)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYROULETTEEFFECT_OFFSET UNITYSDK_OFFSET(0xA6774C0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCATID_OFFSET UNITYSDK_OFFSET(0xA677470)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCHAMPIONCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0xA677AC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SET_CATID_OFFSET UNITYSDK_OFFSET(0xA677370)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0xA677980)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYADDHOVEREFFECT_OFFSET UNITYSDK_OFFSET(0xA677A00)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0xA6775E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYREMOVEHOVEREFFECT_OFFSET UNITYSDK_OFFSET(0xA677A60)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA677D50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__GETEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xA677650)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatMonoView_TypeDefinitionIndex = 71644;

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
		::Class_1_DE6628CA879CC9BE* _PlayAventurineMazeSkillEffect; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CATID_OFFSET))(this);
		}

		::System::Void set_CatID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SET_CATID_OFFSET))(this, value);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_GET_CINEMACHINEBRAIN_OFFSET))(this);
		}

		::System::Void SetCatID(::System::UInt32 catID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCATID_OFFSET))(this, catID);
		}

		::System::Void PlayRouletteEffect(::System::Int32 sameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYROULETTEEFFECT_OFFSET))(this, sameCount);
		}

		::System::Void TryPlayEffect(::System::String* effectName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYPLAYEFFECT_OFFSET))(this, effectName);
		}

		::System::Void PlayEffect(::System::String* effectName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_PLAYEFFECT_OFFSET))(this, effectName);
		}

		::System::Void StopEffect(::System::String* effectName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_STOPEFFECT_OFFSET))(this, effectName);
		}

		::RPG::Client::LittleGame::CakeRace::EffectConfig _GetEffectConfig(::System::String* effectName)
		{
			return ((::RPG::Client::LittleGame::CakeRace::EffectConfig(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW__GETEFFECTCONFIG_OFFSET))(this, effectName);
		}

		::System::Void TryAddHoverEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYADDHOVEREFFECT_OFFSET))(this);
		}

		::System::Void TryRemoveHoverEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_TRYREMOVEHOVEREFFECT_OFFSET))(this);
		}

		::System::Void SetChampionCameraActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATMONOVIEW_SETCHAMPIONCAMERAACTIVE_OFFSET))(this, isActive);
		}
	};
}
