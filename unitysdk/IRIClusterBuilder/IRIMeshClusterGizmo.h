#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace IRIClusterBuilder { class IRIMeshClusterItemDebug_MeshletBounds; }

#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_METHOD_5_666191C5DC332092_OFFSET UNITYSDK_OFFSET(0x174FFA60)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_METHOD_5_B920F25FC9D3FA44_OFFSET UNITYSDK_OFFSET(0x174FFD80)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x174FF3A0)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17500050)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterGizmo_TypeDefinitionIndex = 45981;

	class IRIMeshClusterGizmo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRIClusterBuilder::IRIMeshClusterItemDebug_MeshletBounds* _Bounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_5_666191C5DC332092(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_METHOD_5_666191C5DC332092_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_5_B920F25FC9D3FA44(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_METHOD_5_B920F25FC9D3FA44_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
