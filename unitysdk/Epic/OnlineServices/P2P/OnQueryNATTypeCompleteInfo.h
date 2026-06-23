#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/NATType.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnQueryNATTypeCompleteInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CB98190)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB98150)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_NATTYPE_OFFSET UNITYSDK_OFFSET(0x1CB98170)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CB98130)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CB982C0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB98160)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_NATTYPE_OFFSET UNITYSDK_OFFSET(0x1CB98180)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CB981B0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CB98140)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB98470)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteInfo_TypeDefinitionIndex = 35518;

	class OnQueryNATTypeCompleteInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18
		::Epic::OnlineServices::P2P::NATType _NATType_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::NATType get_NATType()
		{
			return ((::Epic::OnlineServices::P2P::NATType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_NATTYPE_OFFSET))(this);
		}

		::System::Void set_NATType(::Epic::OnlineServices::P2P::NATType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::NATType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_NATTYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_1_OFFSET))(this, other);
		}
	};
}
