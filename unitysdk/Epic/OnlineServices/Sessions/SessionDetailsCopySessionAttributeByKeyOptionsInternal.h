#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsCopySessionAttributeByKeyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16060)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x16050)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x15ED0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x15F80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopySessionAttributeByKeyOptionsInternal_TypeDefinitionIndex = 42135;

	struct alignas(8) SessionDetailsCopySessionAttributeByKeyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AttrKey; // 0x18

		::System::Void set_AttrKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_ATTRKEY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
