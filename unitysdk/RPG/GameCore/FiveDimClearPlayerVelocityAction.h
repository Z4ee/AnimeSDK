#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_4_23892BB6051297ED_OFFSET UNITYSDK_OFFSET(0x1D6881A0)
#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_4_6EF8C1ACE1901A08_OFFSET UNITYSDK_OFFSET(0x1D688220)
#define RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D688210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimClearPlayerVelocityAction_TypeDefinitionIndex = 18766;

	class FiveDimClearPlayerVelocityAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23892BB6051297ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_4_23892BB6051297ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6EF8C1ACE1901A08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLEARPLAYERVELOCITYACTION_METHOD_4_6EF8C1ACE1901A08_OFFSET))(a1, a2);
		}
	};
}
