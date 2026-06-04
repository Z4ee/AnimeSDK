#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class ToastPage; }

#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xD064950)
#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD0649D0)
#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0649C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ToastPageBehaviour_TypeDefinitionIndex = 45683;

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

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
