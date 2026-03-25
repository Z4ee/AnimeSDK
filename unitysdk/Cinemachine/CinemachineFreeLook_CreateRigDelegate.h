#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x119BA860)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x119BA8A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x119B8AE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x119BA840)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_CreateRigDelegate_TypeDefinitionIndex = 30782;

	class CinemachineFreeLook_CreateRigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::Cinemachine::CinemachineVirtualCamera* Invoke(::Cinemachine::CinemachineFreeLook* vcam, ::System::String* name, ::Cinemachine::CinemachineVirtualCamera* copyFrom)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_INVOKE_OFFSET))(this, vcam, name, copyFrom);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineFreeLook* vcam, ::System::String* name, ::Cinemachine::CinemachineVirtualCamera* copyFrom, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_BEGININVOKE_OFFSET))(this, vcam, name, copyFrom, callback, object);
		}

		::Cinemachine::CinemachineVirtualCamera* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
