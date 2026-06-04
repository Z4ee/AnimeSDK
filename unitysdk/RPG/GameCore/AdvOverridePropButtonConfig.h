#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_4E4FB04AF6AA7A1C_OFFSET UNITYSDK_OFFSET(0x194302C0)
#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_B6D642DF63679A35_OFFSET UNITYSDK_OFFSET(0x19430340)
#define RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19430310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOverridePropButtonConfig_TypeDefinitionIndex = 19399;

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

		static ::System::Void Method_3_4E4FB04AF6AA7A1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverridePropButtonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverridePropButtonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_4E4FB04AF6AA7A1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6D642DF63679A35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverridePropButtonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverridePropButtonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDEPROPBUTTONCONFIG_METHOD_3_B6D642DF63679A35_OFFSET))(a1, a2);
		}
	};
}
