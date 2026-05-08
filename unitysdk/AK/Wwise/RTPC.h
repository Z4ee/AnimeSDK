#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseRtpcReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_RTPC_GETGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x1C1246E0)
#define AK_WWISE_RTPC_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C124430)
#define AK_WWISE_RTPC_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C1242E0)
#define AK_WWISE_RTPC_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C124360)
#define AK_WWISE_RTPC_SETGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x1C1245B0)
#define AK_WWISE_RTPC_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C124370)
#define AK_WWISE_RTPC_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C1242F0)
#define AK_WWISE_RTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1246F0)

namespace AK::Wwise
{
	inline static constexpr unsigned int RTPC_TypeDefinitionIndex = 31651;

	class RTPC : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseRtpcReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void SetValue(::UnityEngine::GameObject* gameObject, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SETVALUE_OFFSET))(this, gameObject, value);
		}

		::System::Single GetValue(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GETVALUE_OFFSET))(this, gameObject);
		}

		::System::Void SetGlobalValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SETGLOBALVALUE_OFFSET))(this, value);
		}

		::System::Single GetGlobalValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GETGLOBALVALUE_OFFSET))(this);
		}
	};
}
