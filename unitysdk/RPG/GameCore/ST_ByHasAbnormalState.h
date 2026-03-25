#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_2DB162E74DFC7EA2_OFFSET UNITYSDK_OFFSET(0x176933B0)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET UNITYSDK_OFFSET(0x17693480)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17693430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAbnormalState_TypeDefinitionIndex = 18359;

	class ST_ByHasAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2DB162E74DFC7EA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_2DB162E74DFC7EA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7DF28FB497C3CEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET))(a1, a2);
		}
	};
}
