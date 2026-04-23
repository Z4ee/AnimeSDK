#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_6_2B05863EC22DF426_OFFSET UNITYSDK_OFFSET(0x18CBD330)
#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_6_FA5C31166BF625B3_OFFSET UNITYSDK_OFFSET(0x18CBD550)
#define RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActBatchGetRogueBuffFromFormulaConfig_TypeDefinitionIndex = 18663;

	class RogueActBatchGetRogueBuffFromFormulaConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2B05863EC22DF426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_6_2B05863EC22DF426_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FA5C31166BF625B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActBatchGetRogueBuffFromFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTBATCHGETROGUEBUFFFROMFORMULACONFIG_METHOD_6_FA5C31166BF625B3_OFFSET))(a1, a2);
		}
	};
}
