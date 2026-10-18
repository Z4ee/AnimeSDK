#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_4_09EC6CE804568837_OFFSET UNITYSDK_OFFSET(0x1D6AABE0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_4_74DC9693F2751D66_OFFSET UNITYSDK_OFFSET(0x1D6AABA0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByRawLevelVarAction_TypeDefinitionIndex = 18647;

	class FiveDimSetAnimParamByRawLevelVarAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::RPG::GameCore::LittleGameDynamicVar* LevelVarName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74DC9693F2751D66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_4_74DC9693F2751D66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09EC6CE804568837(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_4_09EC6CE804568837_OFFSET))(a1, a2);
		}
	};
}
