#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175229A0)
#define MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175229D0)
#define MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17522450)
#define MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17522430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_CheckEntitlementsDelegate_TypeDefinitionIndex = 6763;

	class EOSDelegate_CheckEntitlementsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_2<::System::String*, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_2<::System::String*, ::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
