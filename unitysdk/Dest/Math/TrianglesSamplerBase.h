#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/WeightedSampler.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Rand; }

#define DEST_MATH_TRIANGLESSAMPLERBASE_CALCLTRIANGLEAREA_OFFSET UNITYSDK_OFFSET(0x1EE99DD0)
#define DEST_MATH_TRIANGLESSAMPLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE99DC0)

namespace Dest::Math
{
	inline static constexpr unsigned int TrianglesSamplerBase_TypeDefinitionIndex = 35464;

	class TrianglesSamplerBase : public ::Dest::Math::WeightedSampler
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x28

		::System::Void _ctor(::Dest::Math::Rand* rand)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Rand*))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLESSAMPLERBASE__CTOR_OFFSET))(this, rand);
		}

		::System::Single CalclTriangleArea(::UnityEngine::Vector3& e0, ::UnityEngine::Vector3& e1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLESSAMPLERBASE_CALCLTRIANGLEAREA_OFFSET))(this, e0, e1);
		}
	};
}
