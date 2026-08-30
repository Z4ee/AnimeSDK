#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Mono::Net::Security { class AsyncProtocolResult; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class String; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C474B40)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1C474B20)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1C474B30)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x1C474BE0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET UNITYSDK_OFFSET(0x1C474F10)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET UNITYSDK_OFFSET(0x1C474D60)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET UNITYSDK_OFFSET(0x1C474C00)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET UNITYSDK_OFFSET(0x1C474CB0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x1C474BF0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x1C474CC0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C475070)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C474940)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest_TypeDefinitionIndex = 2426;

	class AsyncProtocolRequest : public ::System::Object
	{
	public:
		::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField; // 0x10
		::System::Object* locker; // 0x18
		::System::Int32 RequestedSize; // 0x20
		::System::Int32 Started; // 0x24
		::System::Int32 _UserResult_k__BackingField; // 0x28
		::System::Boolean _RunSynchronously_k__BackingField; // 0x2C
		::System::Int32 WriteRequested; // 0x30

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* get_Parent()
		{
			return ((::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET))(this);
		}

		::System::Boolean get_RunSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_UserResult()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET))(this);
		}

		::System::Void set_UserResult(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET))(this, a1);
		}

		::System::Void RequestRead(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET))(this, a1);
		}

		::System::Void RequestWrite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* StartOperation(::System::Threading::CancellationToken a1)
		{
			return ((::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* ProcessOperation(::System::Threading::CancellationToken a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Int32>>* InnerRead(::System::Threading::CancellationToken a1)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Int32>>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET))(this);
		}
	};
}
