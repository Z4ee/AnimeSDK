#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_3_23CFBB0F6EF74B5E_OFFSET UNITYSDK_OFFSET(0x17207A60)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_3_2E906BD1B9D882E7_OFFSET UNITYSDK_OFFSET(0x172079A0)
#define RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17207A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimReverseGeckoMoveAction_TypeDefinitionIndex = 17194;

	class FiveDimReverseGeckoMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E906BD1B9D882E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_3_2E906BD1B9D882E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23CFBB0F6EF74B5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREVERSEGECKOMOVEACTION_METHOD_3_23CFBB0F6EF74B5E_OFFSET))(a1, a2);
		}
	};
}
