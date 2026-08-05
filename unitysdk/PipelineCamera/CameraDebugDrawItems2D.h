#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera { class CameraDebugDrawLines2D; }
namespace PipelineCamera { class CameraDebugDrawPoints2D; }
namespace PipelineCamera { class CameraDebugDrawTriangles2D; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_COMMIT_OFFSET UNITYSDK_OFFSET(0x1E5C64F0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWLINESTRIP_OFFSET UNITYSDK_OFFSET(0x1E5C5CA0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1E5C5BF0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1E5C5B40)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1E5C5F20)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWTRIANGLESTRIP_OFFSET UNITYSDK_OFFSET(0x1E5C5E40)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1E5C5D70)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_RESET_OFFSET UNITYSDK_OFFSET(0x1E5C63C0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5910)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawItems2D_TypeDefinitionIndex = 38272;

	class CameraDebugDrawItems2D : public ::System::Object
	{
	public:
		::PipelineCamera::CameraDebugDrawLines2D* _lines; // 0x10
		::PipelineCamera::CameraDebugDrawTriangles2D* _triangles; // 0x18
		::PipelineCamera::CameraDebugDrawPoints2D* _points; // 0x20
		::UnityEngine::Matrix4x4 _orthoMatrix; // 0x28

		::System::Void _ctor(::System::Nullable_1<::UnityEngine::Matrix4x4> matrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Matrix4x4>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D__CTOR_OFFSET))(this, matrix);
		}

		::System::Void DrawPoint(::UnityEngine::Vector2& position, ::UnityEngine::Color color, ::System::Single size, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWPOINT_OFFSET))(this, position, color, size, depth);
		}

		::System::Void DrawLine(::UnityEngine::Vector2& start, ::UnityEngine::Vector2& end, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWLINE_OFFSET))(this, start, end, color, depth);
		}

		::System::Void DrawLineStrip(::UnityEngine::Vector2& first, ::UnityEngine::Vector2& second, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* remaining, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWLINESTRIP_OFFSET))(this, first, second, remaining, color, depth);
		}

		::System::Void DrawTriangle(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& pointB, ::UnityEngine::Vector2& pointC, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWTRIANGLE_OFFSET))(this, pointA, pointB, pointC, color, depth);
		}

		::System::Void DrawTriangleStrip(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& pointB, ::UnityEngine::Vector2& pointC, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* remaining, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWTRIANGLESTRIP_OFFSET))(this, pointA, pointB, pointC, remaining, color, depth);
		}

		::System::Void DrawRectangle(::UnityEngine::Vector2& center, ::UnityEngine::Vector2& extent, ::System::Boolean solid, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_DRAWRECTANGLE_OFFSET))(this, center, extent, solid, color, depth);
		}

		::System::Void Reset(::System::Nullable_1<::UnityEngine::Matrix4x4> newMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Matrix4x4>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_RESET_OFFSET))(this, newMatrix);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS2D_COMMIT_OFFSET))(this);
		}
	};
}
