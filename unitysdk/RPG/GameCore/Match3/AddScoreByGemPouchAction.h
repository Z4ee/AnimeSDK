#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_5_1B601DEFDBDB86C8_OFFSET UNITYSDK_OFFSET(0x1D25CDA0)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_5_75D826E496F8D7D4_OFFSET UNITYSDK_OFFSET(0x1D25CE00)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25CDF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddScoreByGemPouchAction_TypeDefinitionIndex = 24619;

	class AddScoreByGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ScaleFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1B601DEFDBDB86C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_5_1B601DEFDBDB86C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_75D826E496F8D7D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_5_75D826E496F8D7D4_OFFSET))(a1, a2);
		}
	};
}
