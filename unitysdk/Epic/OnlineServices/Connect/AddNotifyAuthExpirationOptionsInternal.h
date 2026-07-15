#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class AddNotifyAuthExpirationOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A4E8D0)
#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39250)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int AddNotifyAuthExpirationOptionsInternal_TypeDefinitionIndex = 43920;

	struct alignas(4) AddNotifyAuthExpirationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYAUTHEXPIRATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
