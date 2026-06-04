#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FrameTimeBudgetInfo; }

#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_79D13B37C1CF0A00_OFFSET UNITYSDK_OFFSET(0x1969D260)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_DCCC537F302CBEF6_OFFSET UNITYSDK_OFFSET(0x1969DA60)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1969D250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFrameTimeBudgetConfig_TypeDefinitionIndex = 15655;

	class DeviceRelatedFrameTimeBudgetConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::FrameTimeBudgetInfo* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCCC537F302CBEF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_DCCC537F302CBEF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79D13B37C1CF0A00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_79D13B37C1CF0A00_OFFSET))(a1, a2);
		}
	};
}
