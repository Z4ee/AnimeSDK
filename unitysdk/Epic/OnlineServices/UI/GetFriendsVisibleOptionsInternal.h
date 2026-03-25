#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UI { class GetFriendsVisibleOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x200B0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1FF80)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1FDF0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1FEB0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int GetFriendsVisibleOptionsInternal_TypeDefinitionIndex = 35304;

	struct alignas(8) GetFriendsVisibleOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UI::GetFriendsVisibleOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::GetFriendsVisibleOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
