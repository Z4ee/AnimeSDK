#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataValueInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AttributeData; }
namespace Epic::OnlineServices::Sessions { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x71CB0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x71950)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x71AB0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x71C40)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x71A00)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x71C30)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x71BC0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeDataInternal_TypeDefinitionIndex = 35416;

	struct alignas(8) AttributeDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::Epic::OnlineServices::Sessions::AttributeDataValueInternal m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::AttributeDataValue* get_Value()
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Epic::OnlineServices::Sessions::AttributeDataValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::AttributeData* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
