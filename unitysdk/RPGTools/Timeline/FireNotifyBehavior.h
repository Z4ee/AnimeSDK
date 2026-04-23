#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xB8DBCA0)
#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB8DBD50)
#define RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DBD40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FireNotifyBehavior_TypeDefinitionIndex = 45124;

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

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
