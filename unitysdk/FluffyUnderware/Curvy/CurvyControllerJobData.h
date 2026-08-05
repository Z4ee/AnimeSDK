#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Controllers { class CurvyControllerUnityUpdater; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1F2804E0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_FREE_OFFSET UNITYSDK_OFFSET(0x1F280550)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1F280620)
#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F280650)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControllerJobData_TypeDefinitionIndex = 39701;

	class CurvyControllerJobData : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater* curvyController; // 0x10
		::System::Boolean culled; // 0x18
		::UnityEngine::Vector3 position; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA__CTOR_OFFSET))(this);
		}

		static ::FluffyUnderware::Curvy::CurvyControllerJobData* Allocate()
		{
			return ((::FluffyUnderware::Curvy::CurvyControllerJobData*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_ALLOCATE_OFFSET))();
		}

		static ::System::Void Free(::FluffyUnderware::Curvy::CurvyControllerJobData* jobData)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvyControllerJobData*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_FREE_OFFSET))(jobData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERJOBDATA_RESET_OFFSET))(this);
		}
	};
}
