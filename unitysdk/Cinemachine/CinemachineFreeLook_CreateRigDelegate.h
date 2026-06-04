#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14647360)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146473A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14645E60)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14647270)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_CreateRigDelegate_TypeDefinitionIndex = 36802;

	class CinemachineFreeLook_CreateRigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCamera* Invoke(::Cinemachine::CinemachineFreeLook* a1, ::System::String* a2, ::Cinemachine::CinemachineVirtualCamera* a3)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineFreeLook* a1, ::System::String* a2, ::Cinemachine::CinemachineVirtualCamera* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Cinemachine::CinemachineVirtualCamera* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
