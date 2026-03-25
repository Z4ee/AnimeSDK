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

#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_APPLYGROWUPAUDIO_OFFSET UNITYSDK_OFFSET(0x9A2E830)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A2F1F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0x9A2DAC0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9A2E4C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x9A2E460)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PAUSE_OFFSET UNITYSDK_OFFSET(0x9A2E070)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAYTOEND_OFFSET UNITYSDK_OFFSET(0x9A2E570)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAY_OFFSET UNITYSDK_OFFSET(0x9A2DE70)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESET_OFFSET UNITYSDK_OFFSET(0x9A2E210)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESUME_OFFSET UNITYSDK_OFFSET(0x9A2E140)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETBIRDADAPTIVEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9A2DC00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETDEPLOYPOSITION_OFFSET UNITYSDK_OFFSET(0x9A2E6C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERBODYMATERIAL_OFFSET UNITYSDK_OFFSET(0x9A2E5E0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTEREMO_OFFSET UNITYSDK_OFFSET(0x9A2E750)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9A2E650)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERSCALE_OFFSET UNITYSDK_OFFSET(0x9A2E3C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9A2EFC0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYROUND_OFFSET UNITYSDK_OFFSET(0x9A2F130)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_STOP_OFFSET UNITYSDK_OFFSET(0x9A2DFB0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A2F580)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0x9A2EBB0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A310B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEADAPTIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x9A2F960)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0x9A2F5D0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x9A31090)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__DEACTIVATEALLTIMELINES_OFFSET UNITYSDK_OFFSET(0x9A2F480)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__FITBIRDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9A2E9E0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITBATTLESHOWFOV_OFFSET UNITYSDK_OFFSET(0x9A309B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITFOV_OFFSET UNITYSDK_OFFSET(0x9A2F500)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x9A30490)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SCREENTORAY_OFFSET UNITYSDK_OFFSET(0x9A2FFA0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SETFOV_OFFSET UNITYSDK_OFFSET(0x9A30930)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UIPOSITIONTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x9A2F770)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFITPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9A306C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFOV_OFFSET UNITYSDK_OFFSET(0x9A30BD0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOPROJECTION_OFFSET UNITYSDK_OFFSET(0x9A30320)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x9A2FE20)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeTimelineBattleField_TypeDefinitionIndex = 62314;

	class MatchThreeTimelineBattleField : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LevelID2BackGroundID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x25B50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__Round2BackGroudID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x25B58);
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

		::System::Void Play(::RPG::Client::LittleGame::MatchThreeTimelineBattleField_MatchThreeTimelineType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField_MatchThreeTimelineType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAY_OFFSET))(this, type);
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

		::System::Void SetFighterBodyMaterial(::System::UInt32 teamIndex, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERBODYMATERIAL_OFFSET))(this, teamIndex, mat);
		}

		::System::Void SetFighterFaceMaterial(::System::UInt32 teamIndex, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERFACEMATERIAL_OFFSET))(this, teamIndex, mat);
		}

		::System::Void SetDeployPosition(::System::UInt32 teamIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETDEPLOYPOSITION_OFFSET))(this, teamIndex, position);
		}

		::System::Void SetFighterEmo(::System::UInt32 teamIndex, ::System::Int32 defaultEmo, ::System::Int32 winEmo, ::System::Int32 tieEmo, ::System::Int32 loseEmo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTEREMO_OFFSET))(this, teamIndex, defaultEmo, winEmo, tieEmo, loseEmo);
		}

		::System::Void SetFighterScale(::System::UInt32 teamIndex, ::System::Single scale, ::System::Boolean powerUp, ::System::Boolean immediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERSCALE_OFFSET))(this, teamIndex, scale, powerUp, immediately);
		}

		::System::Void ManualUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_MANUALUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyGrowUpAudio(::System::UInt32 teamIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_APPLYGROWUPAUDIO_OFFSET))(this, teamIndex);
		}

		::System::Void SetBirdAdaptivePositions(::Il2CppArray<::UnityEngine::RectTransform*>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETBIRDADAPTIVEPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void BindUIPage(::UnityEngine::Animator* pageAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_BINDUIPAGE_OFFSET))(this, pageAnimator);
		}

		::System::Void SetupBackGroundByLevel(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYLEVEL_OFFSET))(this, levelID);
		}

		::System::Void SetupBackGroundByRound(::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYROUND_OFFSET))(this, round);
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

		::UnityEngine::Matrix4x4 _ComputeWorldToCameraMatrixGL(::UnityEngine::Matrix4x4 cameraToWorld)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET))(this, cameraToWorld);
		}

		::System::Void _FitBirdPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__FITBIRDPOSITIONS_OFFSET))(this);
		}

		::System::Void _BindUIPage(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Animator* uiPageAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__BINDUIPAGE_OFFSET))(this, director, uiPageAnimator);
		}

		::UnityEngine::Vector3 _ComputeAdaptivePosition(::UnityEngine::Vector3 inPosition, ::UnityEngine::Vector2 toFit)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEADAPTIVEPOSITION_OFFSET))(this, inPosition, toFit);
		}

		::UnityEngine::Vector3 _WorldToScreenPoint(::UnityEngine::Vector3 worldPoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOSCREENPOINT_OFFSET))(this, worldPoint);
		}

		::UnityEngine::Vector3 _UIPositionToScreenPoint(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UIPOSITIONTOSCREENPOINT_OFFSET))(this, position);
		}

		::UnityEngine::Ray _ScreenToRay(::UnityEngine::Vector3 screenPoint)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SCREENTORAY_OFFSET))(this, screenPoint);
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

		::System::Void _SetFov(::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SETFOV_OFFSET))(this, fov);
		}

		::System::Void _InitBattleShowFov(::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITBATTLESHOWFOV_OFFSET))(this, fov);
		}

		::System::Void _UpdateFov()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFOV_OFFSET))(this);
		}
	};
}
