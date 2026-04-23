#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_F59C8DF29FF9694F;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA6ECF00)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA6ECF30)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA6EC6E0)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ECEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_WorkDefCounter_TypeDefinitionIndex = 55856;

	class LoadingManager_WorkDefCounter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
