#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2490)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15CD24C0)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2480)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2390)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetUrlQueryDelegate_TypeDefinitionIndex = 7813;

	class WebDelegate_SetUrlQueryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
