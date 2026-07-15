#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_3_95AC4C520B4D0053_OFFSET UNITYSDK_OFFSET(0x1BA92E70)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_3_CE36B3BB7E3E1916_OFFSET UNITYSDK_OFFSET(0x1BA92D90)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA92E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableGrenadierAttackAction_TypeDefinitionIndex = 18057;

	class FiveDimEnableGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE36B3BB7E3E1916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_3_CE36B3BB7E3E1916_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95AC4C520B4D0053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_3_95AC4C520B4D0053_OFFSET))(a1, a2);
		}
	};
}
