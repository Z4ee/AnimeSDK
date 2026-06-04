#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_3_7FDF117225D92464_OFFSET UNITYSDK_OFFSET(0x1972E0C0)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_3_CA357A145F052238_OFFSET UNITYSDK_OFFSET(0x1973AA20)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972E0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableSimpleHitBoxAction_TypeDefinitionIndex = 17879;

	class FiveDimEnableSimpleHitBoxAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA357A145F052238(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_3_CA357A145F052238_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FDF117225D92464(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_3_7FDF117225D92464_OFFSET))(a1, a2);
		}
	};
}
