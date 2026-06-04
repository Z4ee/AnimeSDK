#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_9D40F9D90905A4A4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE4DA20)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE4DA50)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE4D420)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4D9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_WorkDefCounter_TypeDefinitionIndex = 56611;

	class LoadingManager_WorkDefCounter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
