#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE4B40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_METHOD_2_DF84F9773DC0FC4C_OFFSET UNITYSDK_OFFSET(0xB902230)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PPFilterParameter_TypeDefinitionIndex = 45300;

	struct alignas(8) PPFilterParameter
	{
		::System::Single Duration; // 0x10
		::System::String* AssetPath; // 0x18
		::System::Boolean IsActive; // 0x20

		static ::RPGTools::Timeline::PostProcessing::PPFilterParameter Method_2_DF84F9773DC0FC4C(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::PPFilterParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_METHOD_2_DF84F9773DC0FC4C_OFFSET))(a1);
		}

		::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
