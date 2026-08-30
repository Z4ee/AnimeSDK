#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_3_165CAF032D89E277_OFFSET UNITYSDK_OFFSET(0x1D0E2F80)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_3_421184B1EAED5886_OFFSET UNITYSDK_OFFSET(0x1D0E2F00)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E2F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterHiddenAreaAction_TypeDefinitionIndex = 18440;

	class FiveDimEnterHiddenAreaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_421184B1EAED5886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_3_421184B1EAED5886_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_165CAF032D89E277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_3_165CAF032D89E277_OFFSET))(a1, a2);
		}
	};
}
