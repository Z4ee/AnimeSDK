#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UI { class HideFriendsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20600)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x204D0)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x20340)
#define EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x20400)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int HideFriendsOptionsInternal_TypeDefinitionIndex = 41136;

	struct alignas(8) HideFriendsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UI::HideFriendsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::HideFriendsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_HIDEFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
