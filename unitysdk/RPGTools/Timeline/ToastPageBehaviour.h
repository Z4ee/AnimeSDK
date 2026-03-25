#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class ToastPage; }

#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xABAF690)
#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xABAF710)
#define RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABAF700)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ToastPageBehaviour_TypeDefinitionIndex = 39226;

	class ToastPageBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::ToastPage* config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_51AC7912135C5E23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_51AC7912135C5E23_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TOASTPAGEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
