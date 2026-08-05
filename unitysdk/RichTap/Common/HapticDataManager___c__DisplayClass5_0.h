#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class HapticDataManager; }
namespace RichTap::Common { class HapticDataModel; }

#define RICHTAP_COMMON_HAPTICDATAMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F227240)
#define RICHTAP_COMMON_HAPTICDATAMANAGER___C__DISPLAYCLASS5_0__DECIDEREALPLAYBACK_B__1_OFFSET UNITYSDK_OFFSET(0x1F227DF0)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataManager___c__DisplayClass5_0_TypeDefinitionIndex = 38762;

	class HapticDataManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RichTap::Common::HapticDataManager* __4__this; // 0x10
		::RichTap::Common::HapticDataModel* element; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _DecideRealPlayback_b__1(::System::Boolean complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER___C__DISPLAYCLASS5_0__DECIDEREALPLAYBACK_B__1_OFFSET))(this, complete);
		}
	};
}
