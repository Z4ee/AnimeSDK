#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_METHOD_2_66BE78B67A1EF1B2_OFFSET UNITYSDK_OFFSET(0x1D742BB0)
#define RPG_GAMECORE_HITTARGETTIMESLOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D742FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitTargetTimeSlowConfig_TypeDefinitionIndex = 22594;

	class HitTargetTimeSlowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ActiveDelay; // 0x10
		::System::Single TimeScale; // 0x14
		::System::Boolean Infinite; // 0x18
		::System::Single UnscaledDuration; // 0x1C
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x20
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x28
		::System::String* FadeInCurveName; // 0x30
		::System::String* FadeOutCurveName; // 0x38
		::System::String* SlowKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTARGETTIMESLOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_66BE78B67A1EF1B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitTargetTimeSlowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitTargetTimeSlowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_METHOD_2_66BE78B67A1EF1B2_OFFSET))(a1, a2);
		}
	};
}
