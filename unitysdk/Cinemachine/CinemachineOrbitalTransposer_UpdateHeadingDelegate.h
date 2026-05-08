#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC85150)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC851F0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC848F0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC848E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_UpdateHeadingDelegate_TypeDefinitionIndex = 32524;

	class CinemachineOrbitalTransposer_UpdateHeadingDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::Cinemachine::CinemachineOrbitalTransposer* orbital, ::System::Single deltaTime, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_INVOKE_OFFSET))(this, orbital, deltaTime, up);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineOrbitalTransposer* orbital, ::System::Single deltaTime, ::UnityEngine::Vector3 up, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET))(this, orbital, deltaTime, up, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
