#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG_METHOD_3_5444ED2F16C312B1_OFFSET UNITYSDK_OFFSET(0x19896730)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG_METHOD_3_E873DC79EBF79413_OFFSET UNITYSDK_OFFSET(0x198966D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorTakeByCountConfig_TypeDefinitionIndex = 20210;

	class LittleGameAbilityTargetSelectorTakeByCountConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Source; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* CountValue; // 0x18
		::System::Boolean Random; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E873DC79EBF79413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG_METHOD_3_E873DC79EBF79413_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5444ED2F16C312B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORTAKEBYCOUNTCONFIG_METHOD_3_5444ED2F16C312B1_OFFSET))(a1, a2);
		}
	};
}
