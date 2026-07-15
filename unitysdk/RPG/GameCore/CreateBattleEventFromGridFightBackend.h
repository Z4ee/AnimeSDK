#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CreateBattleEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_01BF5F6B4654BBE6_OFFSET UNITYSDK_OFFSET(0x1BC39560)
#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_37555E70B2C84805_OFFSET UNITYSDK_OFFSET(0x1BC38F00)
#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC38EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventFromGridFightBackend_TypeDefinitionIndex = 22585;

	class CreateBattleEventFromGridFightBackend : public ::RPG::GameCore::CreateBattleEvent
	{
	public:
		::RPG::GameCore::DynamicFloat* BackendID; // 0x58
		::System::Boolean TriggerAllBlockedBECallbacks; // 0x60
		::System::Boolean OnlyAllowHealBySelf; // 0x61
		::System::Boolean TreatAsRoleWhenByCompareCharacterID; // 0x62
		::System::Boolean TriggerRedBreakCallbacks; // 0x63

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_01BF5F6B4654BBE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_01BF5F6B4654BBE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37555E70B2C84805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_37555E70B2C84805_OFFSET))(a1, a2);
		}
	};
}
