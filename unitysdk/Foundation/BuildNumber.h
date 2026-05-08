#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BUILDNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF0BA0)

namespace Foundation
{
	inline static constexpr unsigned int BuildNumber_TypeDefinitionIndex = 8037;

	class BuildNumber : public ::System::Object
	{
	public:
		::System::Int32 Build; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUILDNUMBER__CTOR_OFFSET))(this);
		}
	};
}
