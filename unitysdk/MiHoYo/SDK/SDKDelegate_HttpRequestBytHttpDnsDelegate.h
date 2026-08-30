#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AADE0)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AAEF0)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9AAD50)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AACD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_HttpRequestBytHttpDnsDelegate_TypeDefinitionIndex = 7754;

	class SDKDelegate_HttpRequestBytHttpDnsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Action_1<::System::String*>* a5, ::System::Action* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Int32 a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Action_1<::System::String*>* a5, ::System::Action* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Boolean a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Int32 a10, ::System::Int32 a11, ::System::AsyncCallback* a12, ::System::Object* a13)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
