#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawLines3D_Line.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_ADDLINE_OFFSET UNITYSDK_OFFSET(0x1C841650)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C841750)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_DRAW_OFFSET UNITYSDK_OFFSET(0x1C8417C0)
#define PIPELINECAMERA_CAMERADEBUGDRAWLINES3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C841B40)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines3D_TypeDefinitionIndex = 37630;

	class CameraDebugDrawLines3D : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PipelineCamera::CameraDebugDrawLines3D_Line>* _items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D__CTOR_OFFSET))(this);
		}

		::System::Void AddLine(::UnityEngine::Vector3& lineStart, ::UnityEngine::Vector3& lineEnd, ::UnityEngine::Color lineColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_ADDLINE_OFFSET))(this, lineStart, lineEnd, lineColor);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_CLEAR_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWLINES3D_DRAW_OFFSET))(this);
		}
	};
}
