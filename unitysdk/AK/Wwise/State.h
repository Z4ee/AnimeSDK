#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseStateReference;

#define AK_WWISE_STATE_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B40F300)
#define AK_WWISE_STATE_GET_WWISEOBJECTGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B40F390)
#define AK_WWISE_STATE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B40F380)
#define AK_WWISE_STATE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B40F3A0)
#define AK_WWISE_STATE_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B40F310)
#define AK_WWISE_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40F570)

namespace AK::Wwise
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 41365;

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

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_SET_OBJECTREFERENCE_OFFSET))(this, a1);
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
