#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/FrameProvider.h"

#define R3_NOTSUPPORTEDFRAMEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF17520)

namespace R3
{
	inline static constexpr unsigned int NotSupportedFrameProvider_TypeDefinitionIndex = 35245;

	class NotSupportedFrameProvider : public ::R3::FrameProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_NOTSUPPORTEDFRAMEPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
