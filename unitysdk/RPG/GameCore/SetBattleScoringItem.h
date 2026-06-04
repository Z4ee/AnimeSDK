#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLESCORINGITEM_METHOD_3_86E0A7CF65552535_OFFSET UNITYSDK_OFFSET(0x19C2BC40)
#define RPG_GAMECORE_SETBATTLESCORINGITEM_METHOD_3_B19BA63EE6BF60C1_OFFSET UNITYSDK_OFFSET(0x19C2BBB0)
#define RPG_GAMECORE_SETBATTLESCORINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2BC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleScoringItem_TypeDefinitionIndex = 21916;

	class SetBattleScoringItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ScoringID; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::ScoringShowType ShowType; // 0x28
		::RPG::GameCore::DynamicFloat* DisplayValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B19BA63EE6BF60C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleScoringItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleScoringItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM_METHOD_3_B19BA63EE6BF60C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86E0A7CF65552535(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleScoringItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleScoringItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM_METHOD_3_86E0A7CF65552535_OFFSET))(a1, a2);
		}
	};
}
