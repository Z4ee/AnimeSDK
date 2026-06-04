#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_5_B8FC9CD481543706_OFFSET UNITYSDK_OFFSET(0x198E41E0)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_5_EBD08443661EE41D_OFFSET UNITYSDK_OFFSET(0x198EB6E0)
#define RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E4170)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetScoreBonusAction_TypeDefinitionIndex = 23551;

	class SetScoreBonusAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::Boolean Enduring; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EBD08443661EE41D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetScoreBonusAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetScoreBonusAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_5_EBD08443661EE41D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B8FC9CD481543706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetScoreBonusAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetScoreBonusAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSCOREBONUSACTION_METHOD_5_B8FC9CD481543706_OFFSET))(a1, a2);
		}
	};
}
