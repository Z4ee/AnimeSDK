#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyUpdateMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_APPLYHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1E5636B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E5636A0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_DETACH_OFFSET UNITYSDK_OFFSET(0x1E55EE40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_GET_HASTRACKEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1E55EFA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E55ECB0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E563A50)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E563930)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E563E50)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E563E30)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E563B70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E5636D0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_REMOVEDESTROYEDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E5636E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_RESET_OFFSET UNITYSDK_OFFSET(0x1E5636C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_SHOULDRUNFORSTAGE_OFFSET UNITYSDK_OFFSET(0x1E563E70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_TICK_OFFSET UNITYSDK_OFFSET(0x1E563B90)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E563EB0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineUnityUpdater_TypeDefinitionIndex = 39573;

	class CurvySplineUnityUpdater : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* trackedSplines; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_RESET_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Initialize(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_INITIALIZE_OFFSET))(this, spline);
		}

		::System::Void Detach(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_DETACH_OFFSET))(this, spline);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Tick(::FluffyUnderware::Curvy::CurvyUpdateMethod stage, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyUpdateMethod, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_TICK_OFFSET))(this, stage, deltaTime);
		}

		static ::System::Boolean ShouldRunForStage(::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::CurvyUpdateMethod stage)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvyUpdateMethod))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_SHOULDRUNFORSTAGE_OFFSET))(spline, stage);
		}

		::System::Boolean get_HasTrackedSplines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_GET_HASTRACKEDSPLINES_OFFSET))(this);
		}

		::System::Void RemoveDestroyedReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_REMOVEDESTROYEDREFERENCES_OFFSET))(this);
		}

		::System::Void ApplyHideFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEUNITYUPDATER_APPLYHIDEFLAGS_OFFSET))(this);
		}
	};
}
