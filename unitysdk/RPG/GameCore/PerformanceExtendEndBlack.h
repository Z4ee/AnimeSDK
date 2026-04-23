#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_METHOD_3_2E45EDF055055174_OFFSET UNITYSDK_OFFSET(0x18BE1F00)
#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_METHOD_3_E415AD2EDA120925_OFFSET UNITYSDK_OFFSET(0x18BE1E70)
#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE1ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceExtendEndBlack_TypeDefinitionIndex = 20770;

	class PerformanceExtendEndBlack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ExtendTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E415AD2EDA120925(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceExtendEndBlack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceExtendEndBlack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_METHOD_3_E415AD2EDA120925_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E45EDF055055174(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceExtendEndBlack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceExtendEndBlack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_METHOD_3_2E45EDF055055174_OFFSET))(a1, a2);
		}
	};
}
