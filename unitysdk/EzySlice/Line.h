#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EZYSLICE_LINE_GET_DISTSQ_OFFSET UNITYSDK_OFFSET(0x3A3DD20)
#define EZYSLICE_LINE_GET_DIST_OFFSET UNITYSDK_OFFSET(0x3A3DCD0)
#define EZYSLICE_LINE_GET_POSITIONA_OFFSET UNITYSDK_OFFSET(0x165820)
#define EZYSLICE_LINE_GET_POSITIONB_OFFSET UNITYSDK_OFFSET(0x38CBD20)
#define EZYSLICE_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x358EBE0)

namespace EzySlice
{
	inline static constexpr unsigned int Line_TypeDefinitionIndex = 45220;

	struct alignas(4) Line
	{
		::UnityEngine::Vector3 m_pos_a; // 0x10
		::UnityEngine::Vector3 m_pos_b; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_LINE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_dist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_DIST_OFFSET))(this);
		}

		::System::Single get_distSq()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_DISTSQ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_POSITIONA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_POSITIONB_OFFSET))(this);
		}
	};
}
