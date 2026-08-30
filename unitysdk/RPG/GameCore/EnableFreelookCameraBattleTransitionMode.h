#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraBattleTransitionAimDirection.h"
#include "unitysdk/RPG/GameCore/CameraBattleTransitionAimPos.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraBattleTransitionBeHitConfig; }
namespace RPG::GameCore { class CustomCameraBattleTransitionShotConfig; }

#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_METHOD_3_8940FBCFA685E7DF_OFFSET UNITYSDK_OFFSET(0x1D0626C0)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_METHOD_3_DF440198004AF96A_OFFSET UNITYSDK_OFFSET(0x1D062720)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D062700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFreelookCameraBattleTransitionMode_TypeDefinitionIndex = 20187;

	class EnableFreelookCameraBattleTransitionMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBattleToMaze; // 0x18
		::System::Boolean Enable; // 0x19
		::System::Single OverrideInitBlendTime; // 0x1C
		::System::Single IgnoreAttackerDistance; // 0x20
		::System::Single LongEnterBattleCameraDistance; // 0x24
		::System::Single TransitionSpeed; // 0x28
		::RPG::GameCore::CameraBattleTransitionBeHitConfig* SpecialBeHitConfig; // 0x30
		::RPG::MVector2 AimScreenOffset; // 0x38
		::RPG::GameCore::CameraBattleTransitionAimPos CustomShotAimPos; // 0x40
		::RPG::GameCore::CameraBattleTransitionAimDirection CustomShotAimDir; // 0x44
		::Il2CppArray<::RPG::GameCore::CustomCameraBattleTransitionShotConfig*>* CustomShotConfigs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8940FBCFA685E7DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_METHOD_3_8940FBCFA685E7DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF440198004AF96A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_METHOD_3_DF440198004AF96A_OFFSET))(a1, a2);
		}
	};
}
