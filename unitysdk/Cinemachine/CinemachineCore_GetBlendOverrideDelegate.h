#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1463B5D0)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1463B670)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1462CF70)
#define CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1463B4E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_GetBlendOverrideDelegate_TypeDefinitionIndex = 36875;

	class CinemachineCore_GetBlendOverrideDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineBlendDefinition Invoke(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3, ::UnityEngine::MonoBehaviour* a4)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3, ::UnityEngine::MonoBehaviour* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::MonoBehaviour*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Cinemachine::CinemachineBlendDefinition EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
