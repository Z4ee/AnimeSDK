#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_3_3CFF1935919D4915_OFFSET UNITYSDK_OFFSET(0x1972F5B0)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_3_98D97814C5DCA030_OFFSET UNITYSDK_OFFSET(0x19741C10)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972F590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierAttackAction_TypeDefinitionIndex = 17874;

	class FiveDimGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98D97814C5DCA030(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierAttackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_3_98D97814C5DCA030_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CFF1935919D4915(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_3_3CFF1935919D4915_OFFSET))(a1, a2);
		}
	};
}
