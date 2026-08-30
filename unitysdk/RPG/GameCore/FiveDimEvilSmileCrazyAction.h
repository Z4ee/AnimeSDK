#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_3_515F2405AF3C9273_OFFSET UNITYSDK_OFFSET(0x1D85CD10)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_3_7EC19B542D410DF2_OFFSET UNITYSDK_OFFSET(0x1D85CC90)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85CD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileCrazyAction_TypeDefinitionIndex = 18576;

	class FiveDimEvilSmileCrazyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EC19B542D410DF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_3_7EC19B542D410DF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_515F2405AF3C9273(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_METHOD_3_515F2405AF3C9273_OFFSET))(a1, a2);
		}
	};
}
