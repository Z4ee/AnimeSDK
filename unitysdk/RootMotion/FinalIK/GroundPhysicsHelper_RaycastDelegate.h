#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E0A090)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E0A180)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E07320)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E0A070)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundPhysicsHelper_RaycastDelegate_TypeDefinitionIndex = 41003;

	class GroundPhysicsHelper_RaycastDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::System::Single distance, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_INVOKE_OFFSET))(this, start, dir, distance, hit, layerMask);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::System::Single distance, ::RootMotion::FinalIK::GroundRaycastHit& hit, ::UnityEngine::LayerMask layerMask, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_BEGININVOKE_OFFSET))(this, start, dir, distance, hit, layerMask, callback, object);
		}

		::System::Boolean EndInvoke(::RootMotion::FinalIK::GroundRaycastHit& hit, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_ENDINVOKE_OFFSET))(this, hit, result);
		}
	};
}
