#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8E541422F89D76B8;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9A3FD70)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9A3FDA0)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A3F550)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3FD50)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_WorkDefCounter_TypeDefinitionIndex = 49061;

	class LoadingManager_WorkDefCounter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
