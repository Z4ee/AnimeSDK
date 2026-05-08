#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawPoints3D_Point.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x1BABB9E0)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BABBAB0)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_DRAW_OFFSET UNITYSDK_OFFSET(0x1BABBB20)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BABBE70)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawPoints3D_TypeDefinitionIndex = 36019;

	class CameraDebugDrawPoints3D : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawPoints3D_Point>* _items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D__CTOR_OFFSET))(this);
		}

		::System::Void AddPoint(::UnityEngine::Vector3& position, ::UnityEngine::Color color, ::System::Single size, ::System::Boolean wireFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_ADDPOINT_OFFSET))(this, position, color, size, wireFrame);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_CLEAR_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS3D_DRAW_OFFSET))(this);
		}
	};
}
