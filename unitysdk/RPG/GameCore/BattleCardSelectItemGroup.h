#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleCardSelectItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_BATTLECARDSELECTITEMGROUP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A3E3CC0)
#define RPG_GAMECORE_BATTLECARDSELECTITEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E3E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCardSelectItemGroup_TypeDefinitionIndex = 21730;

	class BattleCardSelectItemGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattleCardSelectItem* LightSelection; // 0x10
		::RPG::GameCore::BattleCardSelectItem* DarkSelection; // 0x18
		::RPG::GameCore::DynamicFloat* AutoSelectWeight; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x28
		::System::Boolean IsAutoSelection; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDSELECTITEMGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleCardSelectItemGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCardSelectItemGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDSELECTITEMGROUP_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
