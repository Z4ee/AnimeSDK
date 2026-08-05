#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sanctions/PlayerSanctionInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1CC484F0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1CC48530)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x1CC48510)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x1CC484D0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC48820)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1CC48500)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_OFFSET UNITYSDK_OFFSET(0x1CC48550)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1CC48540)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x1CC48520)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x1CC484E0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC48960)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int PlayerSanction_TypeDefinitionIndex = 35843;

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
