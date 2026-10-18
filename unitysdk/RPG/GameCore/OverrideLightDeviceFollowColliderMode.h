#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_METHOD_3_54B302CE941E94A5_OFFSET UNITYSDK_OFFSET(0x1D8E7A60)
#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_METHOD_3_CA00509555E30130_OFFSET UNITYSDK_OFFSET(0x1D8E79C0)
#define RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideLightDeviceFollowColliderMode_TypeDefinitionIndex = 22344;

	class OverrideLightDeviceFollowColliderMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Boolean Inverse; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA00509555E30130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_METHOD_3_CA00509555E30130_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54B302CE941E94A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideLightDeviceFollowColliderMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDELIGHTDEVICEFOLLOWCOLLIDERMODE_METHOD_3_54B302CE941E94A5_OFFSET))(a1, a2);
		}
	};
}
