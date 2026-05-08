#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0xDB88170)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0xDB880A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E__CTOR_OFFSET UNITYSDK_OFFSET(0xDB88090)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Class_1_9FD34A2CCF2BF43E_TypeDefinitionIndex = 60411;

	class ScopedOverlookCameraMode_Class_1_9FD34A2CCF2BF43E : public ::System::Object
	{
	public:
		::MoleMole::Cameras::OverlookCameraConfig* Field_1_1; // 0x10
		::MoleMole::Cameras::ScopedOverlookCameraMode* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
		}

		::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_9FD34A2CCF2BF43E_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
		}
	};
}
