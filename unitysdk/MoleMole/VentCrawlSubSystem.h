#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_95A845D4DB09FB20.h"
#include "unitysdk/Enum_3_BDD4C8CD0F92A196.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VENTCRAWLSUBSYSTEM_APPLYANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0xD570B70)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0xD570460)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARREFRESHMOVEDIRECTIONTIMER_OFFSET UNITYSDK_OFFSET(0x156F6190)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x156F46B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEOVERRIDEAVATARMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x156F6D90)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x156F45E0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEREFRESHMOVEDIRECTIONTIMER_OFFSET UNITYSDK_OFFSET(0x156F61E0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENDVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x156F78B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENTERVENTCRAWLCAMERA_OFFSET UNITYSDK_OFFSET(0x156F4890)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_EXITVENTCRAWLCAMERA_OFFSET UNITYSDK_OFFSET(0x156F51F0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_FORCEENDVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x156F7060)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x156F4EF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETENDPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0xD570C80)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETSTARTPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0xD56FEA0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURFROMPATHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x156F6550)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURTARGETPATHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x156F6230)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_ISPATHPOINTDATAVALID_OFFSET UNITYSDK_OFFSET(0x156F5180)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_INITPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0xD570380)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_MOVETONEXTPATHPOINT_OFFSET UNITYSDK_OFFSET(0x156F6350)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x156F6FA0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x156F6FF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x156F70B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REALENABLEVENTCRAWL_OFFSET UNITYSDK_OFFSET(0xD56FC10)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_RECREATEPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0xD5704D0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x156F40E0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHNEXTPATHPOINT_OFFSET UNITYSDK_OFFSET(0x156F5760)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHOVERRIDEAVATARMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x156F5B10)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_SETACTENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD570100)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_SETTARGETLOOKATDIRECTION_OFFSET UNITYSDK_OFFSET(0x156F4740)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_1_OFFSET UNITYSDK_OFFSET(0x156F7160)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x156F7110)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0x156F3DF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x156F3FF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKMOVE_OFFSET UNITYSDK_OFFSET(0x156F5540)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKSTATE_OFFSET UNITYSDK_OFFSET(0xD56F7B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERACTINGENTITYDITHER_OFFSET UNITYSDK_OFFSET(0xD570F00)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERMOVEDIRECTIONSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x156F6670)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRYREFRESHMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x156F56B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD5711A0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_0_OFFSET UNITYSDK_OFFSET(0xD571210)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_1_OFFSET UNITYSDK_OFFSET(0xD571240)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_2_OFFSET UNITYSDK_OFFSET(0xD5711D0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD571260)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD5712F0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD571380)

namespace MoleMole
{
	inline static constexpr unsigned int VentCrawlSubSystem_TypeDefinitionIndex = 60626;

	class VentCrawlSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::VentCrawlSubSystem*>
	{
	public:
		// static const ::System::Single REFRESH_MOVE_DIRECTION_TIME; // 0x0
		::System::String* _activeTag; // 0x10
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x18
		::MoleMole::EntityHandle _actingEntity; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _pathPointList; // 0x30
		::System::Int32 _curPathPointIndex; // 0x38
		::Enum_3_95A845D4DB09FB20 _ventCrawlState; // 0x3C
		::System::Single _refreshMoveDirectionTimer; // 0x40
		::System::Single _forceAutoLookAtTimer; // 0x44
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x48
		::System::Single _startActingDelayTimer; // 0x54
		::UnityEngine::Quaternion _targetLookAtRotation; // 0x58
		::UnityEngine::Quaternion _curLookAtRotation; // 0x68
		::System::Boolean _forceAutoLookAt; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void TickCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKCAMERA_OFFSET))(this);
		}

		::System::Void EnableForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void DisableForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void TickForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void RefreshAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void SetTargetLookAtDirection(::UnityEngine::Vector3 direction, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_SETTARGETLOOKATDIRECTION_OFFSET))(this, direction, isInit);
		}

		::System::Void EnterVentCrawlCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENTERVENTCRAWLCAMERA_OFFSET))(this);
		}

		::System::Void ExitVentCrawlCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_EXITVENTCRAWLCAMERA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void TickMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKMOVE_OFFSET))(this);
		}

		::System::Void TryRefreshMoveDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRYREFRESHMOVEDIRECTION_OFFSET))(this);
		}

		::System::Void EnableRefreshMoveDirectionTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEREFRESHMOVEDIRECTIONTIMER_OFFSET))(this);
		}

		::System::Void ClearRefreshMoveDirectionTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARREFRESHMOVEDIRECTIONTIMER_OFFSET))(this);
		}

		::System::Void RefreshNextPathPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHNEXTPATHPOINT_OFFSET))(this);
		}

		::System::Void MoveToNextPathPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_MOVETONEXTPATHPOINT_OFFSET))(this);
		}

		::System::Void RefreshOverrideAvatarMoveDirection(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHOVERRIDEAVATARMOVEDIRECTION_OFFSET))(this, isInit);
		}

		::System::Void TriggerMoveDirectionSoundAction(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERMOVEDIRECTIONSOUNDACTION_OFFSET))(this, isInit);
		}

		::System::Void DisableOverrideAvatarMoveDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEOVERRIDEAVATARMOVEDIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurTargetPathPointPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURTARGETPATHPOINTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurFromPathPointPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURFROMPATHPOINTPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsPathPointDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_ISPATHPOINTDATAVALID_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void StartVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_OFFSET))(this);
		}

		::System::Void StartVentCrawl_1(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::Boolean isInverted, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_1_OFFSET))(this, curvySpline, isInverted, tag);
		}

		::System::Void ForceEndVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_FORCEENDVENTCRAWL_OFFSET))(this);
		}

		::System::Void EndVentCrawl(::Enum_3_BDD4C8CD0F92A196 exitType, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BDD4C8CD0F92A196, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENDVENTCRAWL_OFFSET))(this, exitType, tag);
		}

		::System::Void TickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKSTATE_OFFSET))(this);
		}

		::System::Void RealEnableVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REALENABLEVENTCRAWL_OFFSET))(this);
		}

		::System::Void SetActEntityTransform(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_SETACTENTITYTRANSFORM_OFFSET))(this, position, forward);
		}

		::System::Void InitPathPointData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_INITPATHPOINTDATA_OFFSET))(this);
		}

		::System::Void ClearPathPointData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARPATHPOINTDATA_OFFSET))(this);
		}

		::System::Void RecreatePathPointData(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::Boolean isInverted)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_RECREATEPATHPOINTDATA_OFFSET))(this, curvySpline, isInverted);
		}

		::System::Void ApplyAnimatorParam(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::AnimatorParamControl* animatorParamControl, ::System::Boolean forceInstantUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::AnimatorParamControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_APPLYANIMATORPARAM_OFFSET))(this, entity, animatorParamControl, forceInstantUpdate);
		}

		::System::Boolean GetStartPathPointData(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETSTARTPATHPOINTDATA_OFFSET))(this, position, forward);
		}

		::System::Boolean GetEndPathPointData(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETENDPATHPOINTDATA_OFFSET))(this, position, forward);
		}

		::System::Void TriggerActingEntityDither(::System::Boolean isEnableDither)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERACTINGENTITYDITHER_OFFSET))(this, isEnableDither);
		}

		::UnityEngine::Vector3 _EnterVentCrawlCamera_b__12_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _EnterVentCrawlCamera_b__12_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_0_OFFSET))(this);
		}

		::System::Single _EnterVentCrawlCamera_b__12_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
