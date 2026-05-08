#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyUpdateMethod.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::DevTools { template <typename T> class UnityEventEx_1; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3658F0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3658B0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C365430)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3658A0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C365900)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int NearestSplinePoint_TypeDefinitionIndex = 37197;

	class NearestSplinePoint : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x28
		::UnityEngine::Transform* SourcePosition; // 0x30
		::UnityEngine::Transform* TargetPosition; // 0x38
		::FluffyUnderware::Curvy::CurvyUpdateMethod UpdateIn; // 0x40
		::FluffyUnderware::DevTools::UnityEventEx_1<::UnityEngine::Vector3>* OnUpdated; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_PROCESS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINT_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
