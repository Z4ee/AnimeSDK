#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x19AD63B0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_USERRESULT_OFFSET UNITYSDK_OFFSET(0x19AD63A0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AD63D0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD63C0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolResult_TypeDefinitionIndex = 2609;

	class AsyncProtocolResult : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField; // 0x10
		::System::Int32 _UserResult_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT__CTOR_OFFSET))(this, result);
		}

		::System::Void _ctor_1(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT__CTOR_1_OFFSET))(this, error);
		}

		::System::Int32 get_UserResult()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_USERRESULT_OFFSET))(this);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error()
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLRESULT_GET_ERROR_OFFSET))(this);
		}
	};
}
