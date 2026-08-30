#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET UNITYSDK_OFFSET(0x1D85FD20)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_C4E659BAFE2AAE20_OFFSET UNITYSDK_OFFSET(0x1D85FCA0)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetMascotFakePlayerAction_TypeDefinitionIndex = 18479;

	class FiveDimForceResetMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4E659BAFE2AAE20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_C4E659BAFE2AAE20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A87B04BB9509D7E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET))(a1, a2);
		}
	};
}
