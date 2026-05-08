#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawPoints2D_Point.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x1B4826D0)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B482790)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_DRAW_OFFSET UNITYSDK_OFFSET(0x1B482830)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_ENSURE_OFFSET UNITYSDK_OFFSET(0x1B482520)
#define PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B482C80)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawPoints2D_TypeDefinitionIndex = 36004;

	class CameraDebugDrawPoints2D : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Color, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawPoints2D_Point>*>* _items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawPoints2D_Point>* Ensure(::UnityEngine::Color& color)
		{
			return ((::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawPoints2D_Point>*(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_ENSURE_OFFSET))(this, color);
		}

		::System::Void AddPoint(::UnityEngine::Vector2& position, ::UnityEngine::Color color, ::System::Single size, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_ADDPOINT_OFFSET))(this, position, color, size, depth);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_CLEAR_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWPOINTS2D_DRAW_OFFSET))(this);
		}
	};
}
