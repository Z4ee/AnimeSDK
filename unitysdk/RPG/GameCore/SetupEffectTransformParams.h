#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsOffsetType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsRotateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_METHOD_3_72C251D1CAD24F9B_OFFSET UNITYSDK_OFFSET(0x176E9CA0)
#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_METHOD_3_9E0A20077A3B86BB_OFFSET UNITYSDK_OFFSET(0x176E9D20)
#define RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x176E9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupEffectTransformParams_TypeDefinitionIndex = 20432;

	class SetupEffectTransformParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OverrideFloating; // 0x18
		::RPG::GameCore::SetupEffectTransformParamsOffsetType OffsetType; // 0x1C
		::RPG::GameCore::DynamicFloat* FloatingFrequency; // 0x20
		::RPG::GameCore::DynamicFloat* FloatingDistance; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetNoise3DSpeed; // 0x30
		::RPG::GameCore::DynamicFloat* RandomMove3DBoxSize; // 0x38
		::System::Boolean OverrideRotating; // 0x40
		::RPG::GameCore::SetupEffectTransformParamsRotateType RotateType; // 0x44
		::RPG::GameCore::DynamicFloat* RotatingFrequency; // 0x48
		::RPG::GameCore::DynamicFloat* RotatingSpeed; // 0x50
		::RPG::GameCore::DynamicFloat* RotateNoise3DSpeed; // 0x58
		::RPG::GameCore::DynamicFloat* WobbyScale; // 0x60
		::RPG::MVector3 WobbyCenterOffset; // 0x68
		::RPG::GameCore::DynamicFloat* SwingAngle; // 0x78
		::RPG::GameCore::DynamicFloat* SwingFrequency; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72C251D1CAD24F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupEffectTransformParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupEffectTransformParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_METHOD_3_72C251D1CAD24F9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E0A20077A3B86BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPEFFECTTRANSFORMPARAMS_METHOD_3_9E0A20077A3B86BB_OFFSET))(a1, a2);
		}
	};
}
