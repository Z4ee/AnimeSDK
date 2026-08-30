#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_1B63CA7F861C1D4C_OFFSET UNITYSDK_OFFSET(0x1D2DA6B0)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_397952E5CBF66E2B_OFFSET UNITYSDK_OFFSET(0x1D2DA670)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DA6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveStageOnTargetForward_TypeDefinitionIndex = 22211;

	class MoveStageOnTargetForward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single StageRootOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_397952E5CBF66E2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveStageOnTargetForward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveStageOnTargetForward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_397952E5CBF66E2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B63CA7F861C1D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_1B63CA7F861C1D4C_OFFSET))(a1, a2);
		}
	};
}
