#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawTriangles2D_Triangle.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawTriangles2D_TriangleStrip.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ADDTRIANGLESTRIP_OFFSET UNITYSDK_OFFSET(0x1D560130)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1D560050)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D560270)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_DRAW_OFFSET UNITYSDK_OFFSET(0x1D560350)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ENSURE_OFFSET UNITYSDK_OFFSET(0x1D55FE40)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D560D10)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__DRAW_G__DRAWTRIANGLESTRIP_8_1_OFFSET UNITYSDK_OFFSET(0x1D5608A0)
#define PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__DRAW_G__DRAWTRIANGLE_8_0_OFFSET UNITYSDK_OFFSET(0x1D5604E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawTriangles2D_TypeDefinitionIndex = 37617;

	class CameraDebugDrawTriangles2D : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Color, ::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_Triangle>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_TriangleStrip>*>>* _items; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _additionalPoints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_Triangle>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_TriangleStrip>*> Ensure(::UnityEngine::Color& color)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_Triangle>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawTriangles2D_TriangleStrip>*>(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ENSURE_OFFSET))(this, color);
		}

		::System::Void AddTriangle(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& pointB, ::UnityEngine::Vector2& pointC, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ADDTRIANGLE_OFFSET))(this, pointA, pointB, pointC, color, depth);
		}

		::System::Void AddTriangleStrip(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& pointB, ::UnityEngine::Vector2& pointC, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* remaining, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_ADDTRIANGLESTRIP_OFFSET))(this, pointA, pointB, pointC, remaining, color, depth);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_CLEAR_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D_DRAW_OFFSET))(this);
		}

		static ::System::Void _Draw_g__DrawTriangle_8_0(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawTriangles2D_Triangle>* items)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawTriangles2D_Triangle>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__DRAW_G__DRAWTRIANGLE_8_0_OFFSET))(items);
		}

		::System::Void _Draw_g__DrawTriangleStrip_8_1(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawTriangles2D_TriangleStrip>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawTriangles2D_TriangleStrip>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWTRIANGLES2D__DRAW_G__DRAWTRIANGLESTRIP_8_1_OFFSET))(this, items);
		}
	};
}
