#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataValueInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x78B80)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x78810)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x78970)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x78B00)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x788C0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x78AF0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x78A80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeDataInternal_TypeDefinitionIndex = 42045;

	struct alignas(8) AttributeDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::Sessions::AttributeDataValueInternal m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Sessions::AttributeDataValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
