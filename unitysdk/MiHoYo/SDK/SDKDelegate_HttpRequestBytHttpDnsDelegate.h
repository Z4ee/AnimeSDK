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

#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D76F0)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D7830)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D6D30)
#define MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D6D10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_HttpRequestBytHttpDnsDelegate_TypeDefinitionIndex = 19909;

	class SDKDelegate_HttpRequestBytHttpDnsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* strMethod, ::System::String* strUrl, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders, ::System::Boolean bIsCheckMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicReportInfo, ::System::Int32 nPort, ::System::Int32 nConnectTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_INVOKE_OFFSET))(this, strMethod, strUrl, arraBody, nRecvTimeout, completeCallback, timeoutCallback, dicHeaders, bIsCheckMD5, dicReportInfo, nPort, nConnectTimeout);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strMethod, ::System::String* strUrl, ::Il2CppArray<::System::Byte>* arraBody, ::System::Int32 nRecvTimeout, ::System::Action_1<::System::String*>* completeCallback, ::System::Action* timeoutCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders, ::System::Boolean bIsCheckMD5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicReportInfo, ::System::Int32 nPort, ::System::Int32 nConnectTimeout, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_BEGININVOKE_OFFSET))(this, strMethod, strUrl, arraBody, nRecvTimeout, completeCallback, timeoutCallback, dicHeaders, bIsCheckMD5, dicReportInfo, nPort, nConnectTimeout, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_HTTPREQUESTBYTHTTPDNSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
