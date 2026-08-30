#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_METHOD_3_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xE8E53D0)
#define RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E5440)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowUIBehaviour_TypeDefinitionIndex = 48862;

	class ShowUIBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* UIName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_8CA05BCD86E125DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_METHOD_3_8CA05BCD86E125DF_OFFSET))(this);
		}
	};
}
