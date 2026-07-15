#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sanctions/PlayerSanctionInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C0C0160)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1C0C01A0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x1C0C0180)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x1C0C0140)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_1_OFFSET UNITYSDK_OFFSET(0x1C0C05F0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C0C0170)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_OFFSET UNITYSDK_OFFSET(0x1C0C01C0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_REFERENCEID_OFFSET UNITYSDK_OFFSET(0x1C0C01B0)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEEXPIRES_OFFSET UNITYSDK_OFFSET(0x1C0C0190)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEPLACED_OFFSET UNITYSDK_OFFSET(0x1C0C0150)
#define EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C0720)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int PlayerSanction_TypeDefinitionIndex = 43066;

	class PlayerSanction : public ::System::Object
	{
	public:
		::System::String* _Action_k__BackingField; // 0x10
		::System::String* _ReferenceId_k__BackingField; // 0x18
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

		::System::Void set_TimePlaced(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEPLACED_OFFSET))(this, a1);
		}

		::System::String* get_Action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Int64 get_TimeExpires()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_TIMEEXPIRES_OFFSET))(this);
		}

		::System::Void set_TimeExpires(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_TIMEEXPIRES_OFFSET))(this, a1);
		}

		::System::String* get_ReferenceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_GET_REFERENCEID_OFFSET))(this);
		}

		::System::Void set_ReferenceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_REFERENCEID_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanctionInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_PLAYERSANCTION_SET_1_OFFSET))(this, a1);
		}
	};
}
