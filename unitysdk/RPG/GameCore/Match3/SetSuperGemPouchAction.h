#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_5_6E63E02DC554E499_OFFSET UNITYSDK_OFFSET(0x1D264280)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_5_96E644ECB7889265_OFFSET UNITYSDK_OFFSET(0x1D264220)
#define RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D264270)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetSuperGemPouchAction_TypeDefinitionIndex = 24639;

	class SetSuperGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_96E644ECB7889265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_5_96E644ECB7889265_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6E63E02DC554E499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetSuperGemPouchAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetSuperGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSUPERGEMPOUCHACTION_METHOD_5_6E63E02DC554E499_OFFSET))(a1, a2);
		}
	};
}
