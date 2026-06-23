#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E814520)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E8145C0)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E813C20)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E813C00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_GetBlendOverrideDelegate_TypeDefinitionIndex = 34106;

	class CinemachineCore_GetBlendOverrideDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::Cinemachine::CinemachineBlendDefinition Invoke(::Cinemachine::ICinemachineCamera* fromVcam, ::Cinemachine::ICinemachineCamera* toVcam, ::Cinemachine::CinemachineBlendDefinition defaultBlend, ::UnityEngine::MonoBehaviour* owner)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET))(this, fromVcam, toVcam, defaultBlend, owner);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::ICinemachineCamera* fromVcam, ::Cinemachine::ICinemachineCamera* toVcam, ::Cinemachine::CinemachineBlendDefinition defaultBlend, ::UnityEngine::MonoBehaviour* owner, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::MonoBehaviour*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET))(this, fromVcam, toVcam, defaultBlend, owner, callback, object);
		}

		::Cinemachine::CinemachineBlendDefinition EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
