#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AK_WWISE_CALLBACKFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB75150)

namespace AK::Wwise
{
	inline static constexpr unsigned int CallbackFlags_TypeDefinitionIndex = 33836;

	class CallbackFlags : public ::System::Object
	{
	public:
		::System::UInt32 value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_CALLBACKFLAGS__CTOR_OFFSET))(this);
		}
	};
}
