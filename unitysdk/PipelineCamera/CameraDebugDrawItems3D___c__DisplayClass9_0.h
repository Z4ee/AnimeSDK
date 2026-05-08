#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B6940)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS9_0__DRAWLINESTRIP_G__GETENUMERABLE_0_OFFSET UNITYSDK_OFFSET(0x1C2B6950)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawItems3D___c__DisplayClass9_0_TypeDefinitionIndex = 36015;

	class CameraDebugDrawItems3D___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points; // 0x10
		::Foundation::Unreal::FTransform transform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* _DrawLineStrip_g__GetEnumerable_0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS9_0__DRAWLINESTRIP_G__GETENUMERABLE_0_OFFSET))(this);
		}
	};
}
