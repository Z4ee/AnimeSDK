#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F855480)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F8554B0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F8551F0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F84FCF0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int CinemachineDebug_OnGUIDelegate_TypeDefinitionIndex = 34827;

	class CinemachineDebug_OnGUIDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
