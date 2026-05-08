#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1BCCFE60)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_POLICYERRORS_OFFSET UNITYSDK_OFFSET(0x1BCCFE70)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET UNITYSDK_OFFSET(0x1BCCFE40)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET UNITYSDK_OFFSET(0x1BCCFE50)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCCFE30)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCFE10)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ValidationResult_TypeDefinitionIndex = 2428;

	class ValidationResult : public ::System::Object
	{
	public:
		::System::Boolean trusted; // 0x10
		::System::Boolean user_denied; // 0x11
		::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors; // 0x14
		::System::Int32 error_code; // 0x1C

		::System::Void _ctor(::System::Boolean trusted, ::System::Boolean user_denied, ::System::Int32 error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET))(this, trusted, user_denied, error_code, policy_errors);
		}

		::System::Void _ctor_1(::System::Boolean trusted, ::System::Boolean user_denied, ::System::Int32 error_code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_1_OFFSET))(this, trusted, user_denied, error_code);
		}

		::System::Boolean get_Trusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET))(this);
		}

		::System::Boolean get_UserDenied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET))(this);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> get_PolicyErrors()
		{
			return ((::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_POLICYERRORS_OFFSET))(this);
		}
	};
}
