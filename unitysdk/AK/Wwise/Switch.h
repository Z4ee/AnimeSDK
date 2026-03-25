#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseSwitchReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_SWITCH_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B89050)
#define AK_WWISE_SWITCH_GET_WWISEOBJECTGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x18B890E0)
#define AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18B890D0)
#define AK_WWISE_SWITCH_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18B890F0)
#define AK_WWISE_SWITCH_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B89060)
#define AK_WWISE_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B89200)

namespace AK::Wwise
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 34720;

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

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::WwiseObjectType get_WwiseObjectGroupType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_WWISEOBJECTGROUPTYPE_OFFSET))(this);
		}

		::System::Void SetValue(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_SETVALUE_OFFSET))(this, gameObject);
		}
	};
}
