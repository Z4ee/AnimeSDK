#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_4CF2B4609B394DC0_OFFSET UNITYSDK_OFFSET(0x1CDD4100)
#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_B6D642DF63679A35_OFFSET UNITYSDK_OFFSET(0x1CDD4140)
#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD4130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOverridePropButtonConfig_TypeDefinitionIndex = 20303;

	class AdvOverridePropButtonConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x20
		::System::Boolean Refresh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CF2B4609B394DC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverridePropButtonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverridePropButtonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_4CF2B4609B394DC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6D642DF63679A35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverridePropButtonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverridePropButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_B6D642DF63679A35_OFFSET))(a1, a2);
		}
	};
}
