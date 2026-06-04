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

#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_APPLYGROWUPAUDIO_OFFSET UNITYSDK_OFFSET(0xBE2CB90)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE2D510)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0xBE2BBC0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_ISFINISH_OFFSET UNITYSDK_OFFSET(0xBE2C5F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xBE2C590)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PAUSE_OFFSET UNITYSDK_OFFSET(0xBE2C1A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAYTOEND_OFFSET UNITYSDK_OFFSET(0xBE2C6A0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_PLAY_OFFSET UNITYSDK_OFFSET(0xBE2BFA0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESET_OFFSET UNITYSDK_OFFSET(0xBE2C340)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_RESUME_OFFSET UNITYSDK_OFFSET(0xBE2C270)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETBIRDADAPTIVEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xBE2BD20)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETDEPLOYPOSITION_OFFSET UNITYSDK_OFFSET(0xBE2C7F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERBODYMATERIAL_OFFSET UNITYSDK_OFFSET(0xBE2C710)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTEREMO_OFFSET UNITYSDK_OFFSET(0xBE2C880)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xBE2C780)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETFIGHTERSCALE_OFFSET UNITYSDK_OFFSET(0xBE2C4F0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xBE2D310)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_SETUPBACKGROUNDBYROUND_OFFSET UNITYSDK_OFFSET(0xBE2D460)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_STOP_OFFSET UNITYSDK_OFFSET(0xBE2C0E0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE2D8B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__BINDUIPAGE_OFFSET UNITYSDK_OFFSET(0xBE2CF10)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE2F0D0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEADAPTIVEPOSITION_OFFSET UNITYSDK_OFFSET(0xBE2E370)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0xBE2DFE0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2F0B0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__DEACTIVATEALLTIMELINES_OFFSET UNITYSDK_OFFSET(0xBE2D790)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__FITBIRDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xBE2CD40)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITBATTLESHOWFOV_OFFSET UNITYSDK_OFFSET(0xBE2DDC0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__INITFOV_OFFSET UNITYSDK_OFFSET(0xBE2D810)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xBE2EE00)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SCREENTORAY_OFFSET UNITYSDK_OFFSET(0xBE2E910)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__SETFOV_OFFSET UNITYSDK_OFFSET(0xBE2F030)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UIPOSITIONTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xBE2E180)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFITPOSITIONS_OFFSET UNITYSDK_OFFSET(0xBE2C960)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__UPDATEFOV_OFFSET UNITYSDK_OFFSET(0xBE2D900)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOPROJECTION_OFFSET UNITYSDK_OFFSET(0xBE2EC90)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREETIMELINEBATTLEFIELD__WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xBE2E770)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeTimelineBattleField_TypeDefinitionIndex = 71129;

	class MatchThreeTimelineBattleField : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__Round2BackGroudID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x4E430);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LevelID2BackGroundID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeTimelineBattleField_TypeDefinitionIndex)->GetStaticField(0x4E438);
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
