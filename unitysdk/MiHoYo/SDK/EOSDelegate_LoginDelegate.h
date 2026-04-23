#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17524350)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17524380)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17523E00)
#define MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17523DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_LoginDelegate_TypeDefinitionIndex = 6761;

	class EOSDelegate_LoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_2<::System::Int32, ::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_LOGINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
