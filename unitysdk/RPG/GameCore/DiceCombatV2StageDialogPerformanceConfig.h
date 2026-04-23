#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }

#define RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_METHOD_2_3167CEAB7AD47A54_OFFSET UNITYSDK_OFFSET(0x1887ECA0)
#define RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1887EDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2StageDialogPerformanceConfig_TypeDefinitionIndex = 15356;

	class DiceCombatV2StageDialogPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>* PerformanceList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3167CEAB7AD47A54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2StageDialogPerformanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2StageDialogPerformanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_METHOD_2_3167CEAB7AD47A54_OFFSET))(a1, a2);
		}
	};
}
