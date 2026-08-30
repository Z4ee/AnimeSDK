#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x1BF2CE80)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1BF2CE30)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2D530)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransitEnvProfileBehaviour_TypeDefinitionIndex = 48867;

	class TransitEnvProfileBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* Path; // 0x20
		::System::Single Duration; // 0x28
		::System::Boolean UseStoryPriority; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_DA37DFE3A5BDA9F4_OFFSET))(this);
		}

		::System::Void Method_3_8923446497E3D0C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_8923446497E3D0C5_OFFSET))(this);
		}
	};
}
