#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_1B63CA7F861C1D4C_OFFSET UNITYSDK_OFFSET(0x18B646D0)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_AC27959AE824855A_OFFSET UNITYSDK_OFFSET(0x18B64650)
#define RPG_GAMECORE_MOVESTAGEONTARGETFORWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B646A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveStageOnTargetForward_TypeDefinitionIndex = 21338;

	class MoveStageOnTargetForward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single StageRootOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC27959AE824855A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveStageOnTargetForward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveStageOnTargetForward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_AC27959AE824855A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B63CA7F861C1D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVESTAGEONTARGETFORWARD_METHOD_3_1B63CA7F861C1D4C_OFFSET))(a1, a2);
		}
	};
}
