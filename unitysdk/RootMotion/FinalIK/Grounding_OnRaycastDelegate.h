#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9A1D00)
#define ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9A1E00)
#define ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9A15C0)
#define ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A15B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_OnRaycastDelegate_TypeDefinitionIndex = 36572;

	class Grounding_OnRaycastDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_INVOKE_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_BEGININVOKE_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, callback, object);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& hitInfo, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONRAYCASTDELEGATE_ENDINVOKE_OFFSET))(this, hitInfo, result);
		}
	};
}
