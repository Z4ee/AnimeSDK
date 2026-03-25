#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xAB67CE0)
#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB67D90)
#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB67D80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FireNotifyBehavior_TypeDefinitionIndex = 39215;

	class FireNotifyBehavior : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* NotifyTypeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
