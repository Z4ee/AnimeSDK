#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeSlowCurve.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GLOBALTIMESLOW_METHOD_3_58A8158E38EBBAFF_OFFSET UNITYSDK_OFFSET(0x1D145990)
#define RPG_GAMECORE_GLOBALTIMESLOW_METHOD_3_A8DC0B35F860A4F4_OFFSET UNITYSDK_OFFSET(0x1D145810)
#define RPG_GAMECORE_GLOBALTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1458E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalTimeSlow_TypeDefinitionIndex = 20647;

	class GlobalTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x18
		::System::Boolean Infinite; // 0x20
		::System::Boolean ActiveNextFrame; // 0x21
		::RPG::GameCore::DynamicFloat* UnscaledDuration; // 0x28
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x30
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x38
		::System::String* FadeInCurveName; // 0x40
		::System::String* FadeOutCurveName; // 0x48
		::RPG::GameCore::TimeSlowCurve Curve; // 0x50
		::System::String* SlowKey; // 0x58
		::RPG::GameCore::TargetEvaluator* IgnoreTargetType; // 0x60
		::RPG::GameCore::EntityTypeMask IgnoreEntityTypeMask; // 0x68
		::System::Boolean RemoveOnLockPlayerControl; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8DC0B35F860A4F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW_METHOD_3_A8DC0B35F860A4F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58A8158E38EBBAFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW_METHOD_3_58A8158E38EBBAFF_OFFSET))(a1, a2);
		}
	};
}
