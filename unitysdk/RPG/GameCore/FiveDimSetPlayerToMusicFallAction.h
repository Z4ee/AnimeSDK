#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_0ABD65B6F496CADD_OFFSET UNITYSDK_OFFSET(0x19755940)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_3199361A58A884E9_OFFSET UNITYSDK_OFFSET(0x19755830)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19755920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerToMusicFallAction_TypeDefinitionIndex = 17847;

	class FiveDimSetPlayerToMusicFallAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3199361A58A884E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_3199361A58A884E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0ABD65B6F496CADD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_0ABD65B6F496CADD_OFFSET))(a1, a2);
		}
	};
}
