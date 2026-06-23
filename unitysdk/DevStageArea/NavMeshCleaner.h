#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEVSTAGEAREA_NAVMESHCLEANER__CTOR_OFFSET UNITYSDK_OFFSET(0x147EB2A0)

namespace DevStageArea
{
	inline static constexpr unsigned int NavMeshCleaner_TypeDefinitionIndex = 53392;

	class NavMeshCleaner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_WalkablePoint; // 0x18
		::System::Single m_Height; // 0x20
		::System::Single m_Offset; // 0x24
		::System::Int32 m_MidLayerCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVSTAGEAREA_NAVMESHCLEANER__CTOR_OFFSET))(this);
		}
	};
}
