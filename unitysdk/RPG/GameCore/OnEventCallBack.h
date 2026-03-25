#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_375;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA9FEB40)
#define RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA9FEB70)
#define RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA9FE5F0)
#define RPG_GAMECORE_ONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FE5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnEventCallBack_TypeDefinitionIndex = 45591;

	class OnEventCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_0_16E4307DCC419505_375* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_INVOKE_OFFSET))(this, pEvent);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_375* pEvent, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_375*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, pEvent, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
