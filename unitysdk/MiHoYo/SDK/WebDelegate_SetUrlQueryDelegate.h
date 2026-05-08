#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0813D0)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A081400)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A080ED0)
#define MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A080EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetUrlQueryDelegate_TypeDefinitionIndex = 18725;

	class WebDelegate_SetUrlQueryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* query)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_INVOKE_OFFSET))(this, query);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* query, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_BEGININVOKE_OFFSET))(this, query, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETURLQUERYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
