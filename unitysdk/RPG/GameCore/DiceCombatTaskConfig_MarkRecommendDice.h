#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_F9BCBEFFED26F9E2_OFFSET UNITYSDK_OFFSET(0x1887C860)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_FD7C2F4D18F7659D_OFFSET UNITYSDK_OFFSET(0x18877870)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18877820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkRecommendDice_TypeDefinitionIndex = 15322;

	class DiceCombatTaskConfig_MarkRecommendDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9BCBEFFED26F9E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_F9BCBEFFED26F9E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD7C2F4D18F7659D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKRECOMMENDDICE_METHOD_3_FD7C2F4D18F7659D_OFFSET))(a1, a2);
		}
	};
}
