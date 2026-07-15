#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1925D2B0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1925D3A0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1925B9D0)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1925D240)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundPhysicsHelper_RaycastDelegate_TypeDefinitionIndex = 42667;

	class GroundPhysicsHelper_RaycastDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RootMotion::FinalIK::GroundRaycastHit& a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RootMotion::FinalIK::GroundRaycastHit& a4, ::UnityEngine::LayerMask a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::RootMotion::FinalIK::GroundRaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_RAYCASTDELEGATE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
