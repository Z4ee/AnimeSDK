#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBB5DB0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBB5DF0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBAFBE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB5D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CreateSessionDelegate_TypeDefinitionIndex = 19381;

	class ConsoleDelegate_CreateSessionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_INVOKE_OFFSET))(this, jsonString, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonString, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_BEGININVOKE_OFFSET))(this, jsonString, callback, __callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATESESSIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
