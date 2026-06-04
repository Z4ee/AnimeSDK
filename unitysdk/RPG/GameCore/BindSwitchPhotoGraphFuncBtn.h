#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindSwitchPhotoGraphFuncBtnUseType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphIdentifyDisplayType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphLongRangeModeConfig; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class PhotoGraphShotResultCondition; }
namespace RPG::GameCore { class PhotoGraphTripodModeConfig; }
namespace RPG::GameCore { class PhotoGraphUpdateTwoPointFourParam; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace System { class String; }

#define RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN_METHOD_3_034DCED400B9F2A1_OFFSET UNITYSDK_OFFSET(0x194DD640)
#define RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN_METHOD_3_0B55F517E5C1B3FC_OFFSET UNITYSDK_OFFSET(0x194DD580)
#define RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x194DD5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindSwitchPhotoGraphFuncBtn_TypeDefinitionIndex = 20439;

	class BindSwitchPhotoGraphFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SimpleMode; // 0x18
		::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType UseType; // 0x1C
		::System::Boolean Enable; // 0x20
		::RPG::GameCore::DynamicFloat* MissionID; // 0x28
		::RPG::GameCore::TargetFetchAdvPropEx* RangeTriggerProp; // 0x30
		::Il2CppArray<::System::String*>* ColliderRelativePathList; // 0x38
		::RPG::GameCore::PhotoGraphFuncBtnType PhotoGraphMode; // 0x40
		::RPG::GameCore::PhotoGraphIdentifyDisplayType IdentifyDisplayType; // 0x44
		::Il2CppArray<::RPG::GameCore::PhotoGraphAimContainerConfig*>* AimTargetContainerConfig; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyFinish; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyTarget; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyNoneTarget; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartPhotoGraph; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitPhotoGraph; // 0x70
		::System::Single ExitDelayAfterFinishPhoto; // 0x78
		::System::Single TriggerExitDelay; // 0x7C
		::RPG::GameCore::PhotoGraphOverrideModeConfig* OverrideConfig; // 0x80
		::RPG::GameCore::PhotoGraphModeExtraConfigSetting* ExtraSettings; // 0x88
		::RPG::GameCore::DynamicString* BindName; // 0x90
		::System::Boolean NotStartPhotoInTriggerRangeMode; // 0x98
		::RPG::GameCore::PhotoGraphShotResultCondition* ShotResultCondition; // 0xA0
		::System::Boolean HideTwoPointFourParam; // 0xA8
		::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam* ConditionPhotoParam; // 0xB0
		::System::Boolean HideTripodConfig; // 0xB8
		::RPG::GameCore::PhotoGraphTripodModeConfig* TripodModeConfig; // 0xC0
		::System::Boolean HideLongRangeModeConfig; // 0xC8
		::RPG::GameCore::PhotoGraphLongRangeModeConfig* LongRangeModeConfig; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B55F517E5C1B3FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN_METHOD_3_0B55F517E5C1B3FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_034DCED400B9F2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDSWITCHPHOTOGRAPHFUNCBTN_METHOD_3_034DCED400B9F2A1_OFFSET))(a1, a2);
		}
	};
}
