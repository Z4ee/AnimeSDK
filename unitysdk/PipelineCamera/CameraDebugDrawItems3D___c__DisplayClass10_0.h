#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC8E00)
#define PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0__DRAWCIRCLE_G__GETENUMERABLE_0_OFFSET UNITYSDK_OFFSET(0x1DCC8E10)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawItems3D___c__DisplayClass10_0_TypeDefinitionIndex = 38286;

	class CameraDebugDrawItems3D___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Foundation::Unreal::FTransform transform; // 0x10
		::System::Int32 segments; // 0x30
		::System::Single radius; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* _DrawCircle_g__GetEnumerable_0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERADEBUGDRAWITEMS3D___C__DISPLAYCLASS10_0__DRAWCIRCLE_G__GETENUMERABLE_0_OFFSET))(this);
		}
	};
}
