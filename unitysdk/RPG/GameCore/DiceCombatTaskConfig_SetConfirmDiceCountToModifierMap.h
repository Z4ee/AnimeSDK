#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CountToModifierMapRangeItem; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_6A66F8AB0B3BB9E3_OFFSET UNITYSDK_OFFSET(0x188788D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_8EB3AE4529AB8670_OFFSET UNITYSDK_OFFSET(0x1887CE20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18878880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap_TypeDefinitionIndex = 15232;

	class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsAttacker; // 0x10
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsDefender; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EB3AE4529AB8670(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_8EB3AE4529AB8670_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A66F8AB0B3BB9E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_METHOD_3_6A66F8AB0B3BB9E3_OFFSET))(a1, a2);
		}
	};
}
