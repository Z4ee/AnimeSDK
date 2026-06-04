#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"
#include "unitysdk/XInputDotNetPure/GamePadState.h"

namespace InControl::Internal { template <typename T> class RingBuffer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Threading { class Thread; }

#define INCONTROL_XINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET UNITYSDK_OFFSET(0x18129D40)
#define INCONTROL_XINPUTDEVICEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x18129CE0)
#define INCONTROL_XINPUTDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x18129E60)
#define INCONTROL_XINPUTDEVICEMANAGER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x18128690)
#define INCONTROL_XINPUTDEVICEMANAGER_STARTWORKER_OFFSET UNITYSDK_OFFSET(0x18128CF0)
#define INCONTROL_XINPUTDEVICEMANAGER_STOPWORKER_OFFSET UNITYSDK_OFFSET(0x18128FF0)
#define INCONTROL_XINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18128DC0)
#define INCONTROL_XINPUTDEVICEMANAGER_WORKER_OFFSET UNITYSDK_OFFSET(0x18129050)
#define INCONTROL_XINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18128730)

namespace InControl
{
	inline static constexpr unsigned int XInputDeviceManager_TypeDefinitionIndex = 37956;

	class XInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		// static const ::System::Int32 maxDevices = 0x4; // 0x0
		::System::Threading::Thread* thread; // 0x18
		::Il2CppArray<::System::Boolean>* deviceConnected; // 0x20
		::Il2CppArray<::InControl::Internal::RingBuffer_1<::XInputDotNetPure::GamePadState>*>* gamePadState; // 0x28
		::System::Int32 bufferSize; // 0x30
		::System::Int32 timeStep; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void StartWorker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_STARTWORKER_OFFSET))(this);
		}

		::System::Void StopWorker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_STOPWORKER_OFFSET))(this);
		}

		::System::Void Worker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_WORKER_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadState GetState(::System::Int32 a1)
		{
			return ((::XInputDotNetPure::GamePadState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_GETSTATE_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_DESTROY_OFFSET))(this);
		}

		static ::System::Boolean CheckPlatformSupport(::System::Collections::Generic::ICollection_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET))(a1);
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_XINPUTDEVICEMANAGER_ENABLE_OFFSET))();
		}
	};
}
