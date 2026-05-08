#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOSUBZONE3D_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1177D6F0)
#define MOLEMOLE_MONOSUBZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1177D750)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSubZone3D_TypeDefinitionIndex = 64614;

	class MonoSubZone3D : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Priority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUBZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUBZONE3D_CONTAINS_OFFSET))(this, a1);
		}
	};
}
