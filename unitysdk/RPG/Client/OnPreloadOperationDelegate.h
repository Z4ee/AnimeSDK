#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9E9A410)
#define RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9E9A440)
#define RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E99EC0)
#define RPG_CLIENT_ONPRELOADOPERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E99EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnPreloadOperationDelegate_TypeDefinitionIndex = 48031;

	class OnPreloadOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONPRELOADOPERATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_INVOKE_OFFSET))(this, res);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* res, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, res, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONPRELOADOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
