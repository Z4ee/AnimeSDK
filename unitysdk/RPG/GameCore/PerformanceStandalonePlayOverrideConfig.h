#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_METHOD_2_CEC47A98E538DC1E_OFFSET UNITYSDK_OFFSET(0x1B4B8B60)
#define RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceStandalonePlayOverrideConfig_TypeDefinitionIndex = 18285;

	class PerformanceStandalonePlayOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOverridePosition; // 0x10
		::RPG::MVector3 OverridePosition; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CEC47A98E538DC1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_METHOD_2_CEC47A98E538DC1E_OFFSET))(a1, a2);
		}
	};
}
