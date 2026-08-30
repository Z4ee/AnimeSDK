#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_METHOD_3_2E1E9604E6380ED0_OFFSET UNITYSDK_OFFSET(0x1E82B240)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_METHOD_3_5318001A1371084F_OFFSET UNITYSDK_OFFSET(0x1E82B180)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82B1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFlipperLightDeviceRangeFollowPlayer_TypeDefinitionIndex = 22094;

	class SetFlipperLightDeviceRangeFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Follow; // 0x18
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* RangeScaleTarget; // 0x28
		::System::Single ScaleMultiplier; // 0x30
		::System::Boolean IsInside; // 0x34
		::System::Single LimitRange; // 0x38
		::System::Single FollowDistance; // 0x3C
		::System::Boolean EnableSecondEdge; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5318001A1371084F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_METHOD_3_5318001A1371084F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E1E9604E6380ED0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICERANGEFOLLOWPLAYER_METHOD_3_2E1E9604E6380ED0_OFFSET))(a1, a2);
		}
	};
}
