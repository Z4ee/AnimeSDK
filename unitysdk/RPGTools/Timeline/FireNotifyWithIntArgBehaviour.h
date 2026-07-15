#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x19A58DA0)
#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A58EC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FireNotifyWithIntArgBehaviour_TypeDefinitionIndex = 46612;

	class FireNotifyWithIntArgBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* NotifyTypeName; // 0x20
		::System::String* IntArg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_METHOD_3_E3DE31A03057E055_OFFSET))(this);
		}
	};
}
