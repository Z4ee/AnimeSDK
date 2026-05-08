#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CONTROLPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C2979A0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CONTROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x317F00)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int ControlPoint_TypeDefinitionIndex = 25480;

	struct alignas(4) ControlPoint
	{
		::UnityEngine::Vector3 a; // 0x10
		::UnityEngine::Vector3 b; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CONTROLPOINT__CTOR_OFFSET))(this, a, b);
		}

		static ::DG::Tweening::Plugins::Core::PathCore::ControlPoint op_Addition(::DG::Tweening::Plugins::Core::PathCore::ControlPoint cp, ::UnityEngine::Vector3 v)
		{
			return ((::DG::Tweening::Plugins::Core::PathCore::ControlPoint(*)(::DG::Tweening::Plugins::Core::PathCore::ControlPoint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CONTROLPOINT_OP_ADDITION_OFFSET))(cp, v);
		}
	};
}
