#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A8CF0)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A8D30)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A8730)
#define MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A8710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_GetProductListDelegate_TypeDefinitionIndex = 19823;

	class EOSDelegate_GetProductListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::JSONArray* productArray, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* callback, ::System::String* traceId)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_INVOKE_OFFSET))(this, productArray, callback, traceId);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::JSONArray* productArray, ::System::Action_1<::MiHoYo::SDK::JSONArray*>* callback, ::System::String* traceId, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::Action_1<::MiHoYo::SDK::JSONArray*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_BEGININVOKE_OFFSET))(this, productArray, callback, traceId, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_GETPRODUCTLISTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
