#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices::Connect { class CreateUserOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x941210)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9410E0)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x940F50)
#define EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x941010)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CreateUserOptionsInternal_TypeDefinitionIndex = 34498;

	struct alignas(8) CreateUserOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ContinuanceToken; // 0x18

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CreateUserOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CreateUserOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREATEUSEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
