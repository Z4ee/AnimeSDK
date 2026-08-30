#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UI { class GetFriendsVisibleOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20BF0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x20BE0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x20A50)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x20B10)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int GetFriendsVisibleOptionsInternal_TypeDefinitionIndex = 44976;

	struct alignas(8) GetFriendsVisibleOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UI::GetFriendsVisibleOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::GetFriendsVisibleOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
