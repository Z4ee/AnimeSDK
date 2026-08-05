#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DG_TWEENING_CORE_UTILS_ANGLE2D_OFFSET UNITYSDK_OFFSET(0x1FC6F590)
#define DG_TWEENING_CORE_UTILS_VECTOR3FROMANGLE_OFFSET UNITYSDK_OFFSET(0x1FC6F520)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 28598;

	class Utils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Vector3FromAngle(::System::Single degrees, ::System::Single magnitude)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_UTILS_VECTOR3FROMANGLE_OFFSET))(degrees, magnitude);
		}

		static ::System::Single Angle2D(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_UTILS_ANGLE2D_OFFSET))(from, to);
		}
	};
}
