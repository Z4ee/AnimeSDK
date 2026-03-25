#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CreateBattleEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_1064A55224404902_OFFSET UNITYSDK_OFFSET(0x1713AA50)
#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_72086B7FCC7551F4_OFFSET UNITYSDK_OFFSET(0x1713A3D0)
#define RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1713A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventFromGridFightBackend_TypeDefinitionIndex = 21656;

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

		static ::System::Void Method_4_1064A55224404902(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_1064A55224404902_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72086B7FCC7551F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTFROMGRIDFIGHTBACKEND_METHOD_4_72086B7FCC7551F4_OFFSET))(a1, a2);
		}
	};
}
