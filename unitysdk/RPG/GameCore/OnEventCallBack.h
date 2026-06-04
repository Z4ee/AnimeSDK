#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_401;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCE6A3C0)
#define RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCE6A3F0)
#define RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xCE6A3B0)
#define RPG_GAMECORE_ONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6A2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnEventCallBack_TypeDefinitionIndex = 52938;

	class OnEventCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_401* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_401*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
