#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3C8D0)

namespace RPGTools
{
	inline static constexpr unsigned int TimelineData_TypeDefinitionIndex = 48242;

	class TimelineData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINEDATA__CTOR_OFFSET))(this);
		}
	};
}
