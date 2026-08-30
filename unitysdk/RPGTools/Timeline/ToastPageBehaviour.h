#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class ToastPage; }

#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1BF2C760)
#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2C7D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ToastPageBehaviour_TypeDefinitionIndex = 48866;

	class ToastPageBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::ToastPage* config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
		}
	};
}
