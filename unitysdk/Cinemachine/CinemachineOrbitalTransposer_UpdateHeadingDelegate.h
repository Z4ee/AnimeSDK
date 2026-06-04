#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14652400)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14652480)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14650A90)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14652310)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_UpdateHeadingDelegate_TypeDefinitionIndex = 36846;

	class CinemachineOrbitalTransposer_UpdateHeadingDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::Cinemachine::CinemachineOrbitalTransposer* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineOrbitalTransposer* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
