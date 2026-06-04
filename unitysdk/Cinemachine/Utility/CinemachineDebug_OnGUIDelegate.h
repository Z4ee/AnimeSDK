#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146695E0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14669610)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146695D0)
#define CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14669560)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int CinemachineDebug_OnGUIDelegate_TypeDefinitionIndex = 36949;

	class CinemachineDebug_OnGUIDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_CINEMACHINEDEBUG_ONGUIDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
