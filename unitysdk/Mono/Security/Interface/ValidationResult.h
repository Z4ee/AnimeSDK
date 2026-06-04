#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET UNITYSDK_OFFSET(0x1852A130)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET UNITYSDK_OFFSET(0x1852A140)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1852A110)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ValidationResult_TypeDefinitionIndex = 2273;

	class ValidationResult : public ::System::Object
	{
	public:
		::System::Boolean trusted; // 0x10
		::System::Boolean user_denied; // 0x11
		::System::Int32 error_code; // 0x14
		::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_Trusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET))(this);
		}

		::System::Boolean get_UserDenied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET))(this);
		}
	};
}
