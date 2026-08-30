#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19691D60)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19691E70)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19690A10)
#define ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19691CF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundPhysicsHelper_SphereCastDelegate_TypeDefinitionIndex = 44850;

	class GroundPhysicsHelper_SphereCastDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RootMotion::FinalIK::GroundRaycastHit& a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RootMotion::FinalIK::GroundRaycastHit& a5, ::UnityEngine::LayerMask a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::FinalIK::GroundRaycastHit&, ::UnityEngine::LayerMask, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean EndInvoke(::RootMotion::FinalIK::GroundRaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::GroundRaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDPHYSICSHELPER_SPHERECASTDELEGATE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
