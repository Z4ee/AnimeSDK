#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E00AD50)
#define ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E00AEA0)
#define ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E00A3A0)
#define ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00A380)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_OnCapsuleCastDelegate_TypeDefinitionIndex = 38198;

	class Grounding_OnCapsuleCastDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_INVOKE_OFFSET))(this, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_BEGININVOKE_OFFSET))(this, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, callback, object);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& hitInfo, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONCAPSULECASTDELEGATE_ENDINVOKE_OFFSET))(this, hitInfo, result);
		}
	};
}
