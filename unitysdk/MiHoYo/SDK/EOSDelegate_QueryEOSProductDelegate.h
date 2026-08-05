#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF31CB0)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF31CF0)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF31720)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31700)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_QueryEOSProductDelegate_TypeDefinitionIndex = 19824;

	class EOSDelegate_QueryEOSProductDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::System::Boolean>* callback, ::System::String* traceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_INVOKE_OFFSET))(this, callback, traceId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::Boolean>* callback, ::System::String* traceId, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_BEGININVOKE_OFFSET))(this, callback, traceId, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
