#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_3_7AE683FF19DFADC0_OFFSET UNITYSDK_OFFSET(0x19753590)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_3_EC82A3862387F48F_OFFSET UNITYSDK_OFFSET(0x19753520)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19753570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByRawLevelVarAction_TypeDefinitionIndex = 17744;

	class FiveDimSetAnimParamByRawLevelVarAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::RPG::GameCore::FiveDimDynamicVar* LevelVarName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC82A3862387F48F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_3_EC82A3862387F48F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AE683FF19DFADC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_METHOD_3_7AE683FF19DFADC0_OFFSET))(a1, a2);
		}
	};
}
