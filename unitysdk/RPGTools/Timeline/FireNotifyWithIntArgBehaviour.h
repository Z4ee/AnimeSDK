#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD01F240)
#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD01F110)
#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD01F230)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FireNotifyWithIntArgBehaviour_TypeDefinitionIndex = 45674;

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

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
