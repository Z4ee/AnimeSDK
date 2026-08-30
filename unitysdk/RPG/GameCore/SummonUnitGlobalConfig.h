#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class SummonUnitGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_METHOD_2_5811277CE378B08C_OFFSET UNITYSDK_OFFSET(0x1CB14F50)
#define RPG_GAMECORE_SUMMONUNITGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB151C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGlobalConfig_TypeDefinitionIndex = 17397;

	class SummonUnitGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TriggerRaycastItvl; // 0x10
		::System::Single TriggerRaycastUpperBound; // 0x14
		::System::Single TriggerRaycastLowerBound; // 0x18
		::System::Single TriggerPathCheckDistRatio; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SummonUnitGroupConfig*>* SummonUnitGroup; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SummonUnitGameplayConfig*>* GameplayConfigMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5811277CE378B08C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitGlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGLOBALCONFIG_METHOD_2_5811277CE378B08C_OFFSET))(a1, a2);
		}
	};
}
