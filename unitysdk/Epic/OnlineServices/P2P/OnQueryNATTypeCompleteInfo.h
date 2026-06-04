#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/NATType.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnQueryNATTypeCompleteInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA30EAA0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA30EA60)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_NATTYPE_OFFSET UNITYSDK_OFFSET(0xA30EA80)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA30EA40)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA30EDB0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA30EA70)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_NATTYPE_OFFSET UNITYSDK_OFFSET(0xA30EA90)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_OFFSET UNITYSDK_OFFSET(0xA30EAC0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA30EA50)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA30EED0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteInfo_TypeDefinitionIndex = 42539;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::NATType get_NATType()
		{
			return ((::Epic::OnlineServices::P2P::NATType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GET_NATTYPE_OFFSET))(this);
		}

		::System::Void set_NATType(::Epic::OnlineServices::P2P::NATType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::NATType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_NATTYPE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
