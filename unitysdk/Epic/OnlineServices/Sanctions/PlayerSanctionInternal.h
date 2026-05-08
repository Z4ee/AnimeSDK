#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sanctions { class PlayerSanction; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BFE40)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x8BFB00)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x8BFC60)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x28E6B0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x28B580)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8BFDD0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x8BFBB0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8BFDC0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x8BFD10)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x6D5350)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x381830)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int PlayerSanctionInternal_TypeDefinitionIndex = 33622;

	struct alignas(8) PlayerSanctionInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int64 m_TimePlaced; // 0x18
		::System::IntPtr m_Action; // 0x20
		::System::Int64 m_TimeExpires; // 0x28
		::System::IntPtr m_ReferenceId; // 0x30

		::System::Int64 get_TimePlaced()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_TIMEPLACED_OFFSET))(this);
		}

		::System::Void set_TimePlaced(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_TIMEPLACED_OFFSET))(this, value);
		}

		::System::String* get_Action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_ACTION_OFFSET))(this, value);
		}

		::System::Int64 get_TimeExpires()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_TIMEEXPIRES_OFFSET))(this);
		}

		::System::Void set_TimeExpires(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_TIMEEXPIRES_OFFSET))(this, value);
		}

		::System::String* get_ReferenceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_GET_REFERENCEID_OFFSET))(this);
		}

		::System::Void set_ReferenceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_REFERENCEID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sanctions::PlayerSanction* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::PlayerSanction*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTIONINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
