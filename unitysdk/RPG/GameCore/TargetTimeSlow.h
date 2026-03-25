#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETTIMESLOW_METHOD_3_13359A471B27CB2D_OFFSET UNITYSDK_OFFSET(0x177D3D20)
#define RPG_GAMECORE_TARGETTIMESLOW_METHOD_3_D4ED72DF6DAD3332_OFFSET UNITYSDK_OFFSET(0x177D3B70)
#define RPG_GAMECORE_TARGETTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D3C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetTimeSlow_TypeDefinitionIndex = 21338;

	class TargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single ActiveDelay; // 0x20
		::System::Single TimeScale; // 0x24
		::System::Boolean Infinite; // 0x28
		::System::Single UnscaledDuration; // 0x2C
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x30
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x38
		::System::String* FadeInCurveName; // 0x40
		::System::String* FadeOutCurveName; // 0x48
		::System::String* SlowKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4ED72DF6DAD3332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW_METHOD_3_D4ED72DF6DAD3332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13359A471B27CB2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW_METHOD_3_13359A471B27CB2D_OFFSET))(a1, a2);
		}
	};
}
