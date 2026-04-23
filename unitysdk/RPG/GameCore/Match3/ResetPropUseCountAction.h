#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_5_3428437EA378E41B_OFFSET UNITYSDK_OFFSET(0x18AB3050)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_5_DBEE0554D4342B32_OFFSET UNITYSDK_OFFSET(0x18ABA5D0)
#define RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB2FE0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ResetPropUseCountAction_TypeDefinitionIndex = 23717;

	class ResetPropUseCountAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DBEE0554D4342B32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ResetPropUseCountAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_5_DBEE0554D4342B32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3428437EA378E41B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ResetPropUseCountAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ResetPropUseCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RESETPROPUSECOUNTACTION_METHOD_5_3428437EA378E41B_OFFSET))(a1, a2);
		}
	};
}
