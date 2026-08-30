#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD9E1F90)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD9E1FC0)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xD9E1F80)
#define RPG_CLIENT_ONBACKPRESSEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E1F10)

namespace RPG::Client
{
	inline static constexpr unsigned int OnBackPressedCallback_TypeDefinitionIndex = 71307;

	class OnBackPressedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
