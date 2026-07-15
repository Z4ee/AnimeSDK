#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_5_A4BBB32687D9238C_OFFSET UNITYSDK_OFFSET(0x1BD24A80)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_5_F8D8CA57B25625B0_OFFSET UNITYSDK_OFFSET(0x1BD24AE0)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD24AD0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyOpponentCurveAction_TypeDefinitionIndex = 24027;

	class ApplyOpponentCurveAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CurveID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A4BBB32687D9238C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_5_A4BBB32687D9238C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F8D8CA57B25625B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_5_F8D8CA57B25625B0_OFFSET))(a1, a2);
		}
	};
}
