#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERWALKINGEFFECT_METHOD_3_0CFFD8BD6CFAF8A9_OFFSET UNITYSDK_OFFSET(0x1D29B660)
#define RPG_GAMECORE_TRIGGERWALKINGEFFECT_METHOD_3_6D40DE1F27965894_OFFSET UNITYSDK_OFFSET(0x1D29B5F0)
#define RPG_GAMECORE_TRIGGERWALKINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29B640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWalkingEffect_TypeDefinitionIndex = 22182;

	class TriggerWalkingEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FootName; // 0x18
		::System::String* EffectPrefab; // 0x20
		::System::Boolean UseFootScale; // 0x28
		::RPG::GameCore::AxisType RotationAxis; // 0x2C
		::System::Boolean UseLocalRotationSpace; // 0x30
		::System::Boolean TriggerWaveEffect; // 0x31
		::System::Single WalkingEffectMaxDepth; // 0x34
		::System::String* WalkingEffectScaleCurveName; // 0x38
		::RPG::MVector3 LocalOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D40DE1F27965894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWalkingEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWalkingEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT_METHOD_3_6D40DE1F27965894_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CFFD8BD6CFAF8A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWalkingEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWALKINGEFFECT_METHOD_3_0CFFD8BD6CFAF8A9_OFFSET))(a1, a2);
		}
	};
}
