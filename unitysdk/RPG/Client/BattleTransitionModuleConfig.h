#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

class Class_2_2D85C3C5517A2A08_TransitionShotData;
namespace RPG::Client { class BattleToMazeShotConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x91D9150)
#define RPG_CLIENT_BATTLETRANSITIONMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x91D91A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTransitionModuleConfig_TypeDefinitionIndex = 56962;

	class BattleTransitionModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Boolean ForbidMazeToBattleTransition; // 0x18
		::System::Boolean ForbidBattleToMazeTransition; // 0x19
		::Class_2_2D85C3C5517A2A08_TransitionShotData* UltraLongShot; // 0x20
		::Class_2_2D85C3C5517A2A08_TransitionShotData* LongShot; // 0x28
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CloseShot; // 0x30
		::Class_2_2D85C3C5517A2A08_TransitionShotData* PlayerBeHitShot; // 0x38
		::Class_2_2D85C3C5517A2A08_TransitionShotData* PlayerBeHitMiddleShot; // 0x40
		::Class_2_2D85C3C5517A2A08_TransitionShotData* PlayerBeHitLongShot; // 0x48
		::System::Single FrameBlendDelay; // 0x50
		::System::Single FrameBlendWeightStart; // 0x54
		::System::Single FrameBlendDuration; // 0x58
		::System::Single MazeToBattleBlendTime; // 0x5C
		::System::String* MazeToBattleBlendCurveName; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::BattleToMazeShotConfig*>* BattleToMazeShotList; // 0x68
		::System::Single BlendToFreelookTime; // 0x70
		::System::String* BlendToFreelookCurve; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETRANSITIONMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
