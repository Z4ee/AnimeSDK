#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sanctions/PlayerSanctionInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x19429CC0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x19429D00)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x19429CE0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x19429CA0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_1_OFFSET UNITYSDK_OFFSET(0x19429FF0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x19429CD0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_OFFSET UNITYSDK_OFFSET(0x19429D20)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x19429D10)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x19429CF0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x19429CB0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1942A130)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int PlayerSanction_TypeDefinitionIndex = 33621;

	class PlayerSanction : public ::System::Object
	{
	public:
		::System::String* _ReferenceId_k__BackingField; // 0x10
		::System::String* _Action_k__BackingField; // 0x18
		::System::Int64 _TimePlaced_k__BackingField; // 0x20
		::System::Int64 _TimeExpires_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION__CTOR_OFFSET))(this);
		}

		::System::Int64 get_TimePlaced()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEPLACED_OFFSET))(this);
		}

		::System::Void set_TimePlaced(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEPLACED_OFFSET))(this, value);
		}

		::System::String* get_Action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_ACTION_OFFSET))(this, value);
		}

		::System::Int64 get_TimeExpires()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEEXPIRES_OFFSET))(this);
		}

		::System::Void set_TimeExpires(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEEXPIRES_OFFSET))(this, value);
		}

		::System::String* get_ReferenceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_REFERENCEID_OFFSET))(this);
		}

		::System::Void set_ReferenceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_REFERENCEID_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_1_OFFSET))(this, other);
		}
	};
}
