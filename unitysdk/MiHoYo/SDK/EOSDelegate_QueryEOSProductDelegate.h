#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9441D0)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B944210)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9441C0)
#define MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B944140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_QueryEOSProductDelegate_TypeDefinitionIndex = 7669;

	class EOSDelegate_QueryEOSProductDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::System::Boolean>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::Boolean>* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_QUERYEOSPRODUCTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
