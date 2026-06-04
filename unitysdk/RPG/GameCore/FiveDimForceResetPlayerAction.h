#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_4B221D8A19E4C1B7_OFFSET UNITYSDK_OFFSET(0x1972F390)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_8C38319E73CBAD7A_OFFSET UNITYSDK_OFFSET(0x1973E840)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetPlayerAction_TypeDefinitionIndex = 17781;

	class FiveDimForceResetPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C38319E73CBAD7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_8C38319E73CBAD7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B221D8A19E4C1B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_4B221D8A19E4C1B7_OFFSET))(a1, a2);
		}
	};
}
