#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_4B221D8A19E4C1B7_OFFSET UNITYSDK_OFFSET(0x1D85FE00)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_CF820EF9A7A014C6_OFFSET UNITYSDK_OFFSET(0x1D85FD80)
#define RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85FDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetPlayerAction_TypeDefinitionIndex = 18478;

	class FiveDimForceResetPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF820EF9A7A014C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_CF820EF9A7A014C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B221D8A19E4C1B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETPLAYERACTION_METHOD_3_4B221D8A19E4C1B7_OFFSET))(a1, a2);
		}
	};
}
