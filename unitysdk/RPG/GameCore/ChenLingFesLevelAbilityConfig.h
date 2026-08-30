#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_METHOD_3_0DBDEFC980D86E65_OFFSET UNITYSDK_OFFSET(0x1E015CA0)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_METHOD_3_B98AC4C5CE3256B4_OFFSET UNITYSDK_OFFSET(0x1E013DC0)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E013DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelAbilityConfig_TypeDefinitionIndex = 18232;

	class ChenLingFesLevelAbilityConfig : public ::RPG::GameCore::ChenLingFesAbilityConfig
	{
	public:
		::System::String* LifeTime; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActive; // 0x20
		::System::String* LoopInterval; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopTrigger; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayStart; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDeactive; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DBDEFC980D86E65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_METHOD_3_0DBDEFC980D86E65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B98AC4C5CE3256B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesLevelAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesLevelAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYCONFIG_METHOD_3_B98AC4C5CE3256B4_OFFSET))(a1, a2);
		}
	};
}
