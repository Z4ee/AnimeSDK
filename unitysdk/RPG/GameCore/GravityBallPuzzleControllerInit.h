#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravityBallControlMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_METHOD_3_43EFD85F0B9AE6FA_OFFSET UNITYSDK_OFFSET(0x1D1488D0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_METHOD_3_BA0119C547A2AF99_OFFSET UNITYSDK_OFFSET(0x1D1489D0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D148960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleControllerInit_TypeDefinitionIndex = 20140;

	class GravityBallPuzzleControllerInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InitPuzzleID; // 0x18
		::RPG::GameCore::TargetEvaluator* WallProp; // 0x20
		::RPG::GameCore::TargetEvaluator* DstProp; // 0x28
		::RPG::GameCore::TargetEvaluator* WallBGProp; // 0x30
		::RPG::GameCore::GravityBallControlMode ControlMode; // 0x38
		::System::Single FinishProtectTime; // 0x3C
		::RPG::GameCore::DynamicFloat* RelativeSwitchHandPuzzleID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43EFD85F0B9AE6FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleControllerInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_METHOD_3_43EFD85F0B9AE6FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA0119C547A2AF99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLECONTROLLERINIT_METHOD_3_BA0119C547A2AF99_OFFSET))(a1, a2);
		}
	};
}
