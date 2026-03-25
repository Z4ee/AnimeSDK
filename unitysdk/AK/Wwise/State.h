#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseStateReference;

#define AK_WWISE_STATE_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B88DF0)
#define AK_WWISE_STATE_GET_WWISEOBJECTGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x18B88E80)
#define AK_WWISE_STATE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18B88E70)
#define AK_WWISE_STATE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18B88E90)
#define AK_WWISE_STATE_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B88E00)
#define AK_WWISE_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B89040)

namespace AK::Wwise
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 34719;

	class State : public ::AK::Wwise::BaseGroupType
	{
	public:
		::WwiseStateReference* WwiseObjectReference; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::WwiseObjectType get_WwiseObjectGroupType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_GET_WWISEOBJECTGROUPTYPE_OFFSET))(this);
		}

		::System::Void SetValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_SETVALUE_OFFSET))(this);
		}
	};
}
