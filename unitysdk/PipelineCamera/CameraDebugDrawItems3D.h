#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class CameraDebugDrawLines3D; }
namespace PipelineCamera { class CameraDebugDrawPoints3D; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_COMMIT_OFFSET UNITYSDK_OFFSET(0x1E5C81E0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1E5C7DD0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_1_OFFSET UNITYSDK_OFFSET(0x1E5C7570)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_2_OFFSET UNITYSDK_OFFSET(0x1E5C7BE0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_OFFSET UNITYSDK_OFFSET(0x1E5C7040)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1E5C6830)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1E5C6C40)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1E5C66E0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1E5C65B0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_RESET_OFFSET UNITYSDK_OFFSET(0x1E5C7FF0)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8330)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawItems3D_TypeDefinitionIndex = 38281;

	class CameraDebugDrawItems3D : public ::System::Object
	{
	public:
		::PipelineCamera::CameraDebugDrawPoints3D* _points; // 0x10
		::PipelineCamera::CameraDebugDrawLines3D* _lines; // 0x18
		::UnityEngine::Matrix4x4 _projectionMatrix; // 0x20

		::System::Void _ctor(::System::Nullable_1<::UnityEngine::Matrix4x4> matrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Matrix4x4>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D__CTOR_OFFSET))(this, matrix);
		}

		::System::Void DrawPoint(::UnityEngine::Vector3& position, ::UnityEngine::Color color, ::System::Single size, ::System::Boolean wireFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWPOINT_OFFSET))(this, position, color, size, wireFrame);
		}

		::System::Void DrawLine(::UnityEngine::Vector3& lineStart, ::UnityEngine::Vector3& lineEnd, ::UnityEngine::Color lineColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_OFFSET))(this, lineStart, lineEnd, lineColor);
		}

		::System::Void DrawLine_1(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector3& lineStart, ::UnityEngine::Vector3& lineEnd, ::UnityEngine::Color lineColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_1_OFFSET))(this, matrix, lineStart, lineEnd, lineColor);
		}

		::System::Void DrawLine_2(::UnityEngine::Vector3& location, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& lineStart, ::UnityEngine::Vector3& lineEnd, ::UnityEngine::Color lineColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINE_2_OFFSET))(this, location, rotation, lineStart, lineEnd, lineColor);
		}

		::System::Void DrawLineStrip(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_OFFSET))(this, points, color);
		}

		::System::Void DrawLineStrip_1(::UnityEngine::Matrix4x4& matrix, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_1_OFFSET))(this, matrix, points, color);
		}

		::System::Void DrawLineStrip_2(::UnityEngine::Vector3& location, ::UnityEngine::Quaternion& rotation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWLINESTRIP_2_OFFSET))(this, location, rotation, points, color);
		}

		::System::Void DrawCircle(::UnityEngine::Vector3& center, ::UnityEngine::Quaternion& rotation, ::System::Single radius, ::UnityEngine::Color color, ::System::Int32 segments)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_DRAWCIRCLE_OFFSET))(this, center, rotation, radius, color, segments);
		}

		::System::Void Reset(::System::Nullable_1<::UnityEngine::Matrix4x4> newMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Matrix4x4>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_RESET_OFFSET))(this, newMatrix);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D_COMMIT_OFFSET))(this);
		}
	};
}
