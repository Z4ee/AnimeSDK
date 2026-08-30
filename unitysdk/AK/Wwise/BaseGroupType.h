#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;

#define AK_WWISE_BASEGROUPTYPE_GET_GROUPGUID_OFFSET UNITYSDK_OFFSET(0x1EEA5F70)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPID_1_OFFSET UNITYSDK_OFFSET(0x1EEA5F30)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1EEA5E40)
#define AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEA5CD0)
#define AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EEA5E80)
#define AK_WWISE_BASEGROUPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA60F0)

namespace AK::Wwise
{
	inline static constexpr unsigned int BaseGroupType_TypeDefinitionIndex = 43786;

	class BaseGroupType : public ::AK::Wwise::BaseType
	{
	public:
		::System::Int32 groupIdInternal; // 0x20
		::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_GroupWwiseObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPWWISEOBJECTREFERENCE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPID_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_groupID_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPID_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_groupGuid()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASEGROUPTYPE_GET_GROUPGUID_OFFSET))(this);
		}
	};
}
