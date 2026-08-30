#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EZYSLICE_TRIANGULATOR_MAPPED2D_GET_MAPPEDVALUE_OFFSET UNITYSDK_OFFSET(0x3A319B0)
#define EZYSLICE_TRIANGULATOR_MAPPED2D_GET_ORIGINALVALUE_OFFSET UNITYSDK_OFFSET(0x17670)
#define EZYSLICE_TRIANGULATOR_MAPPED2D__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD1650)

namespace EzySlice
{
	inline static constexpr unsigned int Triangulator_Mapped2D_TypeDefinitionIndex = 47463;

	struct alignas(4) Triangulator_Mapped2D
	{
		::UnityEngine::Vector3 original; // 0x10
		::UnityEngine::Vector2 mapped; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MAPPED2D__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 get_mappedValue()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MAPPED2D_GET_MAPPEDVALUE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_originalValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MAPPED2D_GET_ORIGINALVALUE_OFFSET))(this);
		}
	};
}
