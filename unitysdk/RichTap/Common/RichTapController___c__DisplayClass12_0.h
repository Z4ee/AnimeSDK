#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class HapticDataModel; }

#define RICHTAP_COMMON_RICHTAPCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15C40)
#define RICHTAP_COMMON_RICHTAPCONTROLLER___C__DISPLAYCLASS12_0__PLAYPREBAKE_B__0_OFFSET UNITYSDK_OFFSET(0x1DE17380)

namespace RichTap::Common
{
	inline static constexpr unsigned int RichTapController___c__DisplayClass12_0_TypeDefinitionIndex = 38111;

	class RichTapController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RichTap::Common::HapticDataModel* haptic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPrebake_b__0(::System::Boolean complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCONTROLLER___C__DISPLAYCLASS12_0__PLAYPREBAKE_B__0_OFFSET))(this, complete);
		}
	};
}
