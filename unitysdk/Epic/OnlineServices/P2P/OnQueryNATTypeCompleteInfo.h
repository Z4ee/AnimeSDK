#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/NATType.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnQueryNATTypeCompleteInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF5C130)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5C0F0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_NATTYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C110)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF5C0D0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF5C260)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5C100)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_NATTYPE_OFFSET UNITYSDK_OFFSET(0x1DF5C120)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF5C150)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF5C0E0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C410)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteInfo_TypeDefinitionIndex = 36177;

	class OnQueryNATTypeCompleteInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::P2P::NATType _NATType_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x1C

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
