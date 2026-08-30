#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseSwitchReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_SWITCH_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEA7610)
#define AK_WWISE_SWITCH_GET_WWISEOBJECTGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1EEA76A0)
#define AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1EEA7690)
#define AK_WWISE_SWITCH_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA76B0)
#define AK_WWISE_SWITCH_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEA7620)
#define AK_WWISE_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA77C0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 43792;

	class Switch : public ::AK::Wwise::BaseGroupType
	{
	public:
		::WwiseSwitchReference* WwiseObjectReference; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_SET_OBJECTREFERENCE_OFFSET))(this, a1);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::WwiseObjectType get_WwiseObjectGroupType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_WWISEOBJECTGROUPTYPE_OFFSET))(this);
		}

		::System::Void SetValue(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_SETVALUE_OFFSET))(this, a1);
		}
	};
}
