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

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_DEBUG_OFFSET UNITYSDK_OFFSET(0x1A565C00)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A565B60)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A565B70)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A565B40)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1A565B50)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x1A565BB0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET UNITYSDK_OFFSET(0x1A565F70)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET UNITYSDK_OFFSET(0x1A565D90)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET UNITYSDK_OFFSET(0x1A565C10)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET UNITYSDK_OFFSET(0x1A565CC0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x1A565BC0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x1A565CD0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A566170)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A565BD0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest_TypeDefinitionIndex = 2610;

	class AsyncProtocolRequest : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_next_id()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AsyncProtocolRequest_TypeDefinitionIndex)->GetStaticField(0x11D0);
		}
		::System::Object* locker; // 0x10
		::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField; // 0x18
		::System::Int32 Started; // 0x20
		::System::Int32 WriteRequested; // 0x24
		::System::Boolean _RunSynchronously_k__BackingField; // 0x28
		::System::Int32 RequestedSize; // 0x2C
		::System::Int32 _UserResult_k__BackingField; // 0x30

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__CTOR_OFFSET))(this, parent, sync);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* get_Parent()
		{
			return ((::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_PARENT_OFFSET))(this);
		}

		::System::Boolean get_RunSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_RUNSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_UserResult()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_GET_USERRESULT_OFFSET))(this);
		}

		::System::Void set_UserResult(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_SET_USERRESULT_OFFSET))(this, value);
		}

		::System::Void Debug(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_DEBUG_OFFSET))(this, message, args);
		}

		::System::Void RequestRead(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTREAD_OFFSET))(this, size);
		}

		::System::Void RequestWrite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_REQUESTWRITE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* StartOperation(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_STARTOPERATION_OFFSET))(this, cancellationToken);
		}

		::System::Threading::Tasks::Task* ProcessOperation(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_PROCESSOPERATION_OFFSET))(this, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Int32>>* InnerRead(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Int32>>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_INNERREAD_OFFSET))(this, cancellationToken);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST_TOSTRING_OFFSET))(this);
		}
	};
}
