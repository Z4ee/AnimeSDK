#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawLines2D_Line.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawLines2D_LineStrip.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ADDLINESTRIP_OFFSET UNITYSDK_OFFSET(0x1DCC9A10)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ADDLINE_OFFSET UNITYSDK_OFFSET(0x1DCC9950)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DCC9B30)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_DRAW_OFFSET UNITYSDK_OFFSET(0x1DCC9C10)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ENSURE_OFFSET UNITYSDK_OFFSET(0x1DCC9740)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCA540)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__DRAW_G__DRAWLINESTRIPS_8_1_OFFSET UNITYSDK_OFFSET(0x1DCCA120)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__DRAW_G__DRAWLINES_8_0_OFFSET UNITYSDK_OFFSET(0x1DCC9DA0)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines2D_TypeDefinitionIndex = 38275;

	class CameraDebugDrawLines2D : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _stripPoints; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Color, ::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_Line>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_LineStrip>*>>* _items; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_Line>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_LineStrip>*> Ensure(::UnityEngine::Color& color)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_Line>*, ::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines2D_LineStrip>*>(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ENSURE_OFFSET))(this, color);
		}

		::System::Void AddLine(::UnityEngine::Vector2& start, ::UnityEngine::Vector2& end, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ADDLINE_OFFSET))(this, start, end, color, depth);
		}

		::System::Void AddLineStrip(::UnityEngine::Vector2& first, ::UnityEngine::Vector2& second, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* remaining, ::UnityEngine::Color color, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_ADDLINESTRIP_OFFSET))(this, first, second, remaining, color, depth);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_CLEAR_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D_DRAW_OFFSET))(this);
		}

		static ::System::Void _Draw_g__DrawLines_8_0(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawLines2D_Line>* items)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawLines2D_Line>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__DRAW_G__DRAWLINES_8_0_OFFSET))(items);
		}

		::System::Void _Draw_g__DrawLineStrips_8_1(::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawLines2D_LineStrip>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraDebugDrawLines2D_LineStrip>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES2D__DRAW_G__DRAWLINESTRIPS_8_1_OFFSET))(this, items);
		}
	};
}
