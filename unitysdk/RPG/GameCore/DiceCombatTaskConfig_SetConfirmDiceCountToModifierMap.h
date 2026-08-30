#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CountToModifierMapRangeItem; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_77E76224515F95EF_OFFSET UNITYSDK_OFFSET(0x1DB06BF0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_FC2F814D0928CA11_OFFSET UNITYSDK_OFFSET(0x1DB06C50)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB06C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap_TypeDefinitionIndex = 15892;

	class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsAttacker; // 0x10
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsDefender; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77E76224515F95EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_77E76224515F95EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC2F814D0928CA11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_FC2F814D0928CA11_OFFSET))(a1, a2);
		}
	};
}
