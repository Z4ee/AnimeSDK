#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_FROMVECTOR4_OFFSET UNITYSDK_OFFSET(0x16475DC0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_GET_ASVECTOR4_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSmoothPath_Waypoint_TypeDefinitionIndex = 38452;

	struct alignas(4) CinemachineSmoothPath_Waypoint
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single roll; // 0x1C

		/*
		::UnityEngine::Vector4 get_AsVector4()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_GET_ASVECTOR4_OFFSET))(this);
		}
		*/

		/*
		static ::Cinemachine::CinemachineSmoothPath_Waypoint FromVector4(::UnityEngine::Vector4 a1)
		{
			return ((::Cinemachine::CinemachineSmoothPath_Waypoint(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_FROMVECTOR4_OFFSET))(a1);
		}
		*/
	};
}
