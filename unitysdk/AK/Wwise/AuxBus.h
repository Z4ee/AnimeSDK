#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseAuxBusReference;
class WwiseObjectReference;

#define AK_WWISE_AUXBUS_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C0912C0)
#define AK_WWISE_AUXBUS_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C091340)
#define AK_WWISE_AUXBUS_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C0912D0)
#define AK_WWISE_AUXBUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C091350)

namespace AK::Wwise
{
	inline static constexpr unsigned int AuxBus_TypeDefinitionIndex = 31645;

	class AuxBus : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseAuxBusReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}
	};
}
