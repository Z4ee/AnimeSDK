#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseTriggerReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F7EA5C0)
#define AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1F7EA640)
#define AK_WWISE_TRIGGER_POST_OFFSET UNITYSDK_OFFSET(0x1F7EA650)
#define AK_WWISE_TRIGGER_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F7EA5D0)
#define AK_WWISE_TRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7EA6F0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Trigger_TypeDefinitionIndex = 33841;

	class Trigger : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseTriggerReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void Post(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_POST_OFFSET))(this, gameObject);
		}
	};
}
