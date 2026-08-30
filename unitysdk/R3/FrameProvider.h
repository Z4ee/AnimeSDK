#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_FRAMEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBA380)

namespace R3
{
	inline static constexpr unsigned int FrameProvider_TypeDefinitionIndex = 35239;

	class FrameProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_FRAMEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
