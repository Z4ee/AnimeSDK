#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class CopyUserAuthTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AA9520)
#define EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39250)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int CopyUserAuthTokenOptionsInternal_TypeDefinitionIndex = 44026;

	struct alignas(4) CopyUserAuthTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYUSERAUTHTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
