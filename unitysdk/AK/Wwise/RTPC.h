#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
class WwiseRtpcReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_RTPC_GETGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA7380)
#define AK_WWISE_RTPC_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA7100)
#define AK_WWISE_RTPC_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEA6F90)
#define AK_WWISE_RTPC_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1EEA7010)
#define AK_WWISE_RTPC_SETGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA7200)
#define AK_WWISE_RTPC_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA7020)
#define AK_WWISE_RTPC_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEA6FA0)
#define AK_WWISE_RTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA7390)

namespace AK::Wwise
{
	inline static constexpr unsigned int RTPC_TypeDefinitionIndex = 43790;

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

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SET_OBJECTREFERENCE_OFFSET))(this, a1);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void SetValue(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Single GetValue(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetGlobalValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_SETGLOBALVALUE_OFFSET))(this, a1);
		}

		::System::Single GetGlobalValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_RTPC_GETGLOBALVALUE_OFFSET))(this);
		}
	};
}
