#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceSkipLevelStateOverrideItem; }

#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_METHOD_2_A2CE69BEB7C34185_OFFSET UNITYSDK_OFFSET(0x1749F660)
#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1749F760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipLevelStateOverrideConfig_TypeDefinitionIndex = 17459;

	class PerformanceSkipLevelStateOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A2CE69BEB7C34185(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipLevelStateOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipLevelStateOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_METHOD_2_A2CE69BEB7C34185_OFFSET))(a1, a2);
		}
	};
}
