#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MatchThreeTimelineBattleField_MatchThreeTimelineType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame { class MatchThreeFighter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_APPLYGROWUPAUDIO_OFFSET UNITYSDK_OFFSET(0xD467DA0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0xD468900)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0xD466DD0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_ISFINISH_OFFSET UNITYSDK_OFFSET(0xD467800)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xD4677A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PAUSE_OFFSET UNITYSDK_OFFSET(0xD4673B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAYTOEND_OFFSET UNITYSDK_OFFSET(0xD4678B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAY_OFFSET UNITYSDK_OFFSET(0xD4671B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESET_OFFSET UNITYSDK_OFFSET(0xD467550)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESUME_OFFSET UNITYSDK_OFFSET(0xD467480)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETBIRDADAPTIVEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD466F30)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETDEPLOYPOSITION_OFFSET UNITYSDK_OFFSET(0xD467A00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERBODYMATERIAL_OFFSET UNITYSDK_OFFSET(0xD467920)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTEREMO_OFFSET UNITYSDK_OFFSET(0xD467A90)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xD467990)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERSCALE_OFFSET UNITYSDK_OFFSET(0xD467700)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xD468700)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYROUND_OFFSET UNITYSDK_OFFSET(0xD468850)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_STOP_OFFSET UNITYSDK_OFFSET(0xD4672F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_UPDATE_OFFSET UNITYSDK_OFFSET(0xD468CA0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0xD468120)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0xD46A4C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEADAPTIVEPOSITION_OFFSET UNITYSDK_OFFSET(0xD469760)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0xD4693D0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xD46A4A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__DEACTIVATEALLTIMELINES_OFFSET UNITYSDK_OFFSET(0xD468B80)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__FITBIRDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD467F50)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITBATTLESHOWFOV_OFFSET UNITYSDK_OFFSET(0xD4691B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITFOV_OFFSET UNITYSDK_OFFSET(0xD468C00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xD46A1F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SCREENTORAY_OFFSET UNITYSDK_OFFSET(0xD469D00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SETFOV_OFFSET UNITYSDK_OFFSET(0xD46A420)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UIPOSITIONTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xD469570)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFITPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD467B70)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFOV_OFFSET UNITYSDK_OFFSET(0xD468CF0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOPROJECTION_OFFSET UNITYSDK_OFFSET(0xD46A080)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xD469B60)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeTimelineBattleField_TypeDefinitionIndex = 76555;

	class MatchThreeTimelineBattleField : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LevelID2BackGroundID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x2B870);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__Round2BackGroudID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x2B878);
		}
		::Il2CppArray<::UnityEngine::Transform*>* BackGrounds; // 0x18
		::UnityEngine::Playables::PlayableDirector* WinDirector; // 0x20
		::UnityEngine::Playables::PlayableDirector* LoseDirector; // 0x28
		::UnityEngine::Playables::PlayableDirector* TieDirector; // 0x30
		::UnityEngine::Playables::PlayableDirector* FadeinDirector; // 0x38
		::UnityEngine::Transform* SelfFighterArt; // 0x40
		::UnityEngine::Transform* EnemyFighterArt; // 0x48
		::UnityEngine::Transform* SelfDeployPoint; // 0x50
		::UnityEngine::Transform* EnemyDeployPoint; // 0x58
		::UnityEngine::Camera* SourceCamera; // 0x60
		::Cinemachine::CinemachineVirtualCamera* VCam; // 0x68
		::UnityEngine::Transform* CamDeploy; // 0x70
		::UnityEngine::Transform* BackGroundRoot; // 0x78
		::UnityEngine::AnimationCurve* ScaleChangeCurve; // 0x80
		::System::String* FighterGrowUpAudioEvent; // 0x88
		::System::String* FighterGrowUpAudioEventForGhostBird; // 0x90
		::System::Single FovNormal; // 0x98
		::System::Single Fov43; // 0x9C
		::System::Single FovDeployFactor; // 0xA0
		::System::Single FovToBattleShowAlpha; // 0xA4
		::System::Single CamToBattleShowAlpha; // 0xA8
		::UnityEngine::Playables::PlayableDirector* _CurrentDirector; // 0xB0
		::RPG::Client::LittleGame::MatchThreeFighter* _SelfFighter; // 0xB8
		::RPG::Client::LittleGame::MatchThreeFighter* _EnemyFighter; // 0xC0
		::Il2CppArray<::UnityEngine::RectTransform*>* _BirdAdaptivePositions; // 0xC8
		::Il2CppArray<::UnityEngine::Vector3>* _LastAdaptivePositions; // 0xD0
		::System::Single _BattleShowCamFov; // 0xD8
		::System::Single _DeployCamFov; // 0xDC
		::System::Single _OriginCamDeployToBackGroundDistance; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::Client::LittleGame::MatchThreeTimelineBattleField_MatchThreeTimelineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField_MatchThreeTimelineType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAY_OFFSET))(this, a1);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESUME_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESET_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_STOP_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_ISFINISH_OFFSET))(this);
		}

		::System::Void PlayToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAYTOEND_OFFSET))(this);
		}

		::System::Void SetFighterBodyMaterial(::System::UInt32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERBODYMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetFighterFaceMaterial(::System::UInt32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERFACEMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetDeployPosition(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETDEPLOYPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetFighterEmo(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTEREMO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetFighterScale(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERSCALE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void ApplyGrowUpAudio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_APPLYGROWUPAUDIO_OFFSET))(this, a1);
		}

		::System::Void SetBirdAdaptivePositions(::Il2CppArray<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETBIRDADAPTIVEPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void BindUIPage(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_BINDUIPAGE_OFFSET))(this, a1);
		}

		::System::Void SetupBackGroundByLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetupBackGroundByRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYROUND_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_UPDATE_OFFSET))(this);
		}

		::System::Void _InitFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITFOV_OFFSET))(this);
		}

		::System::Void _DeactivateAllTimelines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__DEACTIVATEALLTIMELINES_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 _ComputeWorldToCameraMatrixGL(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET))(this, a1);
		}

		::System::Void _FitBirdPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__FITBIRDPOSITIONS_OFFSET))(this);
		}

		::System::Void _BindUIPage(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__BINDUIPAGE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _ComputeAdaptivePosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEADAPTIVEPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _WorldToScreenPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOSCREENPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _UIPositionToScreenPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UIPOSITIONTOSCREENPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Ray _ScreenToRay(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SCREENTORAY_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 _WorldToProjection()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOPROJECTION_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 _ProjectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__PROJECTIONMATRIX_OFFSET))(this);
		}

		::System::Void _UpdateFitPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFITPOSITIONS_OFFSET))(this);
		}

		::System::Void _SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SETFOV_OFFSET))(this, a1);
		}

		::System::Void _InitBattleShowFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITBATTLESHOWFOV_OFFSET))(this, a1);
		}

		::System::Void _UpdateFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFOV_OFFSET))(this);
		}
	};
}
