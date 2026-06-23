#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C95E300)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C95E340)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C95DCE0)
#define MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95DCC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_PayDelegate_TypeDefinitionIndex = 19479;

	class EOSDelegate_PayDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* goodsId, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* callback, ::System::String* payTrace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_INVOKE_OFFSET))(this, goodsId, callback, payTrace);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* goodsId, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* callback, ::System::String* payTrace, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_BEGININVOKE_OFFSET))(this, goodsId, callback, payTrace, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_PAYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
