#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_FRAMEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F5150)

namespace R3
{
	inline static constexpr unsigned int FrameProvider_TypeDefinitionIndex = 35919;

	class FrameProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_FRAMEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
