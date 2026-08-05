#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Cinemachine { class ConfinerOven; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }

#define CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_CALCULATEDELTATRANSFORMATIONMATRIX_OFFSET UNITYSDK_OFFSET(0xAACC00)
#define CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_INVALIDATE_OFFSET UNITYSDK_OFFSET(0xAACB40)
#define CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_ISVALID_OFFSET UNITYSDK_OFFSET(0xAACBF0)
#define CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_VALIDATECACHE_OFFSET UNITYSDK_OFFSET(0xAACBE0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_ShapeCache_TypeDefinitionIndex = 34661;

	struct alignas(8) CinemachineConfiner2D_ShapeCache
	{
		::Cinemachine::ConfinerOven* m_confinerOven; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* m_OriginalPath; // 0x18
		::UnityEngine::Matrix4x4 m_DeltaWorldToBaked; // 0x20
		::UnityEngine::Matrix4x4 m_DeltaBakedToWorld; // 0x60
		::System::Single m_aspectRatio; // 0xA0
		::System::Single m_maxWindowSize; // 0xA4
		::System::Single m_maxComputationTimePerFrameInSeconds; // 0xA8
		::UnityEngine::Matrix4x4 m_bakedToWorld; // 0xAC
		::UnityEngine::Collider2D* m_boundingShape2D; // 0xF0

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_INVALIDATE_OFFSET))(this);
		}

		::System::Boolean ValidateCache(::UnityEngine::Collider2D* boundingShape2D, ::System::Single maxWindowSize, ::System::Single aspectRatio, ::System::Boolean& confinerStateChanged)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::System::Single, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_VALIDATECACHE_OFFSET))(this, boundingShape2D, maxWindowSize, aspectRatio, confinerStateChanged);
		}

		::System::Boolean IsValid(::UnityEngine::Collider2D*& boundingShape2D, ::System::Single& aspectRatio, ::System::Single& maxOrthoSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_ISVALID_OFFSET))(this, boundingShape2D, aspectRatio, maxOrthoSize);
		}

		::System::Void CalculateDeltaTransformationMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_SHAPECACHE_CALCULATEDELTATRANSFORMATIONMATRIX_OFFSET))(this);
		}
	};
}
