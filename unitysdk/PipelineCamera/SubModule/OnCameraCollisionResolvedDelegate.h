#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF2A1C0)
#define PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF2A230)
#define PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF29E80)
#define PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29E60)

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int OnCameraCollisionResolvedDelegate_TypeDefinitionIndex = 38020;

	class OnCameraCollisionResolvedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::PipelineCamera::WorldBasicCameraData& result)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::PipelineCamera::WorldBasicCameraData& result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::PipelineCamera::WorldBasicCameraData& result, ::System::IAsyncResult* __result)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_ONCAMERACOLLISIONRESOLVEDDELEGATE_ENDINVOKE_OFFSET))(this, result, __result);
		}
	};
}
