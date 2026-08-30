#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_METHOD_3_5DA5EB6B29C5850C_OFFSET UNITYSDK_OFFSET(0x1D6BC480)
#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_METHOD_3_6C10F6AE276DF0C7_OFFSET UNITYSDK_OFFSET(0x1D6BC4C0)
#define RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifierOverrideFeatureFlagParam_TypeDefinitionIndex = 21562;

	class AdvModifierOverrideFeatureFlagParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureBehaviorClampAlertLevel OverrideAlertLevelClamp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DA5EB6B29C5850C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_METHOD_3_5DA5EB6B29C5850C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C10F6AE276DF0C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIEROVERRIDEFEATUREFLAGPARAM_METHOD_3_6C10F6AE276DF0C7_OFFSET))(a1, a2);
		}
	};
}
