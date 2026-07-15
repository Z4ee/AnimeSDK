#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleCardSelectItemGroup; }

#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BE39DE0)
#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE39DA0)
#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE39DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleCardBuffSelection_TypeDefinitionIndex = 21731;

	class ShowBattleCardBuffSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* SelectItemGroups; // 0x18
		::System::Single AutoSelectDelay; // 0x20
		::System::Single AutoConfirmDelay; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleCardBuffSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleCardBuffSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
